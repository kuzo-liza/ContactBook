#include "deletewindow.h"
#include "ui_deletewindow.h"

DeleteWindow::DeleteWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeleteWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Delete message");
    this->setFixedSize(220,100);
    icon = new QIcon(":/resourses/images for GUI/icon.png");
    this->setWindowIcon(*icon);

    label = new QLabel("The contact has been deleted");

    okButton = new QPushButton("Ok");
    okButton->setFixedSize(100,30);
    QObject::connect(okButton, SIGNAL(clicked(bool)), this, SLOT(close()));

    layout = new QVBoxLayout;

    layout->addWidget(label);
    layout->addSpacing(30);
    layout->addWidget(okButton);

    centralWidget = new QWidget;
    centralWidget->setLayout(layout);
    this->setCentralWidget(centralWidget);

}

DeleteWindow::~DeleteWindow()
{
    delete ui;
}
