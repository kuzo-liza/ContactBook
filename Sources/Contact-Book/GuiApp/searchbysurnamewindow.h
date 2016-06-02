#ifndef SEARCHBYSURNAMEWINDOW_H
#define SEARCHBYSURNAMEWINDOW_H

#include <QMainWindow>

namespace Ui {
class SearchBySurnameWindow;
}

class SearchBySurnameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchBySurnameWindow(QWidget *parent = 0);
    ~SearchBySurnameWindow();

private:
    Ui::SearchBySurnameWindow *ui;
};

#endif // SEARCHBYSURNAMEWINDOW_H
