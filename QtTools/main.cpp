#include "qttool.h"

#include <QApplication>
#include <QString>
#include <QPushButton>
#include <QDebug>
#include <QMap>
#include <QtAlgorithms>
#include <QtGlobal>

void qtIterator();
void qtMapIterator();
void basicFunction();

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

    // map iterator
    qtMapIterator();

    basicFunction();


    return 0;
}

void mySwap(double &a, double &b)
{
    double tmp = a;
    a = b;
    b = tmp;
}

void basicFunction()
{
    double a = -1.2, b = 2.6;
    double c = 123, d = 456;
    qInfo() << "abs(a)" << ":" << qAbs(a);
    qInfo() << "max(a,b)" << ":" << qMax(a, b);
    qInfo() << "round(a)" << ":" << qRound(a);
    qSwap(a, b);
    qInfo() << "a and b is:" << a << " " << b;

    mySwap(c, d);
    qInfo() << "c and d is:" << c << " " << d;

}

void qtMapIterator()
{
    QMap<QString, QString> map;
    map.insert("beijing", "111");
    map.insert("shanghai", "222");
    map.insert("guangzhou", "333");

    QMapIterator<QString, QString> iter(map);
    for(;iter.hasNext();) {
        qInfo() << " " << iter.peekNext().key() << ":" << iter.peekNext().value();
        iter.next();
    }

    // modify
    QMutableMapIterator<QString, QString> mi(map);
    if (mi.findNext("111")) {
        mi.setValue("010");
    }
    QMapIterator<QString, QString> iter2(map);
    for(;iter2.hasNext();) {
        qInfo() << " " << iter2.peekNext().key() << ":" << iter2.peekNext().value();
        iter2.next();
    }

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
