#include <QApplication>
#include <QPushButton>
#include <QFont>
#include <QIcon>
#include "window.h"
#include <QProgressBar>
#include <QSlider>

int main2(int argc, char **argv)
{
    QApplication app (argc, argv);

    QPushButton parentButton("parrent button");
    QPushButton button("child button", &parentButton);
    button.setText("My text");
    button.setToolTip("A tooltip");

    QFont font("Courier");
    button.setFont(font);

    button.setIcon(QIcon::fromTheme("face-smile"));


    parentButton.show();
    return app.exec();
}

int main3(int argc, char **argv)
{
    QApplication app(argc, argv);
    QWidget window;
    window.setFixedSize(200, 100);

    QPushButton *button = new QPushButton("hello world", &window);
    button->setGeometry(10, 10, 80, 30);

    window.show();

    return app.exec();
}

int main(int argc, char **argv)
{
  QApplication app(argc, argv);
  Window window;
  window.show();
  return app.exec();
}

int main5(int argc, char **argv)
{
    QApplication app(argc, argv);
    QWidget *window = new QWidget();
    window->setFixedSize(200, 80);

    QProgressBar *progressBar = new QProgressBar(window);
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setGeometry(10, 10, 180, 30);

    QSlider *slider = new QSlider(window);
    slider->setOrientation(Qt::Horizontal);
    slider->setRange(0,100);
    slider->setValue(0);
    slider->setGeometry(10, 40, 180, 30);

    window->show();

    QObject::connect(slider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));

    return app.exec();
}




