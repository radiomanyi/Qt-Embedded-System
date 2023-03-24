#include "widget.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMessageBox messageBox;
    messageBox.setIconPixmap(QPixmap("C:/Users/pyhom/Documents/QMessageBox/coffee-cup-icon.png"));
    messageBox.setText("This QMessageBox is with\ncustom icon !!!");
    messageBox.setWindowTitle("QMessageBox with Custom Icon..");
    messageBox.show();
    Widget w;
    w.show();

    return a.exec();
}
