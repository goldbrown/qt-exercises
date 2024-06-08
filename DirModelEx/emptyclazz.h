#ifndef EMPTYCLAZZ_H
#define EMPTYCLAZZ_H

#include <QDialog>

class EmptyClazz : public QDialog
{
    Q_OBJECT

public:
    EmptyClazz(QWidget *parent = nullptr);
    ~EmptyClazz();
};
#endif // EMPTYCLAZZ_H
