#include "mysecondwindow.h"
#include "ui_mysecondwindow.h"

mySecondWindow::mySecondWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mySecondWindow)
{
    ui->setupUi(this);
}

mySecondWindow::~mySecondWindow()
{
    delete ui;
}
