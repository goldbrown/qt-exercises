#include "qttool.h"

#include <QApplication>
#include <QString>
#include <QPushButton>
#include <QDebug>

void qtIterator();

int main(int argc, char *argv[])
{

    // QString
    QString str1 = "Welcom ";
    QString str2 = "to ";
    str1.append(str2);
    str1.append(" you!");
    qInfo() << str1;

    // arg()
    QString str3 = QString("%1 was born in %2").arg("John").arg("New York");
    qInfo() << str3;

    // toInt()
    QString intStr = "125";
    bool ok;
    qInfo() << intStr.toInt(&ok, 10);
    qInfo() << ok;

    // QByteArray
    QByteArray ba = str3.toUtf8();
    qInfo() << ba;
    qInfo() << ba.append(" some char");

    // qt list
    QList<QString> list;
    QString str("this is a test string");
    list << str;
    qInfo() << list[0] + " how are you";

    QList<int> intlist;
    intlist << 1 << 2 << 3 << 4 << 5;
    QListIterator<int> iter(intlist);
    for(;iter.hasNext();) {
        qInfo() << iter.next();
    }

    // qt iterator
    qtIterator();


    return 0;
}

void qtIterator()
{
    QList<int> list;
    for (int i = 0; i < 10; i++) {
        list.insert(list.end(), i);
    }

    QList<int>::iterator iter;
    for(iter = list.begin(); iter != list.end(); iter++) {
        qInfo() << *iter;
        *iter = (*iter) * 10;
    }
    QList<int>::const_iterator ci;
    for(ci = list.constBegin(); ci != list.constEnd(); ci++) {
        qInfo() << *ci;
    }
}
