#include "content.h"

#include <QApplication>
#include <QTextCodec>
#include <QListWidget>
#include <QSplitter>
#include <QFont>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font("AR PL KaitiM GB", 12);
    a.setFont(font);

    QSplitter *splitterMain = new QSplitter(Qt::Horizontal, 0);
    QListWidget *list = new QListWidget(splitterMain);
    list->insertItem(0, QObject::tr("basic info"));
    list->insertItem(1, QObject::tr("contact"));
    list->insertItem(2, QObject::tr("detail"));

    Content *content = new Content(splitterMain);

    // connect
    QObject::connect(list, SIGNAL(currentRowChanged(int)), content->stack, SLOT(setCurrentIndex(int)));
    splitterMain->setWindowTitle(QObject::tr("amend user info"));
    splitterMain->setMinimumSize(splitterMain->minimumSize());
    splitterMain->setMaximumSize(splitterMain->maximumSize());

    splitterMain->show();
    return a.exec();
}
