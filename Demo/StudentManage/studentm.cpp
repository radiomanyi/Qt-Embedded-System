#include "studentm.h"
#include "ui_studentm.h"
#include "student.h"
#include <QStandardItemModel>
#include <QDebug>
#include <QModelIndexList>
#include<QMessageBox>

QList<Student *> studentDB;

QList<Student *> studentInfo;

StudentM::StudentM(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StudentM)
{
    ui->setupUi(this);
    ui->lblTime->setText("当前时间："+QDateTime::currentDateTime().toString("yyyy-MM-dd ddd hh:mm"));

  }

StudentM::~StudentM()
{
    delete ui;
}



void GetStuByAll()
{

   studentInfo.clear();
   foreach (Student *stu , studentDB) {
       studentInfo.append(stu);
       qDebug()<<stu->xuehao;
   }

}

void StudentM::DisplayStudent(QList<Student *> arrStu){

    if(arrStu.isEmpty())
    {ui->lstStu->clearSelection();return;}
   QStandardItemModel *standardItemModel=new QStandardItemModel(this);
   for(int i=0;i<arrStu.size();i++)
   {
       Student *student=(Student*)arrStu.at(i);
       QString str=student->xuehao+"   "+student->stuName+"        "+student->sexTape+"          "+student->birthday+"       "+student->stuClass+"   ";
       QStandardItem *item=new QStandardItem(str);
       standardItemModel->appendRow(item);
   }
   ui->lstStu->setModel(standardItemModel);
}


void StudentM::on_pbInsert_clicked()
{
    QString xb;
    QString xm=ui->leStuName->text();
    QString xh=ui->leStuNo->text();
    if(ui->rbMale->isChecked())
        xb="男";
    else xb="女";
    QString bj=ui->cboStuClass->currentText();
   QString sr=ui->deStuBrith->text();
   Student *student=new Student(xh,xm,bj,xb,sr);
   student->xuehao=xh;
   student->stuName=xm;
   student->stuClass=bj;
   student->sexTape=xb;
   student->birthday=sr;
    studentDB.append(student);
    qDebug()<<student->xuehao<<xm;
    QRegExp rx("^[a-z0-9A-Z]+[- | a-z0-9A-Z . _]+@([a-z0-9A-Z]+(-[a-z0-9A-Z]+)?\\.)+[a-z]{2,}$");
       if(!rx.exactMatch(ui->leEmil->text()))//匹配邮箱格式
                      QMessageBox::information(this,"提示","账号格式不正确,请重新输入");
          GetStuByAll();
    DisplayStudent(studentInfo);
}

void StudentM::on_pbDelete_clicked()
{
    for(int i=studentDB.size()-1;i>=0;i--){
        Student *stu=(Student*)studentDB[i];
        if(stu->xuehao==ui->leStuNo->text()) studentDB.takeAt(i);
   }
    GetStuByAll();
    DisplayStudent(studentInfo);
}


//void StudentM::on_lstStu_indexesMoved(const QModelIndexList &indexes)



void StudentM::on_lstStu_clicked(const QModelIndex &index)
{
    Student *student=(Student*)studentDB.at(index.row());
    ui->leStuName->setText(student->stuName);
    ui->leStuNo->setText(student->xuehao);
    ui->cboStuClass->setCurrentText(student->stuClass);
    if(student->sexTape=="男")ui->rbMale->setChecked(true);
    else ui->rbFemale->setChecked(false);
    ui->deStuBrith->setDate(QDate::fromString(student->birthday,"yyyy=MM-dd"));
}


void StudentM::on_pbFind_clicked()
{
    QString stuNo=ui->leStuNo->text();
    studentInfo.clear();
    foreach (Student *stu, studentDB) {
        if(stu->xuehao==stuNo)
            studentInfo.append(stu);
    }
    DisplayStudent(studentInfo);
}


void StudentM::on_pbUpdate_clicked()
{
    for(int i=studentDB.size()-1;i>=0;i--){
        Student *stu=(Student*)studentDB[i];
        if(stu->xuehao==ui->leStuNo->text())
        {
            QString xm=ui->leStuName->text();
            QString xh=ui->leStuNo->text();
             QString xb;
            if(ui->rbMale->isChecked())
                xb="男";
            else xb="女";
            QString bj=ui->cboStuClass->currentText();
           QString sr=ui->deStuBrith->text();
          studentDB[i]->xuehao=xh;
           studentDB[i]->stuName=xm;
           studentDB[i]->stuClass=bj;
           studentDB[i]->sexTape=xb;
           studentDB[i]->birthday=sr;

        }
   }
    GetStuByAll();
    DisplayStudent(studentInfo);
}

