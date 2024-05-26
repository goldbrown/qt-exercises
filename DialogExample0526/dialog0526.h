#ifndef DIALOG0526_H
#define DIALOG0526_H

#include <QDialog>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QFrame>

class Dialog0526 : public QDialog
{
    Q_OBJECT

public:
    Dialog0526(QWidget *parent = nullptr);
    ~Dialog0526();

private:
    QPushButton *fileBtn;
    QLineEdit *fileLineEdit;
    QGridLayout *mainLayout;

    // color dialog
    QPushButton *colorBtn;
    QFrame *colorFrame;


private slots:
    void showFile();
    void showColor();
};
#endif // DIALOG0526_H
