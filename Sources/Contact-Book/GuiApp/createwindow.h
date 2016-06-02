#ifndef CREATEWINDOW_H
#define CREATEWINDOW_H

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


namespace Ui {
class CreateWindow;
}

class CreateWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateWindow(QWidget *parent = 0, ContactBook *core1 = 0);
    ~CreateWindow();
    QLineEdit *line1;
    QLineEdit *line2;
    QLineEdit *line3;

private:
    Ui::CreateWindow *ui;
    QIcon *icon;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;

    QPushButton *okButton;
    QPushButton *exitButton;
    QVBoxLayout *layout1;
    QVBoxLayout *layout2;
    QHBoxLayout *mainLayout;
    QWidget *centralWidget;
    ContactBook *core;
signals:
    void okPressed();


private slots:
void createContact();
};

#endif // CREATEWINDOW_H
