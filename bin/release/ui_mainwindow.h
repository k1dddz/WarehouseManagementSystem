/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_module3;
    QPushButton *pushButton_module1;
    QPushButton *pushButton_module2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 434);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 50, 271, 31));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(700, 350, 61, 31));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 110, 451, 231));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_module3 = new QPushButton(layoutWidget);
        pushButton_module3->setObjectName(QString::fromUtf8("pushButton_module3"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_module3->sizePolicy().hasHeightForWidth());
        pushButton_module3->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(16);
        pushButton_module3->setFont(font2);

        gridLayout->addWidget(pushButton_module3, 1, 0, 1, 1);

        pushButton_module1 = new QPushButton(layoutWidget);
        pushButton_module1->setObjectName(QString::fromUtf8("pushButton_module1"));
        sizePolicy.setHeightForWidth(pushButton_module1->sizePolicy().hasHeightForWidth());
        pushButton_module1->setSizePolicy(sizePolicy);
        pushButton_module1->setFont(font2);

        gridLayout->addWidget(pushButton_module1, 0, 2, 1, 1);

        pushButton_module2 = new QPushButton(layoutWidget);
        pushButton_module2->setObjectName(QString::fromUtf8("pushButton_module2"));
        sizePolicy.setHeightForWidth(pushButton_module2->sizePolicy().hasHeightForWidth());
        pushButton_module2->setSizePolicy(sizePolicy);
        pushButton_module2->setFont(font2);

        gridLayout->addWidget(pushButton_module2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\273\223\345\272\223\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\202\256\346\224\277\344\273\223\345\272\223\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "k1dZz", nullptr));
        pushButton_module3->setText(QCoreApplication::translate("MainWindow", "\344\273\223\345\272\223\347\212\266\346\200\201\347\256\241\347\220\206", nullptr));
        pushButton_module1->setText(QCoreApplication::translate("MainWindow", "\344\273\223\345\272\223\347\256\241\347\220\206", nullptr));
        pushButton_module2->setText(QCoreApplication::translate("MainWindow", "\345\221\230\345\267\245\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
