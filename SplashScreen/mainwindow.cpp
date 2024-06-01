#include "mainwindow.h"
#include "QTextEdit"
#include "unistd.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("splash example"));
    QTextEdit *textEdit = new QTextEdit();
    textEdit->setText(tr("splash content"));
    setCentralWidget(textEdit);
    resize(600, 450);
    usleep(1000 * 1000 * 5); // seconds
}

MainWindow::~MainWindow()
{
}

