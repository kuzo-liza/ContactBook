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

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QPushButton *exitButton;
    QPushButton *searchButton;
    QPushButton *createButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QHBoxLayout *mainLayout;
    QVBoxLayout *buttonsLayout;
    QVBoxLayout *bookLayout;
    QWidget *centralWidget;

};

#endif // MAINWINDOW_H
