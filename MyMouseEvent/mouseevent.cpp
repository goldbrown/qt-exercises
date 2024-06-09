#include "mouseevent.h"
#include <QMessageBox>

MouseEvent::MouseEvent(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("mouse event"));
    statusLabel = new QLabel();
    statusLabel->setText(tr("current position:"));
    statusLabel->setFixedWidth(100);

    mousePosLabel = new QLabel();
    mousePosLabel->setText(tr(""));
    mousePosLabel->setFixedWidth(100);
    statusBar()->addPermanentWidget(statusLabel);
    statusBar()->addPermanentWidget(mousePosLabel);
    this->setMouseTracking(true);
    resize(400, 200);
}

MouseEvent::~MouseEvent()
{
}

void MouseEvent::mousePressEvent(QMouseEvent *e)
{
    QString str = "(" + QString::number(e->x()) + "," + QString::number(e->y()) + ")";
    if (e->button() == Qt::LeftButton)
    {
        statusBar()->showMessage(tr("left button:") + str);
    }
    else if (e->button() == Qt::RightButton)
    {
        statusBar()->showMessage(tr("right button:") + str);
    }
    else if (e->button() == Qt::MidButton)
    {
        statusBar()->showMessage(tr("middle button:") + str);
    }
}

void MouseEvent::mouseMoveEvent(QMouseEvent *e)
{
    mousePosLabel->setText("(" + QString::number(e->x()) + "," + QString::number(e->y()) + ")");
}

void MouseEvent::mouseReleaseEvent(QMouseEvent *e)
{
    QString str = "(" + QString::number(e->x()) + "," + QString::number(e->y()) + ")";
    statusBar()->showMessage("release at:" + str, 3000);
}

void MouseEvent::mouseDoubleClickEvent(QMouseEvent *e)
{
    QMessageBox::information(0, "double click event", "double click event");
}

