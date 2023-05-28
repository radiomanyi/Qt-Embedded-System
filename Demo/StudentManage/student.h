#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student
{
public:
     QString xuehao,stuName,stuClass,sexTape,birthday;

 //Student();
    Student(QString xuehao,QString stuName,QString stuClass,QString sexTape,QString birthday)
    {
       this-> xuehao=xuehao;
       this-> stuName=stuName;
        this->stuClass=stuClass;
        this->sexTape=sexTape;
        this->birthday=birthday;
    }
};

#endif // STUDENT_H
