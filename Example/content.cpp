#include "content.h"
#include "contact.h"

Content::Content(QWidget *parent)
    : QFrame(parent)
{
    // three pages
    stack = new QStackedWidget();
    stack->setFrameStyle(QFrame::Panel|QFrame::Sunken);
    BaseInfo = new class BaseInfo();
    Contact = new class Contact();
    Detail = new class Detail();
    stack->addWidget(BaseInfo);
    stack->addWidget(Contact);
    stack->addWidget(Detail);

    // two buttons
    AmendBtn = new QPushButton(tr("Amend"));
    CloseBtn = new QPushButton(tr("Close"));
    QHBoxLayout *BtnLayout = new QHBoxLayout();
    BtnLayout->addWidget(AmendBtn);
    BtnLayout->addWidget(CloseBtn);
    BtnLayout->addStretch(1);

    // global layout
    QVBoxLayout *RightLayout = new QVBoxLayout(this);
    RightLayout->addWidget(stack);
    RightLayout->addLayout(BtnLayout);
    RightLayout->setSpacing(5);
    RightLayout->setMargin(5);



}

Content::~Content()
{
}

