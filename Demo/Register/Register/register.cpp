#include "register.h"
#include "ui_register.h"
#include "user.h"
#include <QStandardItemModel>
#include <QDebug>
#include <QModelIndexList>

QList<User *> userDB;

Register::Register(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::DisplayUser(QList<User *> arrUser){


    if(arrUser.isEmpty())
    {ui->lstUser->clearSelection();return;}

    //clearSelection(): 这是QItemSelectionModel的方法，适用于清除所有用户选中的项
//    类QStandardItemModel负责保存数据，每个数据项被表示为类QStandardItem的对象
//    https://blog.csdn.net/bluewhu/article/details/104924809

   QStandardItemModel *standardItemModel=new QStandardItemModel(this);
   for(int i=0;i<arrUser.size();i++)
   {
       User *user=(User*)arrUser.at(i);
       QString str=user->username+"   "+user->password+"        ";
       QStandardItem *item=new QStandardItem(str);
       standardItemModel->appendRow(item);                                  //成员函数appendRow()向列表中添加一个数据项
   }
   ui->lstUser->setModel(standardItemModel);
}

void Register::on_pbFind_clicked()
{

    DisplayUser(userDB);
}


void Register::on_pbegister_clicked()
{
    QString na=ui->leRegname->text();
    QString pa=ui->leRepass->text();

   User *user=new User(na,pa);

    userDB.append(user);
    qDebug()<<user->username<<na;
}


//void Register::on_pbLogin_clicked()
//{
//    QString userna=ui->leLogname->text();
//    QString userpa=ui->leRepass->text();

//    foreach (User *userlog, userDB) {
//        if(userlog->username == userna && userlog->password == userpa)
//            ui->lbsucess->setText("登录成功");
//        else
//            ui->lbsucess->setText("用户名或密码错误，请重新输入");
//    }

//}

