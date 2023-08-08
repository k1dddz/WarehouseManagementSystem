#ifndef CSTORAGEDLG_H
#define CSTORAGEDLG_H

#include "database.h"

#include <QItemDelegate>
#include <QStandardItemModel>
#include <QWidget>

namespace Ui {
class CStorageDLG;
}

//typedef struct TableObjectInformation
//{
//    int id;
//    QString name;

//} tableInfo;


class ReadOnlyDelegate : public QItemDelegate
{
public:
    explicit ReadOnlyDelegate(QObject* parent = nullptr) : QItemDelegate(parent) {}

    QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem&, const QModelIndex&) const override {
        return nullptr;  // 返回nullptr表示该单元格不可编辑
    }
};


class CStorageDLG : public QWidget
{
    Q_OBJECT

public:
    explicit CStorageDLG(QWidget *parent = nullptr);
    ~CStorageDLG();

public:
//    tableInfo m_curTableInfo;   //当前查询显示记录

    int m_curID;    //货物ID
    QString m_curTableName;     //所属仓库

    QStringList m_arFields;     //字段列表

    QStandardItemModel *m_pModelLeft;
    QStandardItemModel *m_pModelRight;

#ifdef QT_DEBUG
    CDataBase *pDataBase;
#endif

public:
    void initTableView();

public slots:
    //查询
    void slotQuery();
    //出库
    void slotDelete();
    //移库
    void slotMove();
    //入库
    void slotAdd();

private:
    Ui::CStorageDLG *ui;
};




#endif // CSTORAGEDLG_H
