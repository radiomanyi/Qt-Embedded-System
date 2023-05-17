#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QSerialPort>

namespace Ui {
class MainWindow;
}

class MainWindow: public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_Send_Data_clicked();
    void Read_Serial();

private:
    Ui::MainWindow *ui;
    QSerialPort  *COMPORT;
    QString Data_From_SerialPort;
    bool IS_Data_Received = false;

};

#endif // MAINWINDOW_H
