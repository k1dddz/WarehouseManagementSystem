#include "caddaccountdlg.h"
#include "ui_caddaccountdlg.h"

CAddAccountDLG::CAddAccountDLG(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CAddAccountDLG)
{
    ui->setupUi(this);
}

CAddAccountDLG::~CAddAccountDLG()
{
    delete ui;
}
