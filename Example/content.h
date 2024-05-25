#ifndef CONTENT_H
#define CONTENT_H

#include <QDialog>
#include <QFrame>
#include <QPushButton>
#include <QStackedWidget>
#include "baseinfo.h"
#include "contact.h"
#include "detail.h"

class Content : public QFrame
{
    Q_OBJECT

public:
    Content(QWidget *parent = nullptr);
    ~Content();
    QStackedWidget *stack;
    QPushButton *AmendBtn;
    QPushButton *CloseBtn;
    BaseInfo *BaseInfo;
    Contact *Contact;
    Detail *Detail;

};
#endif // CONTENT_H
