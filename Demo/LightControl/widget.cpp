#include "widget.h"
#include "ui_widget.h"
#include<QPixmap>
#include<QMovie>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QFont font;
    font.setPointSize(32);
    ui->label->setFont(font);
    QMovie *movie = new QMovie(":/img/ledcontrol.gif");
    ui->label_3->setMovie(movie);
    movie->start();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QPixmap image;
        image.load(":/img/lighton.png");
        ui->label_2->clear();
        ui->label_2->setPixmap(image);
        ui->label_2->show();
}

void Widget::on_pushButton_2_clicked()
{
    QPixmap image;
        image.load(":/img/lightoff.png");
        ui->label_2->clear();
        ui->label_2->setPixmap(image);
        ui->label_2->show();
}
