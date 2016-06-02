#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
#include <stdlib.h>
#include <string>
#include "contact_book.h"
#include "createwindow.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    ContactBook *core;
    QVector<QPushButton*> buttons;
    QVBoxLayout *bookLayout1;

private:
    Ui::MainWindow *ui;
    QPushButton *exitButton;
    QPushButton *searchButton;
    QPushButton *createButton;
    QHBoxLayout *mainLayout;
    QVBoxLayout *buttonsLayout;
    QVBoxLayout *bookLayout;   
    QWidget *centralWidget;
    QIcon *icon;
    CreateWindow *window;
public slots:

    void refreshBook();
    void refreshBook1();

private slots:
    void refreshButtons();
    void createContact();
    void contactMenu();
    void searchMenu();
    void saveBook();

};

#endif // MAINWINDOW_H
