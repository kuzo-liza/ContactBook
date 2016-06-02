#include "editsurnamewindow.h"
#include "ui_editsurnamewindow.h"

EditSurnameWindow::EditSurnameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditSurnameWindow)
{
    ui->setupUi(this);
}

EditSurnameWindow::~EditSurnameWindow()
{
    delete ui;
}
