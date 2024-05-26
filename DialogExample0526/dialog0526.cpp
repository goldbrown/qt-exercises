#include "dialog0526.h"
#include <QFileDialog>
#include <QDebug>
#include <QColorDialog>
#include "msgboxdialog.h"


Dialog0526::Dialog0526(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("各种标准对话框"));

    // file
    fileBtn = new QPushButton();
    fileBtn->setText(tr("file standard dialog example"));
    fileLineEdit = new QLineEdit();
    mainLayout = new QGridLayout(this);
    mainLayout->addWidget(fileBtn, 0, 0);
    mainLayout->addWidget(fileLineEdit, 0, 1);

    connect(fileBtn, SIGNAL(clicked()), this, SLOT(showFile()));

    // color
    colorBtn = new QPushButton();
    colorBtn->setText(tr("标准颜色对话框"));
    colorFrame = new QFrame();
    colorFrame->setAutoFillBackground(true);
    colorFrame->setFrameShape(QFrame::Box);
    colorFrame->setFixedHeight(50);
    mainLayout->addWidget(colorBtn, 1, 0);
    mainLayout->addWidget(colorFrame, 1, 1);
    connect(colorBtn, SIGNAL(clicked()), this, SLOT(showColor()));

    // msg
//    MsgBoxDialog msg(this, mainLayout);
//    msg.show();

}

Dialog0526::~Dialog0526()
{
}

void Dialog0526::showFile()
{
    QString openFileName = QFileDialog::getOpenFileName(this, "openfile dialog", "/", "C++ files(*.cpp)::C files(*.c)::Head files(*.h)");
    fileLineEdit->setText(openFileName);
    qInfo() << "name:" + openFileName;
}

void Dialog0526::showColor()
{
    QColor color = QColorDialog::getColor(Qt::blue);
    qInfo() << "color is:" << color;
    if (color.isValid()) {
        colorFrame->setPalette(QPalette(color));
    }
}

