#ifndef QTTOOL_H
#define QTTOOL_H

#include <QMainWindow>

class QtTool : public QMainWindow
{
    Q_OBJECT

public:
    QtTool(QWidget *parent = nullptr);
    ~QtTool();
};
#endif // QTTOOL_H
