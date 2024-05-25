#include "contact.h"

Contact::Contact(QWidget *parent) : QWidget(parent)
{
    Mail = new QLabel(tr("EMail:"));
    MailLineEdit = new QLineEdit();
    Address = new QLabel(tr("Address:"));
    AddressLineEdit = new QLineEdit();
    AddressCode = new QLabel(tr("AddressCode:"));
    AddressCodeLineEdit = new QLineEdit();
    Phone = new QLabel(tr("Phone:"));
    PhoneLineEdit = new QLineEdit();
    ReceiveMsgCheckBox = new QCheckBox(tr("Receive Msg"));
    OfficePhone = new QLabel(tr("OfficePhone"));
    OfficePhoneLineEdit = new QLineEdit();
    mainLayout = new QGridLayout(this);

    mainLayout->addWidget(Mail, 0, 0);
    mainLayout->addWidget(MailLineEdit, 0, 1);

    mainLayout->addWidget(Address, 1, 0);
    mainLayout->addWidget(AddressLineEdit, 1, 1);

    mainLayout->addWidget(AddressCode, 2, 0);
    mainLayout->addWidget(AddressCodeLineEdit, 2, 1);

    mainLayout->addWidget(Phone, 3, 0);
    mainLayout->addWidget(PhoneLineEdit, 3, 1);
    mainLayout->addWidget(ReceiveMsgCheckBox, 3, 2);

    mainLayout->addWidget(OfficePhone, 4, 0);
    mainLayout->addWidget(OfficePhoneLineEdit, 4, 1);


    mainLayout->setMargin(5);
    mainLayout->setSpacing(5);
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);

}
