#ifndef MYSECONDWINDOW_H
#define MYSECONDWINDOW_H

#include <QMainWindow>

namespace Ui {
class mySecondWindow;
}

class mySecondWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mySecondWindow(QWidget *parent = nullptr);
    ~mySecondWindow();

private:
    Ui::mySecondWindow *ui;
};

#endif // MYSECONDWINDOW_H
