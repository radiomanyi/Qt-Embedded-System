#include "widget.h"
#include "ui_widget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
 /*    QHBoxLayout *hlayout = new QHBoxLayout;
       QHBoxLayout * hlayout = new QHBoxLayout;     //新建水平布局
       hlayout->addWidget(ui->newfontComboBox);
       hlayout->addWidget(ui->lineEdit);
       hlayout->setSpacing(10);
       hlayout->setContentsMargins(0, 0, 50, 100);
       setLayout(hlayout);
*/

 /*
       QGridLayout * glayout = new QGridLayout;     //新建栅格化布局
       //addWidget(QWidget, 起始行，起始列，占据行数，占据列数)
       glayout->setSpacing(50);
       glayout->addWidget(ui->fontComboBox_fir, 0, 0, 1, 1);
       glayout->addWidget(ui->fontComboBox_sec, 0, 1, 1, 1);
       glayout->addWidget(ui->lineEdit_1, 2, 0, 1, 1);
       glayout->addWidget(ui->lineEdit_2, 2, 1, 1, 1);
       glayout->addWidget(ui->pushButton_1, 3, 0, 1, 1);
       glayout->addWidget(ui->pushButton_2, 3, 1, 1, 1);
       setLayout(glayout);
  */
}

Widget::~Widget()
{
    delete ui;
}
