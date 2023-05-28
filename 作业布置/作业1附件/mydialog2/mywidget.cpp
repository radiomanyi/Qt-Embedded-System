#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDialog>
MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);


}

MyWidget::~MyWidget()
{
    delete ui;
}



void MyWidget::on_CloseButton_clicked()
{
    close();
}
