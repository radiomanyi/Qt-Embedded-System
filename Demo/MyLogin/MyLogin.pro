#-------------------------------------------------
#
# Project created by QtCreator 2023-03-23T22:53:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyLogin
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    secdialog.cpp

HEADERS  += mainwindow.h \
    secdialog.h

FORMS    += mainwindow.ui \
    secdialog.ui

RESOURCES += \
    resource.qrc
