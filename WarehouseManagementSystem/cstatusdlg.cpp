#include "cstatusdlg.h"
#include "ui_cstatusdlg.h"

#include <QStandardItemModel>

CStatusDLG::CStatusDLG(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CStatusDLG)
{
    ui->setupUi(this);

    QStandardItemModel *model = new QStandardItemModel(this);
    model->setRowCount(5); // 设置列数
    model->setColumnCount(9); // 设置列数

    model->setHeaderData(0, Qt::Horizontal, "序号");
    model->setHeaderData(1, Qt::Horizontal, "仓库号");
    model->setHeaderData(2, Qt::Horizontal, "入库日期");
    model->setHeaderData(3, Qt::Horizontal, "出库日期");
    model->setHeaderData(4, Qt::Horizontal, "仓库数量");
    model->setHeaderData(5, Qt::Horizontal, "盘点数量");
    model->setHeaderData(6, Qt::Horizontal, "盈利+/亏损-");
    model->setHeaderData(7, Qt::Horizontal, "操作人");
    model->setHeaderData(8, Qt::Horizontal, "盘点时间");

    ui->tableView->setModel(model);

    ui->tableView->verticalHeader()->setVisible(false);       //无行头
//    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);  //自适应列宽
    ui->tableView->setEditTriggers(QAbstractItemView::CurrentChanged);  //不可编辑
}

CStatusDLG::~CStatusDLG()
{
    delete ui;
}
