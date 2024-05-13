#include "qttool.h"

#include <QApplication>
#include <QString>
#include <QPushButton>
#include <QDebug>

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



    return 0;
}
