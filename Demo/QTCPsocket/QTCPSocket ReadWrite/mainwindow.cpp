#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    TCPSocket = new QTcpSocket();
    //TCPSocket->connectToHost(QHostAddress(HOST_Address),Port_Number);
    TCPSocket->connectToHost(QHostAddress::LocalHost,8080);
    connect(TCPSocket,SIGNAL(readyRead()),this,SLOT(Read_Data_From_Socket()));
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

void MainWindow::on_pushButton_clicked()
{
    if(TCPSocket)
    {
        if(TCPSocket->isOpen())
        {
            QString WriteData = ui->send_message_box->text();
            TCPSocket->write(WriteData.toLocal8Bit()+char(10));
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

void MainWindow::Read_Data_From_Socket()
{
    if(TCPSocket)
    {
        if(TCPSocket->isOpen())
        {
            QByteArray Data_From_Server = TCPSocket->readAll();
            //QTextCodec *codec = QTextCodec::codecForName("GBK");
            //QString MessageString = codec->toUnicode(Data_From_Server);
            //QString MessageString = QString::fromStdString(Data_From_Server.toStdString());
            QString MessageString =QString::fromLocal8Bit(Data_From_Server);
            ui->receive_data_box->append(MessageString);
            qDebug()<<MessageString;
        }
    }
}
