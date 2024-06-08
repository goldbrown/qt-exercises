#include "emptyclazz.h"

#include <QApplication>
#include <QTreeView>
#include <QListView>
#include <QTableView>
#include <QAbstractItemModel>
#include <QDirModel>
#include <QAbstractItemView>
#include <QItemSelectionModel>
#include <QSplitter>
#include <unistd.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDirModel model;
    QTreeView tree;
    QListView list;
    QTableView table;
    tree.setModel(&model);
    list.setModel(&model);
    table.setModel(&model);
    tree.setSelectionMode(QAbstractItemView::MultiSelection);
    list.setSelectionMode(tree.selectionMode());
    table.setSelectionMode(tree.selectionMode());

    QObject::connect(&tree, SIGNAL(doubleClicked(QModelIndex)), &list, SLOT(setRootIndex(QModelIndex)));
    QObject::connect(&tree, SIGNAL(doubleClicked(QModelIndex)), &table, SLOT(setRootIndex(QModelIndex)));

    QSplitter *spliter = new QSplitter();
    spliter->addWidget(&tree);
    spliter->addWidget(&list);
    spliter->addWidget(&table);
    spliter->setWindowTitle(QObject::tr("Model/View"));
    spliter->show();
    usleep(1000 * 1000 * 5);
    return a.exec();
}
