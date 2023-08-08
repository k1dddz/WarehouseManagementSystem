#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "global.h"


#include <qpushbutton.h>
#include <clogindlg.h>
#include <cstoragedlg.h>
#include <cstatusdlg.h>
#include <caccountdlg.h>

#include <QMessageBox>
#include <Qt>


#include "database.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //模块1
    connect(ui->pushButton_module1, &QPushButton::clicked, this, &MainWindow::slotModule1);
    //模块2
    connect(ui->pushButton_module2, &QPushButton::clicked, this, &MainWindow::slotModule2);
    //模块3
    connect(ui->pushButton_module3, &QPushButton::clicked, this, &MainWindow::slotModule3);

    //启动登录窗口（以模态方式）
    CLoginDLG *pLoginDlg = new CLoginDLG;
    pLoginDlg->setWindowModality(Qt::ApplicationModal);
    pLoginDlg->show();
    connect(pLoginDlg, &CLoginDLG::loginClose, this, &MainWindow::hide);

    connect(pLoginDlg, &CLoginDLG::userLevel, this, [&](int value){
        m_userLevel = value;
        switch(value)
        {
        case 0:
            break;
        case 1:
            ui->pushButton_module3->setEnabled(false);
            break;
        case 2:
            ui->pushButton_module2->setEnabled(false);
            ui->pushButton_module3->setEnabled(false);
            break;
        default:
            break;
        }

    });

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
//    CDataBase *pData = new CDataBase;
//    bool b = pData->OpenDataBase("C:/Users/k1dZz/Desktop/mdb.mdb");

//    Field field1;
//    field1.fieldName = "ID";
//    field1.fieldType = "INT";
//    field1.primaryKeyFlag = 1;

//    Field field2;
//    field2.fieldName = "文本列";
//    field2.fieldType = "TEXT(255)";

//    QVector<Field> fieldsList;
//    fieldsList.push_back(field1);
//    fieldsList.push_back(field2);

//    if( b )
//    {
//        pData->CreatTable("测试表", fieldsList);

//        Field field3;
//        field3.fieldName = "测试新增";
//        field3.fieldType = "Double";

//        pData->AddField("测试表", field3);

////        pData->DeleteField("测试表","文本列");

//        Field field4;
//        field4.fieldName = "测试修改";
//        field4.fieldType = "Memo";
////        pData->ModifyField("测试表", "测试新增", field4);

//    }

      QMessageBox::information(this, "接收到信号", "接收到的参数值为: " + QString::number(m_userLevel));

//    pData->CloseDataBase();
//    delete pData;

//    CLoginDLG loginDlg;
//    loginDlg.exec();



}


void MainWindow::slotModule1()
{
    CStorageDLG *pModul1 = new CStorageDLG;
    pModul1->show();

}

void MainWindow::slotModule2()
{
    CAccountDLG *pMoudl2 = new CAccountDLG;
    pMoudl2->show();
}

void MainWindow::slotModule3()
{
    CStatusDLG *pMoudl3 = new CStatusDLG;
    pMoudl3->show();
}





