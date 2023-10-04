#include "dialog.h"
#include "ui_dialog.h"
#include "mysecondwindow.h"
#include "ui_mysecondwindow.h"
#include <QRandomGenerator>
#include <QDebug>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

QString Dialog::digitalData(float minRange, float maxRange)
{
    //float maxRange=10.0;
    //float minRange=2.0;
    float value = QRandomGenerator::global()->generateDouble()*(maxRange-minRange)+minRange;
    QByteArray temp;
    int length = sizeof(value);
    temp.resize(length);
    memcpy(temp.data(),&value,length);
    QString result= temp.toHex().toUpper();
    return result;

}
void Dialog::on_pushButton_clicked()
{
   qDebug()<<"random number is:"<<digitalData(2.0,10.0);
}

void Dialog::on_secondWindow_clicked()
{
    mySecondWindow *mysecondwindow = new mySecondWindow(this);
    mysecondwindow->show();
    this->hide();
}
