#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    TCPSocket = new QTcpSocket();
    TCPSocket->connectToHost(QHostAddress::LocalHost,8080);
    //TCPSocket->connectToHost(QHostAddress::LocalHost,8080);
    TCPSocket->open(QIODevice::ReadWrite);
    if(TCPSocket->isOpen())
    {
        QMessageBox::information(this,"Qt Socket 学习","Connected To The Server.");
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

void MainWindow::on_pushButton_clicked()
{
    if(TCPSocket)
    {
        if(TCPSocket->isOpen())
        {
            QString WriteData = ui->send_message_box->text().append(char(10));

            TCPSocket->write(WriteData.toUtf8().data());//toStdString().c_str()
        }
    else
        {
            QMessageBox::information(this,"Qt With Mr Ping","Error:"+TCPSocket->errorString());
        }
    }
    else
    {
            QMessageBox::information(this,"Qt With Mr Ping","Error:"+TCPSocket->errorString());
    }

}
