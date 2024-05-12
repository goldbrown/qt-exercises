#include "dialog.h"
#include "ui_dialog.h"

const static double PI = 3.1416;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    bool ok;
    QString tmpStr;
    QString inputValStr = ui->radiusLineEdit->text();
    int valInt = inputValStr.toInt(&ok);
    double area = valInt * valInt * PI;
    ui->areaLabel_2->setText(tmpStr.setNum(area));
}

