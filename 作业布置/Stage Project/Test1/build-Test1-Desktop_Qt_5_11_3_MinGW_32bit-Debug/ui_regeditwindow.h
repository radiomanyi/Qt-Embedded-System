/********************************************************************************
** Form generated from reading UI file 'regeditwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGEDITWINDOW_H
#define UI_REGEDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Index
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mima;
    QLineEdit *pwd1RegeditText;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *userRegeditLable;
    QLineEdit *userRegeditText;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *regPb;
    QPushButton *cancelPb;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mima_2;
    QLineEdit *pwd2RegeditText;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Index)
    {
        if (Index->objectName().isEmpty())
            Index->setObjectName(QStringLiteral("Index"));
        Index->resize(800, 600);
        centralwidget = new QWidget(Index);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 220, 421, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        mima = new QLabel(layoutWidget);
        mima->setObjectName(QStringLiteral("mima"));

        horizontalLayout_2->addWidget(mima);

        pwd1RegeditText = new QLineEdit(layoutWidget);
        pwd1RegeditText->setObjectName(QStringLiteral("pwd1RegeditText"));

        horizontalLayout_2->addWidget(pwd1RegeditText);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(170, 170, 421, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        userRegeditLable = new QLabel(layoutWidget1);
        userRegeditLable->setObjectName(QStringLiteral("userRegeditLable"));

        horizontalLayout->addWidget(userRegeditLable);

        userRegeditText = new QLineEdit(layoutWidget1);
        userRegeditText->setObjectName(QStringLiteral("userRegeditText"));

        horizontalLayout->addWidget(userRegeditText);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(270, 340, 180, 32));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        regPb = new QPushButton(layoutWidget2);
        regPb->setObjectName(QStringLiteral("regPb"));

        horizontalLayout_3->addWidget(regPb);

        cancelPb = new QPushButton(layoutWidget2);
        cancelPb->setObjectName(QStringLiteral("cancelPb"));

        horizontalLayout_3->addWidget(cancelPb);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(170, 270, 421, 32));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        mima_2 = new QLabel(layoutWidget_2);
        mima_2->setObjectName(QStringLiteral("mima_2"));

        horizontalLayout_4->addWidget(mima_2);

        pwd2RegeditText = new QLineEdit(layoutWidget_2);
        pwd2RegeditText->setObjectName(QStringLiteral("pwd2RegeditText"));

        horizontalLayout_4->addWidget(pwd2RegeditText);

        Index->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Index);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        Index->setMenuBar(menubar);
        statusbar = new QStatusBar(Index);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Index->setStatusBar(statusbar);

        retranslateUi(Index);

        QMetaObject::connectSlotsByName(Index);
    } // setupUi

    void retranslateUi(QMainWindow *Index)
    {
        Index->setWindowTitle(QApplication::translate("Index", "\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        mima->setText(QApplication::translate("Index", "\345\257\206    \347\240\201\357\274\232", nullptr));
        userRegeditLable->setText(QApplication::translate("Index", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        regPb->setText(QApplication::translate("Index", "\346\263\250\345\206\214", nullptr));
        cancelPb->setText(QApplication::translate("Index", "\345\217\226\346\266\210", nullptr));
        mima_2->setText(QApplication::translate("Index", "\345\257\206    \347\240\201\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Index: public Ui_Index {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGEDITWINDOW_H
