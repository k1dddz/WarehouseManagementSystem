#include "database.h"
#include "qfileinfo.h"

#include <QCoreApplication>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QDir>

CDataBase::CDataBase()
{  



 //   QString currentPath = QDir::currentPath();
//    QString applicationDirPath = QFileInfo(currentPath).dir().path();

//    QString aa = QCoreApplication::applicationFilePath();
//    QString bb = QCoreApplication::applicationDirPath();

//    QString relativePath = QCoreApplication::applicationDirPath() + "/database/WHDatabase.mdb";
//    QString relativePath = QDir::currentPath() + "/database/WHDatabase.mdb";

//    m_status = 0;
//    if(!OpenDataBase("D:\\database\\WHDatabase.mdb"))
//    {
//        m_status = 1;
//    }
}

CDataBase::~CDataBase()
{
    CloseDataBase();
}

bool CDataBase::OpenDataBase(const QString &strPath)
{
    m_data = QSqlDatabase::addDatabase("QODBC");
    m_data.setDatabaseName(QString("DRIVER={Microsoft Access Driver (*.mdb, *.accdb)};FIL={MS Access};DBQ=%1").arg(strPath));

    if(!m_data.open())
    {
        return false;
    }

    return true;

}

void CDataBase::CloseDataBase()
{
    if(!m_data.isOpen())
    {
        return;
    }
    m_data.close();
}

bool CDataBase::GetRecords(const QString &strSql, QVector<QSqlRecord> &records)
{
    QSqlQuery query;
    if( !query.exec(strSql) )
    {
        return false;
    }

    while ( query.next() )
    {
        QSqlRecord record = query.record();
        records.push_back(record);
    }
    return true;

}

bool CDataBase::InsertRecords(const QString &strTableName, const QVector<Record> &records)
{
    if( !m_data.isOpen() )
        return false;

    if( !records.size() )
        return false;

    //sql插入记录
    for(const auto &it : records)
    {
        QStringList fieldsList, valueList;
        //字段与值一一对应
        if(it.fieldsList.size() != it.valueList.size())
            return false;
        fieldsList.append(it.fieldsList);
        for(int j = 0 ; j < it.valueList.size() ; j++)
        {
            valueList.append("'" + it.valueList[j].toString() + "'");
        }
        QString strSql;
        strSql = QString("INSERT INTO %1(%2) VALUES(%3);").arg(strTableName).arg(fieldsList.join(",")).arg(valueList.join(","));

        QSqlQuery query;
        if( !query.exec(strSql) )
            return false;
    }

    return true;


}

bool CDataBase::DeleteRecords(const QString &strTableName, const QString &strWhere)
{
    if( !m_data.isOpen() )
        return false;

    QString strSql;
    strSql = QString("DELETE FROM %1 WHERE %2").arg(strTableName).arg(strWhere);

    QSqlQuery query;
    if( !query.exec(strSql) )
        return false;
    return true;

}

bool CDataBase::UpdateValue(const QString &strTableName, const QString &strColumn, const QVariant &value, const QString strWhere)
{
    if( !m_data.isOpen() )
        return false;

    QString strSql;
    strSql = QString("UPDATE %1 SET %2 = '%3' WHERE %4").arg(strTableName).arg(strColumn).arg(value.toString()).arg(strWhere);

    QSqlQuery query;
    if( !query.exec(strSql) )
        return false;
    return true;
}

bool CDataBase::AddField(const QString &strTableName, const Field &field)
{
    if( !m_data.isOpen() )
        return false;

    QString strSql;
    strSql = QString("ALTER TABLE %1 ADD COLUMN %2 %3").arg(strTableName).arg(field.fieldName).arg(field.fieldType);

    QSqlQuery query;
    if( !query.exec(strSql) )
        return false;
    return true;

}

bool CDataBase::DeleteField(const QString &strTableName, const QString &strField)
{
    if( !m_data.isOpen() )
        return false;

    QString strSql;
    strSql = QString("ALTER TABLE %1 DROP COLUMN %2").arg(strTableName).arg(strField);

    QSqlQuery query;
    if( !query.exec(strSql) )
        return false;
    return true;
}

bool CDataBase::CreatTable(const QString &strTableName, const QVector<Field> &fieldsList)
{
    if( !fieldsList.size() )
        return false;

    //创建表Sql
    QString strSql;

    //组装字段列表串
    QStringList strFieldsList;
    for( const auto &it : fieldsList )
    {
        QString strTmp;
        if (it.primaryKeyFlag)
        {
            strTmp = QString("%1 %2 PRIMARY KEY").arg(it.fieldName).arg(it.fieldType);
        }
        else
        {
            strTmp = QString("%1 %2").arg(it.fieldName).arg(it.fieldType);
        }
        strFieldsList.append(strTmp);
    }
    strSql = QString("CREATE TABLE %1 (%2);").arg(strTableName).arg(strFieldsList.join(","));

    //执行sql创建表
    QSqlQuery query;
    if( !query.exec(strSql) )
        return false;

    return true;

}

bool CDataBase::DeleteTable(const QString &strTableName)
{
    QString strSql = QString("DROP TABLE %1").arg(strTableName);

    QSqlQuery query;
    if( !query.exec(strSql) )
        return false;

    return true;
}

