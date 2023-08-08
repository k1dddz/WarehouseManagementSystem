QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    caccountdlg.cpp \
    caddaccountdlg.cpp \
    clogindlg.cpp \
    cstatusdlg.cpp \
    cstoragedlg.cpp \
    database.cpp \
    global.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    caccountdlg.h \
    caddaccountdlg.h \
    clogindlg.h \
    cstatusdlg.h \
    cstoragedlg.h \
    database.h \
    global.h \
    mainwindow.h

FORMS += \
    caccountdlg.ui \
    caddaccountdlg.ui \
    cstatusdlg.ui \
    cstoragedlg.ui \
    logindlg.ui \
    mainwindow.ui

TRANSLATIONS += \
    WarehouseManagementSystem_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
