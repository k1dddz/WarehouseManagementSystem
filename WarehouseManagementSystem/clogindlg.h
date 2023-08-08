#ifndef CLOGINDLG_H
#define CLOGINDLG_H

#include <QDialog>

namespace Ui {
class CLoginDLG;
}

class CLoginDLG : public QDialog
{
    Q_OBJECT

public:
    explicit CLoginDLG(QWidget *parent = nullptr);
    ~CLoginDLG();

public slots:
    void slotLogin();

signals:
    void loginClose();
    void userLevel(int level);

private:
    void closeEvent(QCloseEvent *){//重写关闭按钮事件
        emit loginClose();//发出关闭信号，父窗体接收信号后显示窗体
    }

private:
    Ui::CLoginDLG *ui;
};

#endif // CLOGINDLG_H
