#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    COMPORT = new QSerialPort();
    COMPORT->setPortName("COM3");
    COMPORT->setBaudRate(QSerialPort::Baud9600);
    COMPORT->setParity(QSerialPort::Parity::NoParity);
    COMPORT->setDataBits(QSerialPort::DataBits::Data8);
    COMPORT->setStopBits(QSerialPort::StopBits::OneStop);
    COMPORT->setFlowControl(QSerialPort::FlowControl::NoFlowControl);
    COMPORT->open(QIODevice::ReadWrite);

    if(COMPORT->isOpen())
    {
        qDebug()<<"Serial Port is Connected.";
    }
    else
    {
        qDebug()<<"Serial Port is Not Connected.";
        qDebug()<<COMPORT->error();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

//bool IS_open = false;
void MainWindow::on_pushButton_Send_Data_clicked()
{
     if(COMPORT->isOpen())
     {
        //char(10) = \n line break
        //char(13) = \r return
         COMPORT->write(ui->lineEdit_Send_Data->text().toLatin1()+char(10));
         COMPORT->flush();
         qDebug()<<ui->lineEdit_Send_Data->text().toLatin1();
         /*
        if(IS_open==false)
        {
         COMPORT->write("ON");
        IS_open = true;
        }
        else
        {
        IS_open = false;
        }
        */
     }
}
