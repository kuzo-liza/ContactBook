#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QDialog>
#include <QPushButton>
#include <QSlider>
#include <QSpinBox>
#include <QHBoxLayout>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);


    MainWindow *window = new MainWindow;
    window->show();


    return app.exec();
}
