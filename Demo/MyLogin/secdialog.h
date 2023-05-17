#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>
#include <QMessagebox>
#include "caldialog.h"

namespace Ui {
class secDialog;
}

class secDialog : public QDialog
{
    Q_OBJECT

public:
    explicit secDialog(QWidget *parent = 0);
    ~secDialog();

private slots:
    void on_pushButton_pressed();

    void on_pushButton_2_pressed();

   // void on_pushButton_2_clicked();

   // void on_pushButton_clicked();

private:
    Ui::secDialog *ui;
    calDialog *newDialog;
};

#endif // SECDIALOG_H
