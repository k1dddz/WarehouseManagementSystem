/********************************************************************************
** Form generated from reading UI file 'cstoragedlg.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSTORAGEDLG_H
#define UI_CSTORAGEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CStorageDLG
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_num;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_wareHoseNameL;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_move;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_query;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_move;
    QTableView *tableView_left;
    QFrame *line;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_wareHouseNumR;
    QPushButton *pushButton_add;
    QTableView *tableView_right;

    void setupUi(QWidget *CStorageDLG)
    {
        if (CStorageDLG->objectName().isEmpty())
            CStorageDLG->setObjectName(QString::fromUtf8("CStorageDLG"));
        CStorageDLG->resize(668, 414);
        widget = new QWidget(CStorageDLG);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(12, 11, 641, 381));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_num = new QLineEdit(widget);
        lineEdit_num->setObjectName(QString::fromUtf8("lineEdit_num"));

        horizontalLayout->addWidget(lineEdit_num);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_wareHoseNameL = new QLineEdit(widget);
        lineEdit_wareHoseNameL->setObjectName(QString::fromUtf8("lineEdit_wareHoseNameL"));

        horizontalLayout_2->addWidget(lineEdit_wareHoseNameL);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_move = new QLineEdit(widget);
        lineEdit_move->setObjectName(QString::fromUtf8("lineEdit_move"));

        horizontalLayout_3->addWidget(lineEdit_move);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_query = new QPushButton(widget);
        pushButton_query->setObjectName(QString::fromUtf8("pushButton_query"));

        horizontalLayout_4->addWidget(pushButton_query);

        pushButton_delete = new QPushButton(widget);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));

        horizontalLayout_4->addWidget(pushButton_delete);

        pushButton_move = new QPushButton(widget);
        pushButton_move->setObjectName(QString::fromUtf8("pushButton_move"));

        horizontalLayout_4->addWidget(pushButton_move);


        verticalLayout_2->addLayout(horizontalLayout_4);

        tableView_left = new QTableView(widget);
        tableView_left->setObjectName(QString::fromUtf8("tableView_left"));
        tableView_left->setShowGrid(true);
        tableView_left->setGridStyle(Qt::SolidLine);

        verticalLayout_2->addWidget(tableView_left);


        horizontalLayout_6->addLayout(verticalLayout_2);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Raised);
        line->setLineWidth(1);
        line->setFrameShape(QFrame::VLine);

        horizontalLayout_6->addWidget(line);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_wareHouseNumR = new QLineEdit(widget);
        lineEdit_wareHouseNumR->setObjectName(QString::fromUtf8("lineEdit_wareHouseNumR"));

        horizontalLayout_5->addWidget(lineEdit_wareHouseNumR);

        pushButton_add = new QPushButton(widget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));

        horizontalLayout_5->addWidget(pushButton_add);


        verticalLayout_3->addLayout(horizontalLayout_5);

        tableView_right = new QTableView(widget);
        tableView_right->setObjectName(QString::fromUtf8("tableView_right"));

        verticalLayout_3->addWidget(tableView_right);


        horizontalLayout_6->addLayout(verticalLayout_3);


        retranslateUi(CStorageDLG);

        QMetaObject::connectSlotsByName(CStorageDLG);
    } // setupUi

    void retranslateUi(QWidget *CStorageDLG)
    {
        CStorageDLG->setWindowTitle(QCoreApplication::translate("CStorageDLG", "\344\273\223\345\272\223\345\255\230\345\202\250\347\256\241\347\220\206", nullptr));
        label->setText(QCoreApplication::translate("CStorageDLG", "\346\237\245\350\257\242\347\211\251\345\223\201\344\273\243\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("CStorageDLG", "\347\211\251\345\223\201\346\211\200\345\261\236\344\273\223\345\272\223", nullptr));
        label_3->setText(QCoreApplication::translate("CStorageDLG", "\347\247\273\345\272\223\347\233\256\346\240\207\344\273\223\345\272\223", nullptr));
        pushButton_query->setText(QCoreApplication::translate("CStorageDLG", "\346\237\245\350\257\242", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("CStorageDLG", "\345\207\272\345\272\223", nullptr));
        pushButton_move->setText(QCoreApplication::translate("CStorageDLG", "\347\247\273\345\272\223", nullptr));
        label_4->setText(QCoreApplication::translate("CStorageDLG", "\345\205\245\345\272\223\344\273\223\345\272\223\347\274\226\347\240\201", nullptr));
        pushButton_add->setText(QCoreApplication::translate("CStorageDLG", "\345\205\245\345\272\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CStorageDLG: public Ui_CStorageDLG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSTORAGEDLG_H
