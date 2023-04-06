/********************************************************************************
** Form generated from reading UI file 'caldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALDIALOG_H
#define UI_CALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_calDialog
{
public:
    QPushButton *Clear;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton;
    QLineEdit *lineEditNum1;
    QComboBox *comboBox;
    QLineEdit *lineEditNum2;
    QLineEdit *lineEditResult;
    QPushButton *Calculate;

    void setupUi(QDialog *calDialog)
    {
        if (calDialog->objectName().isEmpty())
            calDialog->setObjectName(QStringLiteral("calDialog"));
        calDialog->resize(400, 300);
        Clear = new QPushButton(calDialog);
        Clear->setObjectName(QStringLiteral("Clear"));
        Clear->setGeometry(QRect(320, 180, 71, 31));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        Clear->setFont(font);
        lcdNumber = new QLCDNumber(calDialog);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(264, 99, 121, 21));
        pushButton = new QPushButton(calDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 230, 71, 31));
        pushButton->setFont(font);
        lineEditNum1 = new QLineEdit(calDialog);
        lineEditNum1->setObjectName(QStringLiteral("lineEditNum1"));
        lineEditNum1->setGeometry(QRect(5, 128, 81, 22));
        lineEditNum1->setFont(font);
        comboBox = new QComboBox(calDialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(89, 128, 32, 22));
        lineEditNum2 = new QLineEdit(calDialog);
        lineEditNum2->setObjectName(QStringLiteral("lineEditNum2"));
        lineEditNum2->setGeometry(QRect(126, 128, 81, 22));
        lineEditNum2->setFont(font);
        lineEditResult = new QLineEdit(calDialog);
        lineEditResult->setObjectName(QStringLiteral("lineEditResult"));
        lineEditResult->setGeometry(QRect(264, 129, 121, 22));
        lineEditResult->setFont(font);
        Calculate = new QPushButton(calDialog);
        Calculate->setObjectName(QStringLiteral("Calculate"));
        Calculate->setGeometry(QRect(210, 130, 53, 18));
        Calculate->setMinimumSize(QSize(53, 18));
        Calculate->setFont(font);

        retranslateUi(calDialog);

        QMetaObject::connectSlotsByName(calDialog);
    } // setupUi

    void retranslateUi(QDialog *calDialog)
    {
        calDialog->setWindowTitle(QApplication::translate("calDialog", "Dialog", nullptr));
        Clear->setText(QApplication::translate("calDialog", "Clear", nullptr));
        pushButton->setText(QApplication::translate("calDialog", "Return", nullptr));
        comboBox->setItemText(0, QApplication::translate("calDialog", "+", nullptr));
        comboBox->setItemText(1, QApplication::translate("calDialog", "-", nullptr));
        comboBox->setItemText(2, QApplication::translate("calDialog", "*", nullptr));
        comboBox->setItemText(3, QApplication::translate("calDialog", "/", nullptr));

        Calculate->setText(QApplication::translate("calDialog", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calDialog: public Ui_calDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALDIALOG_H
