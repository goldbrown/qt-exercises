#include "window.h"
#include <QPushButton>
#include <QApplication>

Window::Window(QWidget *parent) : QWidget(parent)
{
    setFixedSize(200, 100);
    m_button = new QPushButton("hello world", this);
    m_button->setGeometry(10, 10, 150, 50);
    m_button->setCheckable(true);

    connect(m_button, SIGNAL(clicked(bool)), this, SLOT(slotButtonClicked(bool)));
    connect(this, SIGNAL(counterReached()), QApplication::instance(), SLOT(quit()));
}

void Window::slotButtonClicked(bool checked)
{
    if (checked)  {
        m_button->setText("Checked");
    } else {
        m_button->setText("Hello World");
    }
    m_counter++;
    if (m_counter == 10) {
        emit counterReached();
    }

}
