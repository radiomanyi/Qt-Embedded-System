/********************************************************************************
** Form generated from reading UI file 'homewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWINDOW_H
#define UI_HOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeWindow
{
public:
    QAction *netSettingMenuAction;
    QAction *deviceSettingMenuAction;
    QAction *quitMenuAction;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lable13_2;
    QLineEdit *sensordata_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QTextEdit *sensorPhyValue;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *lable13;
    QLineEdit *sensordata;
    QGroupBox *groupBox_2;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HomeWindow)
    {
        if (HomeWindow->objectName().isEmpty())
            HomeWindow->setObjectName(QStringLiteral("HomeWindow"));
        HomeWindow->resize(924, 664);
        HomeWindow->setBaseSize(QSize(800, 600));
        netSettingMenuAction = new QAction(HomeWindow);
        netSettingMenuAction->setObjectName(QStringLiteral("netSettingMenuAction"));
        deviceSettingMenuAction = new QAction(HomeWindow);
        deviceSettingMenuAction->setObjectName(QStringLiteral("deviceSettingMenuAction"));
        quitMenuAction = new QAction(HomeWindow);
        quitMenuAction->setObjectName(QStringLiteral("quitMenuAction"));
        centralwidget = new QWidget(HomeWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 441, 581));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 40, 421, 111));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 230, 421, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lable13_2 = new QLabel(layoutWidget);
        lable13_2->setObjectName(QStringLiteral("lable13_2"));

        horizontalLayout_2->addWidget(lable13_2);

        sensordata_2 = new QLineEdit(layoutWidget);
        sensordata_2->setObjectName(QStringLiteral("sensordata_2"));

        horizontalLayout_2->addWidget(sensordata_2);

        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 290, 108, 28));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(150, 290, 108, 28));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(290, 290, 108, 28));
        sensorPhyValue = new QTextEdit(groupBox);
        sensorPhyValue->setObjectName(QStringLiteral("sensorPhyValue"));
        sensorPhyValue->setGeometry(QRect(10, 340, 421, 231));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 180, 421, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lable13 = new QLabel(widget);
        lable13->setObjectName(QStringLiteral("lable13"));

        horizontalLayout->addWidget(lable13);

        sensordata = new QLineEdit(widget);
        sensordata->setObjectName(QStringLiteral("sensordata"));

        horizontalLayout->addWidget(sensordata);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(480, 10, 441, 581));
        HomeWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HomeWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 924, 27));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        HomeWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(HomeWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        HomeWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(netSettingMenuAction);
        menu->addAction(deviceSettingMenuAction);
        menu->addAction(quitMenuAction);

        retranslateUi(HomeWindow);

        QMetaObject::connectSlotsByName(HomeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *HomeWindow)
    {
        HomeWindow->setWindowTitle(QApplication::translate("HomeWindow", "\344\270\273\347\225\214\351\235\242", nullptr));
        netSettingMenuAction->setText(QApplication::translate("HomeWindow", "\347\275\221\347\273\234\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        deviceSettingMenuAction->setText(QApplication::translate("HomeWindow", "\350\256\276\345\244\207\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        quitMenuAction->setText(QApplication::translate("HomeWindow", "\351\200\200\345\207\272", nullptr));
        groupBox->setTitle(QApplication::translate("HomeWindow", "\346\225\260\346\215\256\350\275\254\346\215\242", nullptr));
        lable13_2->setText(QApplication::translate("HomeWindow", "\351\207\217        \347\250\213\357\274\232", nullptr));
        radioButton->setText(QApplication::translate("HomeWindow", "\347\211\251\347\220\206\351\207\217", nullptr));
        radioButton_2->setText(QApplication::translate("HomeWindow", "\347\274\226\347\240\201", nullptr));
        radioButton_3->setText(QApplication::translate("HomeWindow", "\350\247\243\347\240\201", nullptr));
        lable13->setText(QApplication::translate("HomeWindow", "\345\216\237\345\247\213\346\225\260\346\215\256\357\274\232", nullptr));
        groupBox_2->setTitle(QApplication::translate("HomeWindow", "\344\272\221\345\271\263\345\217\260\351\200\232\344\277\241", nullptr));
        menu->setTitle(QApplication::translate("HomeWindow", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeWindow: public Ui_HomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWINDOW_H
