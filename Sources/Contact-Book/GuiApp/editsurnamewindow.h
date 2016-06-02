#ifndef EDITSURNAMEWINDOW_H
#define EDITSURNAMEWINDOW_H

#include <QMainWindow>

namespace Ui {
class EditSurnameWindow;
}

class EditSurnameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditSurnameWindow(QWidget *parent = 0);
    ~EditSurnameWindow();

private:
    Ui::EditSurnameWindow *ui;
};

#endif // EDITSURNAMEWINDOW_H
