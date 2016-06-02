#include "editnumberwindow.h"
#include "ui_editnumberwindow.h"

EditNumberWindow::EditNumberWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditNumberWindow)
{
    ui->setupUi(this);
}

EditNumberWindow::~EditNumberWindow()
{
    delete ui;
}
