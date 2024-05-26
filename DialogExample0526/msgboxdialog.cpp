#include "msgboxdialog.h"

#include <QMessageBox>
#include <QDebug>
#include <QGridLayout>

MsgBoxDialog::MsgBoxDialog(QWidget *parent): QDialog(parent)
{
    setWindowTitle(tr("question dialog"));
    label = new QLabel(tr("default"));
    questionBtn = new QPushButton();
    questionBtn->setText(tr("question button"));
    QGridLayout *layout = new QGridLayout(this);
    layout->addWidget(label, 0, 0);
    layout->addWidget(questionBtn, 0, 1);
    connect(questionBtn, SIGNAL(clicked()), this, SLOT(showQuestionMsg()));

}

void MsgBoxDialog::showQuestionMsg()
{
    qInfo() << "enter showQuestionMsg";
    int question = QMessageBox::question(this, tr("question message"), tr("continue?"),
                                              QMessageBox::Ok|QMessageBox::Cancel, QMessageBox::Ok);
    switch (question) {
    case QMessageBox::Ok:
        label->setText("ok");
        break;
    case QMessageBox::Cancel:
        label->setText("cancel");
        break;
    default:
        break;
    }
    return;
}
