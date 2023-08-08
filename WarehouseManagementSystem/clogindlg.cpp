#include "clogindlg.h"
#include "ui_logindlg.h"
#include "database.h"
#include "mainwindow.h"

#include <QMessageBox>
#include <Qt>

CLoginDLG::CLoginDLG(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CLoginDLG)
{
    ui->setupUi(this);

    connect(ui->pushButton_login, &QPushButton::clicked, this, &CLoginDLG::slotLogin);
    connect(ui->pushButton_close, &QPushButton::clicked, this, [&](){
        emit loginClose();
        this->close();
    });

}

CLoginDLG::~CLoginDLG()
{
    delete ui;
}

void CLoginDLG::slotLogin()
{
    //获取账号ID文本

    //录入账号
    QString strID = ui->lineEdit_ID->text();
    QString strKey = ui->lineEdit_key->text();

//    CDataBase dataBase;
//    if(!dataBase.OpenDataBase("C:/Users/k1dZz/Desktop/WHDatabase.mdb"))
//    {
//        QMessageBox::information(this, "提示", "数据库读取异常，请检查数据库！", QMessageBox::Ok);
//        return;
//    }

    QString strSql = "Select username, password, userlevel From 账户";
    QSqlQuery query;
    query.exec(strSql);
    QStringList arID, arKey, arLevel;
    while (query.next())
    {
        arID.append(query.value(0).toString());
        arKey.append(query.value(1).toString());
        arLevel.append(query.value(2).toString());
    }

    //比对库中是否有当前账户
    //当前账户密码是否匹配
    int flagID = 0;
    int flagKey = 0;
    int iLevel;
    for (int i = 0 ; i < arID.size() ; i++ )
    {
        if(strID.compare(arID[i], Qt::CaseSensitive) == 0)
        {
            flagID = 1;
            if(strKey.compare(arKey[i], Qt::CaseSensitive) == 0)
            {
                flagKey = 1;
                iLevel = arLevel[i].toInt();
            }
        }
    }

    if(!flagID)
    {
        //账号错误
        QMessageBox::information(this, "提示", "账号错误！", QMessageBox::Ok);
        return;
    }
    if(flagID && !flagKey)
    {
        //密码错误
        QMessageBox::information(this, "提示", "密码错误！", QMessageBox::Ok);
        return;
    }


    //登录成功
    //发送用户等级至主窗口
    emit userLevel(iLevel);

    this->hide();

    return;
}
