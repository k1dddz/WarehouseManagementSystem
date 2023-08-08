#ifndef CADDACCOUNTDLG_H
#define CADDACCOUNTDLG_H

#include <QWidget>

namespace Ui {
class CAddAccountDLG;
}

class CAddAccountDLG : public QWidget
{
    Q_OBJECT

public:
    explicit CAddAccountDLG(QWidget *parent = nullptr);
    ~CAddAccountDLG();

private:
    Ui::CAddAccountDLG *ui;
};

#endif // CADDACCOUNTDLG_H
