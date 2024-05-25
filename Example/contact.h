#ifndef CONTACT_H
#define CONTACT_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QCheckBox>

class Contact : public QWidget
{
public:
    explicit Contact(QWidget *parent = nullptr);
private:
    QLabel *Mail;
    QLineEdit *MailLineEdit;
    QLabel *Address;
    QLineEdit *AddressLineEdit;
    QLabel *AddressCode;
    QLineEdit *AddressCodeLineEdit;
    QLabel *Phone;
    QLineEdit *PhoneLineEdit;
    QCheckBox *ReceiveMsgCheckBox;
    QLabel *OfficePhone;
    QLineEdit *OfficePhoneLineEdit;
    QGridLayout *mainLayout;

    QPushButton *OkBtn;
    QPushButton *CancelBtn;

signals:

};

#endif // CONTACT_H
