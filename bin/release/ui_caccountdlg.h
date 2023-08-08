/********************************************************************************
** Form generated from reading UI file 'caccountdlg.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CACCOUNTDLG_H
#define UI_CACCOUNTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CAccountDLG
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_add;
    QPushButton *pushButton_3;
    QTableView *tableView;

    void setupUi(QWidget *CAccountDLG)
    {
        if (CAccountDLG->objectName().isEmpty())
            CAccountDLG->setObjectName(QString::fromUtf8("CAccountDLG"));
        CAccountDLG->resize(448, 243);
        widget = new QWidget(CAccountDLG);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 430, 224));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(lineEdit_2);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(lineEdit);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_add = new QPushButton(widget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(pushButton_add);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(pushButton_3);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);

        tableView = new QTableView(widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(CAccountDLG);

        QMetaObject::connectSlotsByName(CAccountDLG);
    } // setupUi

    void retranslateUi(QWidget *CAccountDLG)
    {
        CAccountDLG->setWindowTitle(QCoreApplication::translate("CAccountDLG", "\345\221\230\345\267\245\347\256\241\347\220\206", nullptr));
        label_2->setText(QCoreApplication::translate("CAccountDLG", "\345\221\230\345\267\245\345\247\223\345\220\215", nullptr));
        label->setText(QCoreApplication::translate("CAccountDLG", "\345\221\230\345\267\245ID", nullptr));
        pushButton->setText(QCoreApplication::translate("CAccountDLG", "\346\237\245\350\257\242", nullptr));
        pushButton_add->setText(QCoreApplication::translate("CAccountDLG", "\346\226\260\345\242\236", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CAccountDLG", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CAccountDLG: public Ui_CAccountDLG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CACCOUNTDLG_H
