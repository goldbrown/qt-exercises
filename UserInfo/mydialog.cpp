#include "mydialog.h"
#include <QPixmap>
#include <QFrame>

MyDialog::MyDialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("UserInfo"));
    // left part
    UserNameLabel = new QLabel(tr("UserName:"));
    UserNameLineEdit = new QLineEdit();
    NameLabel = new QLabel(tr("Name:"));
    NameLineEdit = new QLineEdit();
    SexLabel = new QLabel(tr("Sex:"));
    SexComboBox = new QComboBox();
    SexComboBox->addItem(tr("female"));
    SexComboBox->addItem(tr("male"));
    DepartmentLabel = new QLabel(tr("Department"));
    DepartmentTextEdit = new QTextEdit();
    AgeLabel = new QLabel(tr("Age:"));
    AgeLineEdit = new QLineEdit();
    OtherLabel = new QLabel(tr("Others:"));
    OtherLabel->setFrameStyle(QFrame::Panel|QFrame::Sunken);
    LeftLayout = new QGridLayout();
    LeftLayout->addWidget(UserNameLabel, 0, 0);
    LeftLayout->addWidget(UserNameLineEdit, 0, 1);
    LeftLayout->addWidget(NameLabel, 1, 0);
    LeftLayout->addWidget(NameLineEdit, 1, 1);
    LeftLayout->addWidget(SexLabel, 2, 0);
    LeftLayout->addWidget(SexComboBox, 2, 1);
    LeftLayout->addWidget(DepartmentLabel, 3, 0);
    LeftLayout->addWidget(DepartmentTextEdit, 3, 1);
    LeftLayout->addWidget(AgeLabel, 4, 0);
    LeftLayout->addWidget(AgeLineEdit, 4, 1);
    LeftLayout->addWidget(OtherLabel, 5, 0, 1, 2);
    LeftLayout->setColumnStretch(0, 1);
    LeftLayout->setColumnStretch(1, 3);

    // right
    HeadLabel = new QLabel(tr("Icon:"));
    HeadIconLabel = new QLabel();
    QPixmap icon;
    icon.load("/Users/goldbrown/SelfCode/qt-exercises/build-UserInfo-Desktop_Qt_5_12_12_clang_64bit-Debug/312.png");
    HeadIconLabel->setPixmap(icon);
    HeadIconLabel->resize(icon.width(), icon.height());
    UpdateHeadBtn = new QPushButton(tr("Update"));
    TopRightLayout = new QHBoxLayout();
    TopRightLayout->setSpacing(20);
    TopRightLayout->addWidget(HeadLabel);
    TopRightLayout->addWidget(HeadIconLabel);
    TopRightLayout->addWidget(UpdateHeadBtn);

    IntroductionLabel = new QLabel(tr("Introduction:"));
    IntroductionTextEdit = new QTextEdit();
    RightLayout = new QVBoxLayout();
    RightLayout->setMargin(10);
    RightLayout->addLayout(TopRightLayout);
    RightLayout->addWidget(IntroductionLabel);
    RightLayout->addWidget(IntroductionTextEdit);

    // bottom
    OkBtn = new QPushButton(tr("OK"));
    CancelBtn = new QPushButton(tr("Cancel"));
    BottomLayout = new QHBoxLayout();
    BottomLayout->addStretch();
    BottomLayout->addWidget(OkBtn);
    BottomLayout->addWidget(CancelBtn);

    // global
    QGridLayout *mainLayout = new QGridLayout(this);
    mainLayout->setSpacing(5);
    mainLayout->setMargin(5);
    mainLayout->addLayout(LeftLayout, 0, 0);
    mainLayout->addLayout(RightLayout, 0, 1);
    mainLayout->addLayout(BottomLayout, 1, 0, 1, 2);
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);




}

MyDialog::~MyDialog()
{
}

