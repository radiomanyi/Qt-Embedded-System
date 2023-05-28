#include "studentm.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    StudentM w;
    w.show();
    return a.exec();
}
