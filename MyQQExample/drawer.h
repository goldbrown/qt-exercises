#ifndef DRAWER_H
#define DRAWER_H

#include <QDialog>

class Drawer : public QDialog
{
    Q_OBJECT

public:
    Drawer(QWidget *parent = nullptr);
    ~Drawer();
};
#endif // DRAWER_H
