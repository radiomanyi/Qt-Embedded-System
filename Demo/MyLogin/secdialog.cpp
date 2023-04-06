#include "secdialog.h"
#include "ui_secdialog.h"
#include "caldialog.h"

secDialog::secDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secDialog)
{
    ui->setupUi(this);
    secDialog::setWindowTitle("secDialog");
}

secDialog::~secDialog()
{
    delete ui;
}

void secDialog::on_pushButton_pressed()
{
    newDialog = new calDialog(this);
    newDialog->show();
}

void secDialog::on_pushButton_2_pressed()
{
    hide();
}
