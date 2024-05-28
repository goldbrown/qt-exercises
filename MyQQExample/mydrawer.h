#ifndef MYDRAWER_H
#define MYDRAWER_H

#include <QToolBox>
#include <QToolButton>

class MyDrawer : public QToolBox
{
    Q_OBJECT
public:
    MyDrawer(QWidget *parent = 0, Qt::WindowFlags f = 0);
private:
    QToolButton *toolBtn1_1;
    QToolButton *toolBtn1_2;
    QToolButton *toolBtn1_3;
    QToolButton *toolBtn1_4;
    QToolButton *toolBtn1_5;

    QToolButton *toolBtn2_1;
    QToolButton *toolBtn2_2;

    QToolButton *toolBtn3_1;
    QToolButton *toolBtn3_2;
};

#endif // MYDRAWER_H
