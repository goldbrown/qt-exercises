#ifndef DETAIL_H
#define DETAIL_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QComboBox>
#include <QGridLayout>

class Detail : public QWidget
{
public:
    explicit Detail(QWidget *parent = nullptr);
private:
    QLabel *Country;
    QComboBox *CountryComboBox;
    QLabel *Province;
    QComboBox *ProvinceComboBox;
    QLabel *City;
    QLineEdit *CityLineEdit;
    QLabel *Introduction;
    QTextEdit *IntroductionTextEdit;

    QGridLayout *mainLayout;
signals:

};

#endif // DETAIL_H
