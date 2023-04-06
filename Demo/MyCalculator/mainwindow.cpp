#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lcdNumber->setPalette(Qt::green);
    ui->lcdNumber->setDigitCount(8);
    ui->lineEditNum1->setValidator(new QRegExpValidator(QRegExp("[0-9\.]+$")));
    ui->lineEditNum2->setValidator(new QRegExpValidator(QRegExp("[0-9\.]+$")));
    qDebug("Initial has been setup.");
    // Initial Setup

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Calculate_clicked()
{
    double num1 = ui->lineEditNum1->text().toDouble();//获取num1的值
    double num2 = ui->lineEditNum2->text().toDouble();//获取num2的值
  uint8_t index = ui->comboBox->currentIndex();       //获取下拉框的下标0 +, 1 - ,2 *, 3 /
    double result = 0.0;

        switch (index) {
        case 0:
            result = num1 + num2;
            qDebug("add has done");
            break;
        case 1:
            result = num1 - num2;
            break;
        case 2:
            result = num1 * num2;
            break;
        case 3:
            if(num2 == 0)
            {
                qDebug("num2 is 0");
                QMessageBox::about(this,"注意","除数不能为0");
                return;
            }
            result = num1 / num2;
            break;
        default:
            break;

    }
        ui->lineEditResult->setText(QString::number(result,'g',8)); //QString::number(double n, char format = 'g', int precision = 6)
        ui->lcdNumber->display(result);
}

void MainWindow::on_Clear_clicked()
{
    ui->lineEditNum1->clear();
    ui->lineEditNum2->clear();
    ui->lineEditResult->clear();
    ui->lcdNumber->display(0);
}

void MainWindow::on_Cal_clicked()
{

}
