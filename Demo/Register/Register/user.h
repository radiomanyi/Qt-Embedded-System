#ifndef USER_H
#define USER_H

#include <QObject>
#include <QWidget>

class User
{
public:
//    User();
    QString username,password;

    User(QString username,QString password)
    {
       this-> username=username;
       this-> password=password;
    }
};

#endif // USER_H
