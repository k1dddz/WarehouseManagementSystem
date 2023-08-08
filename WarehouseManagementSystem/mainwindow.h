#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "database.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public:
    int m_userLevel; //用户等级

//    CDataBase *m_pDataBase;

public:
    void slot1();


private slots:
    void on_pushButton_clicked();

    void slotModule1();
    void slotModule2();
    void slotModule3();

private:
    Ui::MainWindow *ui;
};

CDataBase *getDataBase();

#endif // MAINWINDOW_H
