#include "dockwindows.h"
#include <QTextEdit>
#include <QDockWidget>

DockWindows::DockWindows(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(QObject::tr("DockWindows"));
    QTextEdit *te = new QTextEdit(this);
    te->setText(tr("Main Window"));
    te->setAlignment(Qt::AlignCenter);
    setCentralWidget(te);

    // dock window 1
    QDockWidget *dock = new QDockWidget(tr("Dock Window 1"), this);
    dock->setFeatures(QDockWidget::DockWidgetMovable);
    dock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    QTextEdit *te1 = new QTextEdit();
    te1->setText(tr("window1, this window can be moved between docks by user"));
    dock->setWidget(te1);
    addDockWidget(Qt::RightDockWidgetArea, dock);

    // dock window 2
    dock = new QDockWidget(tr("Dock Window2"), this);
    dock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);
    QTextEdit *te2 = new QTextEdit();
    te2->setText("window2, this window is closable and floatable");
    dock->setWidget(te2);
    addDockWidget(Qt::RightDockWidgetArea, dock);

    // dock window 3
    dock = new QDockWidget(tr("Dock Window3"), this);
    dock->setFeatures(QDockWidget::AllDockWidgetFeatures);
    QTextEdit *te3 = new QTextEdit();
    te3->setText("this window is movable, closable and floatable");
    dock->setWidget(te3);
    addDockWidget(Qt::RightDockWidgetArea, dock);




}

DockWindows::~DockWindows()
{
}

