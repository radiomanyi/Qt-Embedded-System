/********************************************************************************
** Form generated from reading UI file 'devicesettingwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICESETTINGWINDOW_H
#define UI_DEVICESETTINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceSettingWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *deviceSettingTxtType;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *deviceSettingTxtRange;
    QGroupBox *groupBox;
    QRadioButton *deviceSettingRadioDoutput;
    QRadioButton *deviceSettingRadioAoutput;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *deviceSettingCmbName;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *deviceSettingTxtManufacturing;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *deviceSettingCheckCcc;
    QCheckBox *deviceSettingCheckCe;
    QPushButton *deviceSettingPbAdd;
    QPushButton *deviceSettingPbDel;
    QTableWidget *deviceSettingTable;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DeviceSettingWindow)
    {
        if (DeviceSettingWindow->objectName().isEmpty())
            DeviceSettingWindow->setObjectName(QStringLiteral("DeviceSettingWindow"));
        DeviceSettingWindow->resize(800, 600);
        centralwidget = new QWidget(DeviceSettingWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 90, 319, 32));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        deviceSettingTxtType = new QLineEdit(layoutWidget);
        deviceSettingTxtType->setObjectName(QStringLiteral("deviceSettingTxtType"));
        deviceSettingTxtType->setMinimumSize(QSize(240, 0));
        deviceSettingTxtType->setMaximumSize(QSize(240, 16777215));

        horizontalLayout_3->addWidget(deviceSettingTxtType);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(410, 90, 361, 32));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        deviceSettingTxtRange = new QLineEdit(layoutWidget_2);
        deviceSettingTxtRange->setObjectName(QStringLiteral("deviceSettingTxtRange"));

        horizontalLayout_4->addWidget(deviceSettingTxtRange);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 140, 311, 80));
        deviceSettingRadioDoutput = new QRadioButton(groupBox);
        deviceSettingRadioDoutput->setObjectName(QStringLiteral("deviceSettingRadioDoutput"));
        deviceSettingRadioDoutput->setGeometry(QRect(20, 40, 108, 28));
        deviceSettingRadioAoutput = new QRadioButton(groupBox);
        deviceSettingRadioAoutput->setObjectName(QStringLiteral("deviceSettingRadioAoutput"));
        deviceSettingRadioAoutput->setGeometry(QRect(110, 40, 108, 28));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 30, 318, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        deviceSettingCmbName = new QComboBox(layoutWidget1);
        deviceSettingCmbName->addItem(QString());
        deviceSettingCmbName->addItem(QString());
        deviceSettingCmbName->addItem(QString());
        deviceSettingCmbName->setObjectName(QStringLiteral("deviceSettingCmbName"));
        deviceSettingCmbName->setMinimumSize(QSize(240, 0));
        deviceSettingCmbName->setMaximumSize(QSize(240, 16777215));

        horizontalLayout->addWidget(deviceSettingCmbName);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(410, 30, 361, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        deviceSettingTxtManufacturing = new QLineEdit(layoutWidget2);
        deviceSettingTxtManufacturing->setObjectName(QStringLiteral("deviceSettingTxtManufacturing"));

        horizontalLayout_2->addWidget(deviceSettingTxtManufacturing);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(410, 161, 361, 61));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        deviceSettingCheckCcc = new QCheckBox(layoutWidget3);
        deviceSettingCheckCcc->setObjectName(QStringLiteral("deviceSettingCheckCcc"));

        horizontalLayout_5->addWidget(deviceSettingCheckCcc);

        deviceSettingCheckCe = new QCheckBox(layoutWidget3);
        deviceSettingCheckCe->setObjectName(QStringLiteral("deviceSettingCheckCe"));

        horizontalLayout_5->addWidget(deviceSettingCheckCe);

        deviceSettingPbAdd = new QPushButton(layoutWidget3);
        deviceSettingPbAdd->setObjectName(QStringLiteral("deviceSettingPbAdd"));

        horizontalLayout_5->addWidget(deviceSettingPbAdd);

        deviceSettingPbDel = new QPushButton(layoutWidget3);
        deviceSettingPbDel->setObjectName(QStringLiteral("deviceSettingPbDel"));

        horizontalLayout_5->addWidget(deviceSettingPbDel);

        deviceSettingTable = new QTableWidget(centralwidget);
        if (deviceSettingTable->columnCount() < 6)
            deviceSettingTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        deviceSettingTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        deviceSettingTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        deviceSettingTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        deviceSettingTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        deviceSettingTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        deviceSettingTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (deviceSettingTable->rowCount() < 4)
            deviceSettingTable->setRowCount(4);
        deviceSettingTable->setObjectName(QStringLiteral("deviceSettingTable"));
        deviceSettingTable->setGeometry(QRect(60, 250, 711, 301));
        deviceSettingTable->setMinimumSize(QSize(711, 0));
        deviceSettingTable->setMaximumSize(QSize(711, 16777215));
        deviceSettingTable->setShowGrid(true);
        deviceSettingTable->setSortingEnabled(false);
        deviceSettingTable->setWordWrap(true);
        deviceSettingTable->setRowCount(4);
        deviceSettingTable->setColumnCount(6);
        DeviceSettingWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DeviceSettingWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        DeviceSettingWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DeviceSettingWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DeviceSettingWindow->setStatusBar(statusbar);

        retranslateUi(DeviceSettingWindow);

        QMetaObject::connectSlotsByName(DeviceSettingWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DeviceSettingWindow)
    {
        DeviceSettingWindow->setWindowTitle(QApplication::translate("DeviceSettingWindow", "\350\256\276\345\244\207\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        label_3->setText(QApplication::translate("DeviceSettingWindow", "\345\236\213         \345\217\267\357\274\232", nullptr));
        label_4->setText(QApplication::translate("DeviceSettingWindow", "\351\207\217\347\250\213\350\214\203\345\233\264\357\274\232", nullptr));
        groupBox->setTitle(QApplication::translate("DeviceSettingWindow", "\350\276\223\345\207\272\344\277\241\345\217\267\357\274\232", nullptr));
        deviceSettingRadioDoutput->setText(QApplication::translate("DeviceSettingWindow", "\346\225\260\345\255\227\351\207\217", nullptr));
        deviceSettingRadioAoutput->setText(QApplication::translate("DeviceSettingWindow", "\346\250\241\346\213\237\351\207\217", nullptr));
        label->setText(QApplication::translate("DeviceSettingWindow", "\350\256\276\345\244\207\345\220\215\347\247\260\357\274\232", nullptr));
        deviceSettingCmbName->setItemText(0, QString());
        deviceSettingCmbName->setItemText(1, QApplication::translate("DeviceSettingWindow", "\346\270\251\346\271\277\345\272\246\344\274\240\346\204\237\345\231\250", nullptr));
        deviceSettingCmbName->setItemText(2, QApplication::translate("DeviceSettingWindow", "PM2.5\344\274\240\346\204\237\345\231\250", nullptr));

        label_2->setText(QApplication::translate("DeviceSettingWindow", "\345\216\202         \345\256\266\357\274\232", nullptr));
        deviceSettingCheckCcc->setText(QApplication::translate("DeviceSettingWindow", "CCC\350\256\244\350\257\201", nullptr));
        deviceSettingCheckCe->setText(QApplication::translate("DeviceSettingWindow", "CE\350\256\244\350\257\201", nullptr));
        deviceSettingPbAdd->setText(QApplication::translate("DeviceSettingWindow", "\346\267\273\345\212\240", nullptr));
        deviceSettingPbDel->setText(QApplication::translate("DeviceSettingWindow", "\345\210\240\351\231\244", nullptr));
        QTableWidgetItem *___qtablewidgetitem = deviceSettingTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DeviceSettingWindow", "\350\256\276\345\244\207\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = deviceSettingTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DeviceSettingWindow", "\345\216\202\345\256\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = deviceSettingTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DeviceSettingWindow", "\345\236\213\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = deviceSettingTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DeviceSettingWindow", "\351\207\217\347\250\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = deviceSettingTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DeviceSettingWindow", "\350\276\223\345\207\272\344\277\241\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = deviceSettingTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("DeviceSettingWindow", "\345\256\211\345\205\250\350\256\244\350\257\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeviceSettingWindow: public Ui_DeviceSettingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICESETTINGWINDOW_H
