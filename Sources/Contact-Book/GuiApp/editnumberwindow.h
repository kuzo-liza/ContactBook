#ifndef EDITNUMBERWINDOW_H
#define EDITNUMBERWINDOW_H

#include <QMainWindow>

namespace Ui {
class EditNumberWindow;
}

class EditNumberWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditNumberWindow(QWidget *parent = 0);
    ~EditNumberWindow();

private:
    Ui::EditNumberWindow *ui;
};

#endif // EDITNUMBERWINDOW_H
