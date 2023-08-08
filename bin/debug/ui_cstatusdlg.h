/********************************************************************************
** Form generated from reading UI file 'cstatusdlg.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSTATUSDLG_H
#define UI_CSTATUSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CStatusDLG
{
public:
    QTableView *tableView;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_6;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_3;

    void setupUi(QWidget *CStatusDLG)
    {
        if (CStatusDLG->objectName().isEmpty())
            CStatusDLG->setObjectName(QString::fromUtf8("CStatusDLG"));
        CStatusDLG->resize(540, 320);
        tableView = new QTableView(CStatusDLG);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 190, 521, 121));
        groupBox = new QGroupBox(CStatusDLG);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 521, 71));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 371, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(pushButton);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_2->addWidget(pushButton_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(CStatusDLG);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 90, 521, 91));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 60, 502, 26));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        lineEdit_4 = new QLineEdit(layoutWidget1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_6->addWidget(lineEdit_4);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_6->addWidget(pushButton_4);


        horizontalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        lineEdit_5 = new QLineEdit(layoutWidget1);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_7->addWidget(lineEdit_5);

        pushButton_5 = new QPushButton(layoutWidget1);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_7->addWidget(pushButton_5);


        horizontalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        lineEdit_6 = new QLineEdit(layoutWidget1);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_8->addWidget(lineEdit_6);

        pushButton_6 = new QPushButton(layoutWidget1);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_8->addWidget(pushButton_6);


        horizontalLayout_4->addLayout(horizontalLayout_8);

        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 167, 24));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);

        pushButton_3 = new QPushButton(layoutWidget2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_5->addWidget(pushButton_3);


        retranslateUi(CStatusDLG);

        QMetaObject::connectSlotsByName(CStatusDLG);
    } // setupUi

    void retranslateUi(QWidget *CStatusDLG)
    {
        CStatusDLG->setWindowTitle(QCoreApplication::translate("CStatusDLG", "\344\273\223\345\272\223\347\212\266\346\200\201\347\256\241\347\220\206", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CStatusDLG", "\345\207\272\345\205\245\345\272\223\346\265\201\346\260\264\345\217\212\345\272\223\345\255\230\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("CStatusDLG", "\344\273\223\345\272\223\345\217\267", nullptr));
        pushButton->setText(QCoreApplication::translate("CStatusDLG", "\346\237\245\350\257\242", nullptr));
        label_2->setText(QCoreApplication::translate("CStatusDLG", "\344\273\223\345\272\223\345\217\267", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CStatusDLG", "\346\237\245\350\257\242", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("CStatusDLG", "\347\233\230\347\202\271", nullptr));
        label_4->setText(QCoreApplication::translate("CStatusDLG", "\347\233\230\347\202\271\346\227\266\351\227\264", nullptr));
        pushButton_4->setText(QCoreApplication::translate("CStatusDLG", "\346\267\273\345\212\240", nullptr));
        label_5->setText(QCoreApplication::translate("CStatusDLG", "\347\233\230\347\202\271\346\225\260\351\207\217", nullptr));
        pushButton_5->setText(QCoreApplication::translate("CStatusDLG", "\346\267\273\345\212\240", nullptr));
        label_6->setText(QCoreApplication::translate("CStatusDLG", "\346\223\215\344\275\234\344\272\272", nullptr));
        pushButton_6->setText(QCoreApplication::translate("CStatusDLG", "\346\267\273\345\212\240", nullptr));
        label_3->setText(QCoreApplication::translate("CStatusDLG", "\345\205\245\345\272\223\346\227\266\351\227\264", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CStatusDLG", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CStatusDLG: public Ui_CStatusDLG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSTATUSDLG_H
