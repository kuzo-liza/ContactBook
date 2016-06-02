#include "contactwindow.h"
#include "ui_contactwindow.h"


ContactWindow::ContactWindow(QWidget *parent, int number1, ContactBook *core1, MainWindow *window1) :
    QMainWindow(parent),
    ui(new Ui::ContactWindow)
{
    ui->setupUi(this);
    core = core1;
    number = number1;
    window = window1;
    this->setWindowTitle("Contact menu");
    this->setFixedSize(400,180);
    icon = new QIcon(":/resourses/images for GUI/icon.png");
    this->setWindowIcon(*icon);

    label1 = new QLabel(" Name : ");
    label2 = new QLabel(" Surname : ");
    label3 = new QLabel(" Number : ");

    nameLabel = new QLabel(core->contactBook[number].getName().c_str());
    surnameLabel = new QLabel(core->contactBook[number].getSurname().c_str());
    numberLabel = new QLabel(core->contactBook[number].getNumber().c_str());

    editButton = new QPushButton ("Edit contact");
    QObject::connect(editButton, SIGNAL(clicked(bool)), this, SLOT(editMenu()));

    deleteButton = new QPushButton ("Delete contact");
    QObject::connect(deleteButton, SIGNAL(clicked(bool)), this, SLOT(deleteMessage()));
    QObject::connect(deleteButton, SIGNAL(clicked(bool)), this, SLOT(deleteContact()));

    exitButton = new QPushButton ("Exit");
    QObject::connect(exitButton, SIGNAL(clicked(bool)), this, SLOT(close()));

    layout1 = new QVBoxLayout;
    layout2 = new QVBoxLayout;
    layout3 = new QVBoxLayout;
    mainLayout = new QHBoxLayout;

    layout1->addWidget(label1);
    layout1->addWidget(label2);
    layout1->addWidget(label3);

    layout2->addWidget(nameLabel);
    layout2->addWidget(surnameLabel);
    layout2->addWidget(numberLabel);

    layout3->addWidget(editButton);
    layout3->addWidget(deleteButton);
    layout3->addWidget(exitButton);

    mainLayout->addLayout(layout1);
    mainLayout->addLayout(layout2);
    mainLayout->addLayout(layout3);

    centralWidget = new QWidget;
    centralWidget->setLayout(mainLayout);
    this->setCentralWidget(centralWidget);

}

ContactWindow::ContactWindow(QWidget *parent, Contact *contact1, MainWindow *window1):
    QMainWindow(parent),
    ui(new Ui::ContactWindow)
{
    ui->setupUi(this);
    window = window1;
    contact = contact1;
    this->setWindowTitle("Contact menu");
    this->setFixedSize(400,180);
    icon = new QIcon(":/resourses/images for GUI/icon.png");
    this->setWindowIcon(*icon);

    label1 = new QLabel(" Name : ");
    label2 = new QLabel(" Surname : ");
    label3 = new QLabel(" Number : ");

    nameLabel = new QLabel(contact->getName().c_str());
    surnameLabel = new QLabel(contact->getSurname().c_str());
    numberLabel = new QLabel(contact->getNumber().c_str());

    editButton = new QPushButton ("Edit contact");
    QObject::connect(editButton, SIGNAL(clicked(bool)), this, SLOT(editMenu()));

    deleteButton = new QPushButton ("Delete contact");
    QObject::connect(deleteButton, SIGNAL(clicked(bool)), this, SLOT(deleteMessage()));
    QObject::connect(deleteButton, SIGNAL(clicked(bool)), this, SLOT(deleteContact()));

    exitButton = new QPushButton ("Exit");
    QObject::connect(exitButton, SIGNAL(clicked(bool)), this, SLOT(close()));

    layout1 = new QVBoxLayout;
    layout2 = new QVBoxLayout;
    layout3 = new QVBoxLayout;
    mainLayout = new QHBoxLayout;

    layout1->addWidget(label1);
    layout1->addWidget(label2);
    layout1->addWidget(label3);

    layout2->addWidget(nameLabel);
    layout2->addWidget(surnameLabel);
    layout2->addWidget(numberLabel);

    layout3->addWidget(editButton);
    layout3->addWidget(deleteButton);
    layout3->addWidget(exitButton);

    mainLayout->addLayout(layout1);
    mainLayout->addLayout(layout2);
//    mainLayout->addLayout(layout3);

    centralWidget = new QWidget;
    centralWidget->setLayout(mainLayout);
    this->setCentralWidget(centralWidget);

}

ContactWindow::~ContactWindow()
{
    delete ui;
}

void ContactWindow::editMenu()
{
    EditWindow *window2 = new EditWindow(0, number, core, window);
    window2->show();
    this->close();
}

void ContactWindow::deleteMessage()
{
    DeleteWindow *window = new DeleteWindow;
    window->show();
}

void ContactWindow::deleteContact()
{
    core->deleteContact(number);
    window->refreshBook();
}
