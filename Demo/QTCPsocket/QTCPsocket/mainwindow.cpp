#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    TCPSocket = new QTcpSocket();
    //TCPSocket->connectToHost(QHostAddress(HOST_Address),Port_Number);
    TCPSocket->connectToHost(QHostAddress::Any,8080);
    TCPSocket->open(QIODevice::ReadWrite);
    if(TCPSocket->isOpen())
    {
        QMessageBox::information(this,"Qt With Mr Ping","Connected To The Server.");
    }
    else
    {
        QMessageBox::information(this,"Qt With Mr Ping","Not Connected To The Server.");
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
