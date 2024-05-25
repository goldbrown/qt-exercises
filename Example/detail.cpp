#include "detail.h"

Detail::Detail(QWidget *parent) : QWidget(parent)
{
    Country = new QLabel(tr("Country:"));
    CountryComboBox = new QComboBox();
    CountryComboBox->addItem(tr("China"));
    CountryComboBox->addItem(tr("America"));
    CountryComboBox->addItem(tr("Russia"));

    Province = new QLabel(tr("Province:"));
    ProvinceComboBox = new QComboBox();
    ProvinceComboBox->addItem(tr("Beijing"));
    ProvinceComboBox->addItem(tr("Shanghai"));
    ProvinceComboBox->addItem(tr("Jiangsu"));

    City = new QLabel(tr("City:"));
    CityLineEdit = new QLineEdit();
    Introduction = new QLabel(tr("Introduction:"));
    IntroductionTextEdit = new QTextEdit();

    mainLayout = new QGridLayout(this);
    mainLayout->addWidget(Country, 0, 0);
    mainLayout->addWidget(CountryComboBox, 0, 1);

    mainLayout->addWidget(Province, 1, 0);
    mainLayout->addWidget(ProvinceComboBox, 1, 1);

    mainLayout->addWidget(City, 2, 0);
    mainLayout->addWidget(CityLineEdit, 2, 1);

    mainLayout->addWidget(Introduction, 3, 0);
    mainLayout->addWidget(IntroductionTextEdit, 3, 1);


    mainLayout->setMargin(5);
    mainLayout->setSpacing(5);
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);
}
