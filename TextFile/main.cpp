#include <QCoreApplication>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <QDataStream>
#include <QDate>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QFile file("textfile.txt");
    if (file.open(QIODevice::ReadOnly))
    {
        char buffer[2048];

        qint64 line = file.readLine(buffer, sizeof(buffer));
        if (line != -1)
        {
            qInfo() << buffer;
        }
    }

    QFile data("data.txt");
    if (data.open(QIODevice::WriteOnly|QFile::Truncate))
    {
        QTextStream out(&data);
        out << QObject::tr("score:   ") << qSetFieldWidth(10) << left << 90 << endl;
        out << QObject::tr("name:   ") << qSetFieldWidth(10) << left << QObject::tr("zhangsanxxxx") << endl;
    }

    QFile binFile("binary.dat");
    binFile.open(QIODevice::WriteOnly|QIODevice::Truncate);
    QDataStream out(&binFile);
    out << QString(QObject::tr("Chris:"));
    out << QDate::fromString("2024/04/28", "yyyy/MM/dd");
    out << 19;
    binFile.close();

    binFile.setFileName("binary.dat");
    if (!binFile.open(QIODevice::ReadOnly))
    {
        qDebug() << "error!";
        return -1;
    }
    QDataStream in(&binFile);
    QString name;
    QDate date;
    qint32 age;
    in >> name >> date >> age;
    qInfo() << name << date << age;
    binFile.close();




    return a.exec();
}
