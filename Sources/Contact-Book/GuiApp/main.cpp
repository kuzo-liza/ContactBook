#include "mainwindow.h"
#include <QApplication>
//#include <QLabel>
#include <QPushButton>
#include <QSlider>
#include <QSpinBox>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
//    MainWindow w;
//    w.show();

    QPushButton *button = new QPushButton ("exit");
    button->show();

    QObject::connect(button, SIGNAL(clicked(bool)), &app, SLOT(quit()));

    QSpinBox *counter = new QSpinBox;
    QSlider *slider = new QSlider (Qt::Horizontal);

    counter->setMaximum(100);
    slider->setMaximum(100);

    QObject::connect(counter, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)), counter, SLOT(setValue(int)));

    QWidget *window = new QWidget;
    QHBoxLayout *layout = new QHBoxLayout;

    layout->addWidget(counter);
    layout->addWidget(slider);
    layout->addWidget(button);

    window->setLayout(layout);
    window->show();

//    QLabel label("Contact Book");
//    label.show();

    return app.exec();
}
