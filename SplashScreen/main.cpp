#include "mainwindow.h"

#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>
#include <QDebug>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pic("/Users/goldbrown/SelfCode/qt-exercises/build-SplashScreen-Desktop_Qt_5_12_12_clang_64bit-Debug/Qt.png");
    qInfo() << "time1: " << QDateTime::currentDateTime();
    QSplashScreen splashScreen(pic);
    qInfo() << "time2: " << QDateTime::currentDateTime();
    splashScreen.show();
    qInfo() << "time3: " << QDateTime::currentDateTime();
    a.processEvents();


    MainWindow w;
    qInfo() << "time4: " << QDateTime::currentDateTime();
    w.show();
    splashScreen.finish(&w);

    return a.exec();
}
