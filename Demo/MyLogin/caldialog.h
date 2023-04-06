#ifndef CALDIALOG_H
#define CALDIALOG_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class calDialog;
}

class calDialog : public QDialog
{
    Q_OBJECT

public:
    explicit calDialog(QWidget *parent = nullptr);
    ~calDialog();

private slots:
    void on_Calculate_clicked();

    void on_Clear_clicked();

    void on_pushButton_clicked();

private:
    Ui::calDialog *ui;
};

#endif // CALDIALOG_H
