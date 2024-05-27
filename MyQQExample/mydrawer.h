#ifndef MYDRAWER_H
#define MYDRAWER_H

#include <QToolBox>
#include <QToolButton>

class MyDrawer : public QToolBox
{
    Q_OBJECT
public:
    MyDrawer(QWidget *parent = 0, Qt::WindowFlags f = 0);
private:

};

#endif // MYDRAWER_H
