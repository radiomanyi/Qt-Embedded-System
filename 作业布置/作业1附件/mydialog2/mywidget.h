#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

public slots:


private slots:
    void on_CloseButton_clicked();

private:
    Ui::MyWidget *ui;
};

#endif // MYWIDGET_H
