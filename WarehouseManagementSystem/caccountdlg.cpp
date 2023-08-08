#include "caccountdlg.h"
#include "ui_caccountdlg.h"
#include "caddaccountdlg.h"

#include <QStandardItemModel>

CAccountDLG::CAccountDLG(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CAccountDLG)
{
    ui->setupUi(this);

    connect(ui->pushButton_add, &QPushButton::clicked, this, &CAccountDLG::slotAddNewAccount);

    QStandardItemModel *model = new QStandardItemModel(this);
    model->setRowCount(5); // 设置列数
    model->setColumnCount(8); // 设置列数

    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "姓名");
    model->setHeaderData(2, Qt::Horizontal, "性别");
    model->setHeaderData(3, Qt::Horizontal, "职位");
    model->setHeaderData(4, Qt::Horizontal, "工龄");
    model->setHeaderData(5, Qt::Horizontal, "联系方式");
    model->setHeaderData(6, Qt::Horizontal, "账号");
    model->setHeaderData(7, Qt::Horizontal, "密码");

    ui->tableView->setModel(model);

    ui->tableView->verticalHeader()->setVisible(false);       //无行头
//    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);  //自适应列宽
    ui->tableView->setEditTriggers(QAbstractItemView::CurrentChanged);  //不可编辑


}

CAccountDLG::~CAccountDLG()
{
    delete ui;
}

void CAccountDLG::slotAddNewAccount()
{
    CAddAccountDLG *pAddDlg = new CAddAccountDLG;
    pAddDlg->show();
}
