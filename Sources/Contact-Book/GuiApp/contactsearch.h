#ifndef CONTACTSEARCH_H
#define CONTACTSEARCH_H

#include <QMainWindow>
#include ""

namespace Ui {
class ContactSearch;
}

class ContactSearch : public QMainWindow
{
    Q_OBJECT

public:
    explicit ContactSearch(QWidget *parent = 0);
    ~ContactSearch();

private:
    Ui::ContactSearch *ui;
};

#endif // CONTACTSEARCH_H
