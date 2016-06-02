#include "searchbynamewindow.h"
#include "ui_searchbynamewindow.h"

SearchByNameWindow::SearchByNameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchByNameWindow)
{
    ui->setupUi(this);
}

SearchByNameWindow::~SearchByNameWindow()
{
    delete ui;
}
