#ifndef DELETEWINDOW_H
#define DELETEWINDOW_H

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

namespace Ui {
class DeleteWindow;
}

class DeleteWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeleteWindow(QWidget *parent = 0);
    ~DeleteWindow();

private:
    Ui::DeleteWindow *ui;
    QIcon *icon;
    QLabel *label;
    QPushButton *okButton;
    QVBoxLayout *layout;
    QWidget *centralWidget;

};

#endif // DELETEWINDOW_H
