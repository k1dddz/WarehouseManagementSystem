#ifndef CACCOUNTDLG_H
#define CACCOUNTDLG_H

#include <QWidget>

namespace Ui {
class CAccountDLG;
}

class CAccountDLG : public QWidget
{
    Q_OBJECT

public:
    explicit CAccountDLG(QWidget *parent = nullptr);
    ~CAccountDLG();

public slots:
    void slotAddNewAccount();


private:
    Ui::CAccountDLG *ui;
};


#endif // CACCOUNTDLG_H
