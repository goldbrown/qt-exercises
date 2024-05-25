#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QTextEdit>
#include <QGridLayout>
#include <QPushButton>

class MyDialog : public QDialog
{
    Q_OBJECT

public:
    MyDialog(QWidget *parent = nullptr);
    ~MyDialog();

private:
    // left part
    QLabel *UserNameLabel;
    QLineEdit *UserNameLineEdit;
    QLabel *NameLabel;
    QLineEdit *NameLineEdit;
    QLabel *SexLabel;
    QComboBox *SexComboBox;
    QLabel *DepartmentLabel;
    QTextEdit *DepartmentTextEdit;
    QLabel *AgeLabel;
    QLineEdit *AgeLineEdit;
    QLabel *OtherLabel;
    QGridLayout *LeftLayout;

    // right part
    QLabel *HeadLabel;
    QLabel *HeadIconLabel;
    QPushButton *UpdateHeadBtn;
    QHBoxLayout *TopRightLayout;
    QLabel *IntroductionLabel;
    QTextEdit *IntroductionTextEdit;
    QVBoxLayout *RightLayout;
    // bottom part
    QPushButton *OkBtn;
    QPushButton *CancelBtn;
    QHBoxLayout *BottomLayout;



};
#endif // MYDIALOG_H
