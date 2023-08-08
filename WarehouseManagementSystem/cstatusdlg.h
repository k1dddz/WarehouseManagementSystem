#ifndef CSTATUSDLG_H
#define CSTATUSDLG_H

#include <QWidget>

namespace Ui {
class CStatusDLG;
}

class CStatusDLG : public QWidget
{
    Q_OBJECT

public:
    explicit CStatusDLG(QWidget *parent = nullptr);
    ~CStatusDLG();

private:
    Ui::CStatusDLG *ui;
};

#endif // CSTATUSDLG_H
