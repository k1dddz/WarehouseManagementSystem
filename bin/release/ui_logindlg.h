/********************************************************************************
** Form generated from reading UI file 'logindlg.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDLG_H
#define UI_LOGINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CLoginDLG
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_ID;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_key;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_login;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_close;

    void setupUi(QDialog *CLoginDLG)
    {
        if (CLoginDLG->objectName().isEmpty())
            CLoginDLG->setObjectName(QString::fromUtf8("CLoginDLG"));
        CLoginDLG->resize(299, 210);
        layoutWidget = new QWidget(CLoginDLG);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 261, 171));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(17);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_ID = new QLineEdit(layoutWidget);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));

        horizontalLayout->addWidget(lineEdit_ID);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_key = new QLineEdit(layoutWidget);
        lineEdit_key->setObjectName(QString::fromUtf8("lineEdit_key"));

        horizontalLayout_2->addWidget(lineEdit_key);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_login = new QPushButton(layoutWidget);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));

        horizontalLayout_3->addWidget(pushButton_login);

        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_close = new QPushButton(layoutWidget);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));

        horizontalLayout_3->addWidget(pushButton_close);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(CLoginDLG);

        QMetaObject::connectSlotsByName(CLoginDLG);
    } // setupUi

    void retranslateUi(QDialog *CLoginDLG)
    {
        CLoginDLG->setWindowTitle(QCoreApplication::translate("CLoginDLG", "\347\231\273\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("CLoginDLG", "\347\231\273           \345\275\225", nullptr));
        label->setText(QCoreApplication::translate("CLoginDLG", "\350\264\246\346\210\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("CLoginDLG", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton_login->setText(QCoreApplication::translate("CLoginDLG", "\347\231\273\345\275\225", nullptr));
        pushButton_close->setText(QCoreApplication::translate("CLoginDLG", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CLoginDLG: public Ui_CLoginDLG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDLG_H
