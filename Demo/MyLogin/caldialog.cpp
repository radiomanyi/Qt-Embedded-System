#include "caldialog.h"
#include "ui_caldialog.h"

calDialog::calDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calDialog)
{
    ui->setupUi(this);
    calDialog::setWindowTitle("calDialog");
    ui->lcdNumber->setPalette(Qt::green);
    ui->lcdNumber->setDigitCount(8);

    // QRegExp rx("^-?(99|[1-7]?\\d(\\.\\d{1,2})?)$");
    // QRegExp rx("^-?(180|1?[0-7]?\\d(\\.\\d{1,4})?)$");
    // QRegExpValidator *pReg = new QRegExpValidator(rx, this);

    QDoubleValidator *pReg = new QDoubleValidator(0, 100, 2, this);
    pReg->setNotation(QDoubleValidator::StandardNotation);

    ui->lineEditNum1->setValidator(pReg);
    ui->lineEditNum2->setValidator(pReg);

}


calDialog::~calDialog()
{
    delete ui;
}


void calDialog::on_Calculate_clicked()
{
    double num1 = ui->lineEditNum1->text().toDouble();//获取num1的值
    double num2 = ui->lineEditNum2->text().toDouble();//获取num2的值
      int index = ui->comboBox->currentIndex();       //获取下拉框的下标0 +, 1 - ,2 *, 3 /
    double result = 0.0;

        switch (index) {
        case 0:
            result = num1 + num2;
            break;
        case 1:
            result = num1 - num2;
            break;
        case 2:
            result = num1 * num2;
            break;
        case 3:
            if(num2 == 0.0)
            {
                qDebug("num2 is 0");
                QMessageBox::about(this,"注意","除数不能为0");
                return;
            }
            result = num1 / num2;
            break;
        default:
            break;

    }
        ui->lineEditResult->setText(QString::number(result,'f',2));
        ui->lcdNumber->display(result);
}

void calDialog::on_Clear_clicked()
{
        ui->lineEditNum1->clear();
        ui->lineEditNum2->clear();
        ui->lineEditResult->clear();
        ui->lcdNumber->display(0);

}

void calDialog::on_pushButton_clicked()
{
    hide();
}
