#ifndef BASEINFO_H
#define BASEINFO_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QTextEdit>
#include <QGridLayout>
#include <QPushButton>
#include <QWidget>

class BaseInfo : public QDialog
{
    Q_OBJECT
public:
    explicit BaseInfo(QWidget *parent = nullptr);

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

signals:

};

#endif // BASEINFO_H
