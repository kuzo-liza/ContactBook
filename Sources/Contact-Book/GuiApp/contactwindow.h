#ifndef CONTACTWINDOW_H
#define CONTACTWINDOW_H

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
#include "editwindow.h"
#include "deletewindow.h"
#include "contact_book.h"
#include "mainwindow.h"


namespace Ui {
class ContactWindow;
}

class ContactWindow : public QMainWindow
{
    Q_OBJECT

public:
    ContactWindow(QWidget *parent = 0, int number1 = 0, ContactBook *core1 = 0, MainWindow *window1 = 0);
    ~ContactWindow();
    ContactWindow(QWidget *parent = 0, Contact *contact1 = 0, MainWindow *window1 = 0);
private:
    Ui::ContactWindow *ui;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *nameLabel;
    QLabel *surnameLabel;
    QLabel *numberLabel;
    QVBoxLayout *layout1;
    QVBoxLayout *layout2;
    QVBoxLayout *layout3;
    QHBoxLayout *mainLayout;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QPushButton *exitButton;
    QWidget *centralWidget;
    QIcon *icon;
    ContactBook *core;
    Contact *contact;
    int number;
    MainWindow *window;
private slots:
    void editMenu();
    void deleteMessage();
    void deleteContact();
};

#endif // CONTACTWINDOW_H
