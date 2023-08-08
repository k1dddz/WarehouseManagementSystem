#include <QSqlQuery>
#include <QStandardItemModel>
#include <QMessageBox>

#include "cstoragedlg.h"
#include "database.h"
#include "ui_cstoragedlg.h"
#include "global.h"



CStorageDLG::CStorageDLG(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CStorageDLG)
{
    ui->setupUi(this);

    //信号槽连接
    connect(ui->pushButton_query, &QPushButton::clicked, this, &CStorageDLG::slotQuery);
    connect(ui->pushButton_delete, &QPushButton::clicked, this, &CStorageDLG::slotDelete);
    connect(ui->pushButton_move, &QPushButton::clicked, this, &CStorageDLG::slotMove);

    connect(ui->pushButton_add, &QPushButton::clicked, this, &CStorageDLG::slotAdd);

    m_arFields.append("序号");
    m_arFields.append("货物ID");
    m_arFields.append("类别ID");
    m_arFields.append("类别名称");
    m_arFields.append("数量");
    m_arFields.append("单价");
    m_arFields.append("供应商");
    m_arFields.append("入库单编号");
    m_arFields.append("入库时间");
    m_arFields.append("出库时间");
    m_arFields.append("负责人");
    m_arFields.append("联系方式");

    m_curID = -1;

    //初始化表格
    initTableView();

}

CStorageDLG::~CStorageDLG()
{
    delete m_pModelLeft;
    delete m_pModelRight;

    delete ui;
}

void CStorageDLG::initTableView()
{
    //左边查询表格
    m_pModelLeft = new QStandardItemModel(this);
    ui->tableView_left->setModel(m_pModelLeft);
    m_pModelLeft->setColumnCount(2);
    m_pModelLeft->setRowCount(12);
    ui->tableView_left->verticalHeader()->setVisible(false);
    ui->tableView_left->horizontalHeader()->setVisible(false);
    ui->tableView_left->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); //自适应宽度
//    ui->tableView_left->setEditTriggers(QAbstractItemView::CurrentChanged);     //单击编辑
    ui->tableView_left->setEditTriggers(QAbstractItemView::NoEditTriggers);     //不可编辑

    //右边添加表格
    QStandardItemModel *m_pModelRight = new QStandardItemModel(this);
    ui->tableView_right->setModel(m_pModelRight);
    m_pModelRight->setColumnCount(2);
    m_pModelRight->setRowCount(12);
    ui->tableView_right->verticalHeader()->setVisible(false);
    ui->tableView_right->horizontalHeader()->setVisible(false);
    ui->tableView_right->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_right->setEditTriggers(QAbstractItemView::CurrentChanged);


    //填充表格第一列字段名
    QModelIndex index;
    for(int i = 0 ; i < m_arFields.size() ; i++)
    {
        index = m_pModelLeft->index(i, 0);
        m_pModelLeft->setData(index, m_arFields[i], Qt::DisplayRole);
        index = m_pModelRight->index(i, 0);
        m_pModelRight->setData(index, m_arFields[i], Qt::DisplayRole);
    }

    //设置右边第一列不可编辑
    ui->tableView_right->setItemDelegateForColumn(0, new ReadOnlyDelegate(ui->tableView_right));
}

void CStorageDLG::slotQuery()
{
    //根据ID和仓库名获取货物记录

    QString strNum = ui->lineEdit_num->text();
    QString strWareHouseName = ui->lineEdit_wareHoseNameL->text();

    QString strSql = QString("Select %1 from %2 Where 序号 = %3").arg(m_arFields.join(",")).arg(strWareHouseName).arg(strNum);

    QSqlQuery query;
    query.exec(strSql);

    QSqlRecord record = query.record();
    int fieldCount = record.count();
    if(query.size() != 2)
    {
        QMessageBox::information(this, "提示", "无该编码货物信息", QMessageBox::Ok);
        return;
    }

    //查询结果填入表格显示
    QModelIndex index;
    query.next();
    for (int i = 0 ; i < fieldCount ; i++)
    {
        index = m_pModelLeft->index(i, 1);
        m_pModelLeft->setData(index, query.value(i).toString(), Qt::DisplayRole);
    }

    //更新当前选择货物
    m_curID = strNum.toInt();
    m_curTableName = strWareHouseName;
}

