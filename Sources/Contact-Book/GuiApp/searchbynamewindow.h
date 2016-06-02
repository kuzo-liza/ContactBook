#ifndef SEARCHBYNAMEWINDOW_H
#define SEARCHBYNAMEWINDOW_H

#include <QMainWindow>

namespace Ui {
class SearchByNameWindow;
}

class SearchByNameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchByNameWindow(QWidget *parent = 0);
    ~SearchByNameWindow();

private:
    Ui::SearchByNameWindow *ui;
};

#endif // SEARCHBYNAMEWINDOW_H
