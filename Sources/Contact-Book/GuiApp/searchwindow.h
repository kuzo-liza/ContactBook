#ifndef SEARCHWINDOW_H
#define SEARCHWINDOW_H

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
#include "contactwindow.h"

namespace Ui {
class SearchWindow;
}

class SearchWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchWindow(QWidget *parent = 0, ContactBook *core1 = 0);
    ~SearchWindow();

private:
    Ui::SearchWindow *ui;
    QLabel *label;
    QLineEdit *line;
    QPushButton *nameButton;
    QPushButton *surnameButton;
    QPushButton *exitButton;
    QVBoxLayout *layout1;
    QVBoxLayout *layout2;
    QHBoxLayout *mainLayout;
    QIcon *icon;
    QWidget *centralWidget;
    ContactBook *core;

private slots:
    void searchByName();
    void searchBySurname();
};

#endif // SEARCHWINDOW_H
