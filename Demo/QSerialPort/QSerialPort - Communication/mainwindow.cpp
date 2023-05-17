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
        qDebug()<<COMPORT->error();
    }
    else
    {
        qDebug()<<"Serial Port is Not Connected.";
        qDebug()<<COMPORT->error();
    }

    connect(COMPORT,SIGNAL(readyRead()),this,SLOT(Read_Serial()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Send_Data_clicked()
{
     if(COMPORT->isOpen())
     {
         COMPORT->write(ui->lineEdit_Send_Data->text().toLatin1()+char(10));
         COMPORT->flush();
         qDebug()<<"Write Serial";
     }
}

void MainWindow::Read_Serial()
{
    if(COMPORT->isOpen())
    {
        while(COMPORT->bytesAvailable())
        {
            Data_From_SerialPort += COMPORT->readAll();
        }
        if(Data_From_SerialPort.at(Data_From_SerialPort.length()-1)==char(10))
        {
            IS_Data_Received = true;
        }
        if(IS_Data_Received == true)
        {
            qDebug()<<"Data From Serial Port: "<<Data_From_SerialPort;
            ui->textEdit->append(Data_From_SerialPort);
            Data_From_SerialPort = "";
            IS_Data_Received = false;
        }
    }
}

