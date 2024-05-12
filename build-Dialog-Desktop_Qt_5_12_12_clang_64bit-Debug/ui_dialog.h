/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QLabel *e1;
    QLineEdit *radiusLineEdit;
    QLabel *Label_1;
    QLabel *areaLabel_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 600);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 200, 113, 32));
        splitter_2 = new QSplitter(Dialog);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(120, 160, 248, 21));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        e1 = new QLabel(splitter);
        e1->setObjectName(QString::fromUtf8("e1"));
        splitter->addWidget(e1);
        radiusLineEdit = new QLineEdit(splitter);
        radiusLineEdit->setObjectName(QString::fromUtf8("radiusLineEdit"));
        splitter->addWidget(radiusLineEdit);
        splitter_2->addWidget(splitter);
        Label_1 = new QLabel(splitter_2);
        Label_1->setObjectName(QString::fromUtf8("Label_1"));
        splitter_2->addWidget(Label_1);
        areaLabel_2 = new QLabel(splitter_2);
        areaLabel_2->setObjectName(QString::fromUtf8("areaLabel_2"));
        areaLabel_2->setFrameShape(QFrame::Panel);
        areaLabel_2->setFrameShadow(QFrame::Sunken);
        splitter_2->addWidget(areaLabel_2);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "\350\256\241\347\256\227", nullptr));
        e1->setText(QApplication::translate("Dialog", "\345\215\212\345\276\204", nullptr));
        Label_1->setText(QApplication::translate("Dialog", "\351\235\242\347\247\257", nullptr));
        areaLabel_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
