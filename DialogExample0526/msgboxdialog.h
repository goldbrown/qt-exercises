#ifndef MSGBOXDIALOG_H
#define MSGBOXDIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>

class MsgBoxDialog : public QDialog
{
    Q_OBJECT
public:
    MsgBoxDialog(QWidget *parent = nullptr);

private slots:
    void showQuestionMsg();

private:
    QPushButton *questionBtn;
    QLabel *label;
};

#endif // MSGBOXDIALOG_H
