#include "mainwindow.h"
#include "clogindlg.h"
#include "cstoragedlg.h"
#include "global.h"
#include <QApplication>


int main(int argc, char *argv[])
{    
    QApplication a(argc, argv);

//    CDataBase g_dataBase;

    QString dataBasePath = QCoreApplication::applicationDirPath() + "/database/WHDatabase.mdb";

    g_dataBase.m_status = 0;
    if(!g_dataBase.OpenDataBase(dataBasePath))
    {
        g_dataBase.m_status = 1;
    }
    MainWindow w;
    w.show();

//    CStorageDLG *d = new CStorageDLG;
//    d->show();

    return a.exec();
}
