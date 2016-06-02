#include "createwindow.h"
#include "ui_createwindow.h"

CreateWindow::CreateWindow(QWidget *parent, ContactBook *core1) :
    QMainWindow(parent),
    ui(new Ui::CreateWindow)
{
    core = core1;
    ui->setupUi(this);
    this->setFixedSize(400,200);
    this->setWindowTitle("Create contact");

    icon = new QIcon(":/resourses/images for GUI/icon.png");
    this->setWindowIcon(*icon);

    label1 = new QLabel("Input name");
    label2 = new QLabel("Input surname");
    label3 = new QLabel("Input number");

    line1 = new QLineEdit;
    line2 = new QLineEdit;
    line3 = new QLineEdit;

    okButton = new QPushButton("Ok");
    okButton->setFixedSize(100,35);
    QObject::connect(okButton, SIGNAL(clicked(bool)), this, SLOT(createContact()));
    QObject::connect(okButton, SIGNAL(clicked(bool)), this, SLOT(close()));

//    exitButton = new QPushButton("Exit");
//    exitButton->setFixedSize(100,35);
//    QObject::connect(exitButton, SIGNAL(clicked(bool)), this, SLOT(close()));

    layout1 = new QVBoxLayout;
    layout2 = new QVBoxLayout;
    mainLayout = new QHBoxLayout;

    layout1->addWidget(label1);
    layout1->addWidget(line1);

    layout1->addWidget(label2);
    layout1->addWidget(line2);

    layout1->addWidget(label3);
    layout1->addWidget(line3);

    layout2->addWidget(okButton);
    //layout2->addWidget(exitButton);

    mainLayout->addLayout(layout1);
    mainLayout->addSpacing(20);
    mainLayout->addLayout(layout2);

    centralWidget = new QWidget;
    centralWidget->setLayout(mainLayout);
    this->setCentralWidget(centralWidget);
}

CreateWindow::~CreateWindow()
{
    delete ui;
}

void CreateWindow::createContact()
{
    core->createContact(line1->text().toStdString(), line2->text().toStdString(), line3->text().toStdString());
    emit okPressed();
}
