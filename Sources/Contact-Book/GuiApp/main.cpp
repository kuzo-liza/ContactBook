#include "mainwindow.h"
#include <QApplication>
//#include <QLabel>
#include <QPushButton>
#include <QSlider>
#include <QSpinBox>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
//    MainWindow w;
//    w.show();

    QPushButton *button = new QPushButton ("exit");
    button->show();

    QObject::connect(button, SIGNAL(clicked(bool)), &app, SLOT(quit()));

//    QSpinBox *counter = new QSpinBox;
//    QSlider *slider = new QSlider (Qt::Horizontal);

//    counter->show();
//    slider->show();


//    QLabel label("Contact Book");
//    label.show();

    return app.exec();
}