void CStorageDLG::slotDelete()
{
    //没有执行查询操作
    if(-1 == m_curID)
    {
        QMessageBox::information(this, "提示", "当前无目标货物，无法进行出库操作", QMessageBox::Ok);
        return;
    }

    QMessageBox::StandardButton button = QMessageBox::information(nullptr, "提示", "确定要将当前货物出库吗", QMessageBox::Ok | QMessageBox::Cancel);
    if (button == QMessageBox::Cancel)
        return;

    //执行删除操作
    QString strWhere = QString("序号 = %1").arg(m_curID);
    g_dataBase.DeleteRecords(m_curTableName, strWhere);
    m_curID = -1;
    m_curTableName = "";

}

void CStorageDLG::slotMove()
{
    //没有执行查询操作
    if(-1 == m_curID)
    {
        QMessageBox::information(this, "提示", "当前无目标货物，无法进行移库操作", QMessageBox::Ok);
        return;
    }
    //目标仓库未录入
    QString strToTable = ui->lineEdit_move->text();
    if(strToTable.isEmpty())
    {
        QMessageBox::information(this, "提示", "目标仓库未填写，请正确填写目标仓库名", QMessageBox::Ok);
        return;
    }
    //目标仓库不存在
    QStringList arTable = g_dataBase.m_data.tables();
    if(!arTable.contains(strToTable))
    {
        QMessageBox::information(this, "提示", "该仓库不存在，请填写正确的目标仓库名", QMessageBox::Ok);
        return;
    }

    QString strMsg = QString("确定要将当前货物移动至%1吗").arg(m_curTableName);
    QMessageBox::StandardButton button = QMessageBox::information(nullptr, "提示", "确定要将当前货物移动至吗", QMessageBox::Ok | QMessageBox::Cancel);
    if (button == QMessageBox::Cancel)
        return;

    QSqlQuery query;
    QString strSql = QString("Select * From %1 Where 序号 = %2").arg(m_curTableName).arg(m_curID);
    //获取当前货物记录
    if(!(query.exec(strSql) && query.next()))
    {
        return;
    }
    QSqlRecord records = query.record();
    int fieldCount = records.count();
    Record rcd;
    for (int i = 0 ; i < fieldCount ; i++ )
    {
        rcd.fieldsList.append(records.fieldName(i));
        rcd.valueList.push_back(records.value(i));
    }
    QVector<Record> rcds;
    rcds.push_back(rcd);
    g_dataBase.InsertRecords(m_curTableName, rcds);
    g_dataBase.DeleteRecords(m_curTableName, strSql);

    QMessageBox::information(this, "提示", "移库成功", QMessageBox::Ok);

}

void CStorageDLG::slotAdd()
{
    QString whNum = ui->lineEdit_wareHouseNumR->text();
    if(whNum.isEmpty())
    {
        QMessageBox::information(this, "提示", "未录入入库仓库名，无法入库", QMessageBox::Ok);
        return;
    }

    //获取货物信息
    Record rcd;
    QVector<Record> rcds;
    rcd.fieldsList.append(m_arFields);

    for (int i = 0 ; i < m_arFields.size() ; i++)
    {
         QModelIndex index = m_pModelRight->index(i, 1);
         rcd.valueList.push_back(m_pModelRight->data(index));
    }
    rcds.push_back(rcd);
    //插入仓库
    g_dataBase.InsertRecords(whNum, rcds);

    QMessageBox::information(this, "提示", "入库完成", QMessageBox::Ok);
}
