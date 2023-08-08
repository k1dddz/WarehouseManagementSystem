#ifndef DATABASE_H
#define DATABASE_H

#include<qstring.h>
#include<qvector.h>

#include<QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlField>
#include <QtSql/QSqlTableModel>
#include <QSqlQuery>
#include <QSqlRecord>

//字段结构体
typedef struct CustomFieldStruct
{
    //字段名
    QString fieldName;

    //字段类型
    //
    QString fieldType;

    //是否主键
    //0-否 ； 1-是
    int primaryKeyFlag = 0;

}Field;


//记录结构
typedef struct CustomRecordStruct
{
    //字段列表
    QStringList fieldsList;
    //值列表
    QVector<QVariant> valueList;

}Record;



// 数据库操作类
class CDataBase
{
public:
   CDataBase();
   ~CDataBase();
public:
    //数据库操作
    QSqlDatabase m_data;

    //数据库状态 0-打开失败，1-打开成功
    int m_status;

public:
    // @brief： 打开数据库
    // @return： 打开是否成功
    // @param： mdb数据库绝对路径
    bool OpenDataBase(const QString &strPath);

    // @brief： 关闭数据库
    // @return： 关闭是否成功A
    // @param： mdb数据库绝对路径
    void CloseDataBase();

    // @brief：创建表
    // @return： 创建是否成功
    // @param： 表名、字段列表
    bool CreatTable(const QString &strTableName, const QVector<Field> &fieldsList);

    // @brief：删除表
    // @return： 删除是否成功
    // @param： 表名
    bool DeleteTable(const QString &strTableName);

    // @brief： 查询记录
    // @return： 查询是否成功
    // @param： sql
    bool GetRecords(const QString &strSql, QVector<QSqlRecord> &records);

    // @brief： 增加记录
    // @return： 插入是否成功
    // @param： 表名、记录集
    bool InsertRecords(const QString &strTableName, const QVector<Record> &records);

    // @brief： 删除记录
    // @return： 删除是否成功
    // @param： 表名、删除条件
    bool DeleteRecords(const QString &strTableName, const QString &strWhere);

    // @brief： 更新某一列的值
    // @return： 更新是否成功
    // @param： 表名、列名、值、条件
    bool UpdateValue(const QString &strTableName, const QString &strColumn, const QVariant &value, const QString strWhere);

    // @brief： 增加字段
    // @return： 增加是否成功
    // @param： 表名、字段
    bool AddField(const QString &strTableName, const Field &field);

    // @brief： 删除字段
    // @return： 删除是否成功
    // @param： 表名、字段名
    bool DeleteField(const QString &strTableName, const QString &strField);

};






#endif // DATABASE_H
