#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessagebox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/login-icon.png");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username = ui->lineEditName->text();
    QString password = ui->lineEditPWD->text();

        if(username ==  "Admin" && password == "123456") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            //hide();
            newDialog = new secDialog(this);
            newDialog->show();
        }
        else {
            QMessageBox::warning(this,"Login", "Username and password is not correct");
        }
}
