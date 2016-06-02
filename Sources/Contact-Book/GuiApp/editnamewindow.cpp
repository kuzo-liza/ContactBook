#include "editnamewindow.h"
#include "ui_editnamewindow.h"

EditNameWindow::EditNameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditNameWindow)
{
    ui->setupUi(this);


//    this->setWindowTitle("Edit name");
//   // this->setFixedSize(220,100);
//    icon = new QIcon(":/resourses/images for GUI/icon.png");
//    this->setWindowIcon(*icon);

//    label = new QLabel("Input new name");

//    okButton = new QPushButton("Ok");
//   okButton->setFixedSize(100,30);
//    QObject::connect(okButton, SIGNAL(clicked(bool)), this, SLOT());
//    QObject::connect(okButton, SIGNAL(clicked(bool)), this, SLOT(close()));

//    line = new QLineEdit;

//    layout = new QHBoxLayout;
//    layout->addWidget(label);
//    layout->addWidget(line);
//    layout->addWidget(okButton);

//    centralWidget = new QWidget;
//    centralWidget->setLayout(layout);
//    this->setCentralWidget(centralWidget);
}

EditNameWindow::~EditNameWindow()
{
    delete ui;
}
