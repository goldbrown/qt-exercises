#include "mydrawer.h"
#include <QGroupBox>
#include <QVBoxLayout>
#include <QPixmap>

MyDrawer::MyDrawer(QWidget *parent, Qt::WindowFlags f): QToolBox(parent, f)
{
    setWindowTitle(tr("My qq"));
    toolBtn1_1 = new QToolButton();
    toolBtn1_1->setText(tr("张三"));
    QPixmap pic11("/Users/goldbrown/SelfCode/qt-exercises/build-MyQQExample-Desktop_Qt_5_12_12_clang_64bit-Debug/11.png");
    toolBtn1_1->setIcon(pic11);
    toolBtn1_1->setIconSize(pic11.size());
    toolBtn1_1->setAutoRaise(true);
    toolBtn1_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn1_2 = new QToolButton();
    toolBtn1_2->setText(tr("李四"));
    QPixmap pic12("/Users/goldbrown/SelfCode/qt-exercises/build-MyQQExample-Desktop_Qt_5_12_12_clang_64bit-Debug/12.png");
    toolBtn1_2->setIcon(pic12);
    toolBtn1_2->setIconSize(pic12.size());
    toolBtn1_2->setAutoRaise(true);
    toolBtn1_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn1_3 = new QToolButton();
    toolBtn1_3->setText(tr("王五"));
    QPixmap pic13("/Users/goldbrown/SelfCode/qt-exercises/build-MyQQExample-Desktop_Qt_5_12_12_clang_64bit-Debug/13.png");

    toolBtn1_3->setIcon(pic13);
    toolBtn1_3->setIconSize(pic13.size());
    toolBtn1_3->setAutoRaise(true);
    toolBtn1_3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn1_4 = new QToolButton();
    toolBtn1_4->setText(tr("刘二"));
    QPixmap pic14("/Users/goldbrown/SelfCode/qt-exercises/build-MyQQExample-Desktop_Qt_5_12_12_clang_64bit-Debug/14.png");

    toolBtn1_4->setIcon(pic14);
    toolBtn1_4->setIconSize(pic14.size());
    toolBtn1_4->setAutoRaise(true);
    toolBtn1_4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn1_5 = new QToolButton();
    toolBtn1_5->setText(tr("周扒皮"));
    QPixmap pic15("/Users/goldbrown/SelfCode/qt-exercises/build-MyQQExample-Desktop_Qt_5_12_12_clang_64bit-Debug/13.png");

    toolBtn1_5->setIcon(pic15);
    toolBtn1_5->setIconSize(pic15.size());
    toolBtn1_5->setAutoRaise(true);
    toolBtn1_5->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    QGroupBox *group1 = new QGroupBox();
    QVBoxLayout *layout1 = new QVBoxLayout(group1);
    layout1->setMargin(50);
    layout1->setAlignment(Qt::AlignHCenter);
    layout1->addWidget(toolBtn1_1);
    layout1->addWidget(toolBtn1_2);
    layout1->addWidget(toolBtn1_3);
    layout1->addWidget(toolBtn1_4);
    layout1->addWidget(toolBtn1_5);
//    layout1->addStretch();
    this->addItem(group1, tr("我的好友"));

    toolBtn2_1 = new QToolButton();
    toolBtn2_1->setText(tr("小明"));
    QPixmap pic21("/Users/goldbrown/SelfCode/qt-exercises/build-MyQQExample-Desktop_Qt_5_12_12_clang_64bit-Debug/21.png");
    toolBtn2_1->setIcon(pic21);
    toolBtn2_1->setIconSize(pic21.size());
    toolBtn2_1->setAutoRaise(true);
    toolBtn2_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn2_2 = new QToolButton();
    toolBtn2_2->setText(tr("纤纤"));
    toolBtn2_2->setIcon(pic12);
    toolBtn2_2->setIconSize(pic12.size());
    toolBtn2_2->setAutoRaise(true);
    toolBtn2_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    QGroupBox *group2 = new QGroupBox();
    QVBoxLayout *layout2 = new QVBoxLayout(group2);
    layout2->setMargin(5);
    layout2->setAlignment(Qt::AlignHCenter);
    layout2->addWidget(toolBtn2_1);
    layout2->addWidget(toolBtn2_2);
    layout2->addStretch();
    this->addItem(group2, tr("陌生人"));




}
