#include "dialog0526.h"

#include <QApplication>
#include <QTextCodec>
#include "msgboxdialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());

//    Dialog0526 w;
//    w.show();
    MsgBoxDialog m;
    m.show();
    return a.exec();
}
