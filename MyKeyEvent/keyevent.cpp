#include "keyevent.h"
#include <QPainter>
#include <QDebug>

KeyEvent::KeyEvent(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle(tr("keyboard event"));
    setAutoFillBackground(true);
    QPalette palette = this->palette();
    palette.setColor(QPalette::Window, Qt::white);
    setPalette(palette);
    setMinimumSize(512, 256);
    setMaximumSize(512, 256);
    width = size().width();
    height = size().height();
    pix = new QPixmap(width, height);
    pix->fill(Qt::white);
    image.load(":image.png");
    startX = 10;
    startY = 10;
    step = 20;
    drawPix();
    resize(512, 256);


}

KeyEvent::~KeyEvent()
{
}

void KeyEvent::drawPix()
{
    pix->fill(Qt::white);
    QPainter *painter = new QPainter();
    QPen pen(Qt::DotLine);
    for(int i = step; i < width; i += step)
    {
        painter->begin(pix);
        painter->setPen(pen);
        painter->drawLine(QPoint(i, 0), QPoint(i, height));
        painter->end();
    }

    for (int j = step; j < height; j += step)
    {
        painter->begin(pix);
        painter->setPen(pen);
        painter->drawLine(QPoint(0, j), QPoint(width, j));
        painter->end();
    }
    painter->begin(pix);
    painter->drawImage(QPoint(startX, startY), image);
    painter->end();

}

void KeyEvent::keyPressEvent(QKeyEvent *event)
{
    qInfo() << "output is:" << event->modifiers() << ",key is " << event->key();

    if ((event->modifiers() & Qt::ControlModifier) > 0)
    {
        if (event->key()== Qt::Key_Left)
        {
            int tmp = startX - 1;
            startX = tmp < 0 ? startX : tmp;

        }
        else if (event->key() == Qt::Key_Right)
        {
            int tmp = startX + 1 + image.width();
            startX = tmp > width ? startX : startX + 1;
        }
        else if (event->key() == Qt::Key_Up)
        {
            int tmp = startY - 1;
            startY = tmp < 0 ? startY: tmp;
        }
        else if (event->key() == Qt::Key_Down)
        {
            int tmp = startY + 1 + image.height();
            startX = tmp > height ? startY : startY + 1;
        }

    }
    else {
        startX = startX - startX % step;
        startY = startY - startY % step;
        if (event->key()== Qt::Key_Left)
        {
            int tmp = startX - step;
            startX = tmp < 0 ? startX : tmp;
        }
        else if (event->key() == Qt::Key_Right)
        {
            int tmp = startX + step + image.width();
            startX = tmp > width ? startX : startX + step;
        }
        else if (event->key() == Qt::Key_Up)
        {
            int tmp = startY - step;
            startY = tmp < 0 ? startY: tmp;
        }
        else if (event->key() == Qt::Key_Down)
        {
            int tmp = startY + step + image.height();
            startY = tmp > height ? startY : startY + step;
        }
        else if (event->key() == Qt::Key_Home)
        {
            startX = 0;
            startY = 0;
        }
        else if (event->key() == Qt::Key_End)
        {
            startX = width - image.width();
            startY = height - image.height();
        }

    }
    drawPix();
    update();

}

void KeyEvent::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.drawPixmap(QPoint(0,0), *pix);
    painter.end();


}

