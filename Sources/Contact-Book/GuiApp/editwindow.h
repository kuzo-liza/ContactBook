#ifndef EDITWINDOW_H
#define EDITWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QHBoxLayout>
#include <QApplication>
#include <QLabel>
#include <QDialog>
#include <QPushButton>
#include <QSlider>
#include <QVBoxLayout>
#include <QVector>
#include <QLineEdit>
#include "contact_book.h"
#include "mainwindow.h"

namespace Ui {
class EditWindow;
}

class EditWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditWindow(QWidget *parent = 0, int number1 = 0, ContactBook *core1 = 0, MainWindow *window1 = 0);
    ~EditWindow();

private:
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLineEdit *nameLine;
    QLineEdit *surnameLine;
    QLineEdit *numberLine;
    QVBoxLayout *layout1;
    QVBoxLayout *layout2;
    QVBoxLayout *layout3;
    QHBoxLayout *mainLayout;
    ContactBook *core;
    Contact *contact;
    int number;
    MainWindow *window;

    Ui::EditWindow *ui;
    QIcon *icon;
    QPushButton *nameButton;
    QPushButton *surnameButton;
    QPushButton *numberButton;
    QPushButton *exitButton;
    QVBoxLayout *layout;
    QWidget *centralWidget;

private slots:
    void saving();

};

#endif // EDITWINDOW_H
