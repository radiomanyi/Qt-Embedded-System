/********************************************************************************
** Form generated from reading UI file 'netsettingwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETSETTINGWINDOW_H
#define UI_NETSETTINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetSettingWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NetSettingWindow)
    {
        if (NetSettingWindow->objectName().isEmpty())
            NetSettingWindow->setObjectName(QStringLiteral("NetSettingWindow"));
        NetSettingWindow->resize(800, 600);
        centralwidget = new QWidget(NetSettingWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        NetSettingWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NetSettingWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        NetSettingWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(NetSettingWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        NetSettingWindow->setStatusBar(statusbar);

        retranslateUi(NetSettingWindow);

        QMetaObject::connectSlotsByName(NetSettingWindow);
    } // setupUi

    void retranslateUi(QMainWindow *NetSettingWindow)
    {
        NetSettingWindow->setWindowTitle(QApplication::translate("NetSettingWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetSettingWindow: public Ui_NetSettingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETSETTINGWINDOW_H
