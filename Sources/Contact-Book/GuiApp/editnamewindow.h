#ifndef EDITNAMEWINDOW_H
#define EDITNAMEWINDOW_H

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
class EditNameWindow;
}

class EditNameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditNameWindow(QWidget *parent = 0);
    ~EditNameWindow();

private:
    Ui::EditNameWindow *ui;
    QIcon *icon;
    QLabel label;
    QLineEdit line;
    QPushButton okButton;
    QHBoxLayout layout;
    QWidget *centralWidget;
};

#endif // EDITNAMEWINDOW_H
