#include "searchbysurnamewindow.h"
#include "ui_searchbysurnamewindow.h"

SearchBySurnameWindow::SearchBySurnameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchBySurnameWindow)
{
    ui->setupUi(this);
}

SearchBySurnameWindow::~SearchBySurnameWindow()
{
    delete ui;
}
