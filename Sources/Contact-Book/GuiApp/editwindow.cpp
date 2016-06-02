#include "editwindow.h"
#include "ui_editwindow.h"

EditWindow::EditWindow(QWidget *parent, int number1, ContactBook *core1, MainWindow *window1) :
    QMainWindow(parent),
    ui(new Ui::EditWindow)
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

    nameLine = new QLineEdit(core->contactBook[number].getName().c_str());
    surnameLine = new QLineEdit(core->contactBook[number].getSurname().c_str());
    numberLine = new QLineEdit(core->contactBook[number].getNumber().c_str());

    exitButton = new QPushButton ("Save changes");
    QObject::connect(exitButton, SIGNAL(clicked(bool)), this, SLOT(close()));
    QObject::connect(exitButton, SIGNAL(clicked(bool)), this, SLOT(saving()));

    layout1 = new QVBoxLayout;
    layout2 = new QVBoxLayout;
    layout3 = new QVBoxLayout;
    mainLayout = new QHBoxLayout;

    layout1->addWidget(label1);
    layout1->addWidget(label2);
    layout1->addWidget(label3);

    layout2->addWidget(nameLine);
    layout2->addWidget(surnameLine);
    layout2->addWidget(numberLine);

    layout3->addWidget(exitButton);

    mainLayout->addLayout(layout1);
    mainLayout->addLayout(layout2);
    mainLayout->addLayout(layout3);

    centralWidget = new QWidget;
    centralWidget->setLayout(mainLayout);
    this->setCentralWidget(centralWidget);


//    ui->setupUi(this);

//    this->setWindowTitle("Edit menu");
//    this->setFixedSize(195,250);
//    icon = new QIcon(":/resourses/images for GUI/icon.png");
//    this->setWindowIcon(*icon);

//    nameButton = new QPushButton("Change name");
//    nameButton->setFixedSize(175,30);
////    QObject::connect();

//    surnameButton = new QPushButton("Change surname");
//    surnameButton->setFixedSize(175,30);
////    QObject::connect();

//    numberButton = new QPushButton("Change number");
//    numberButton->setFixedSize(175,30);
////    QObject::connect();

//    exitButton = new QPushButton("Exit");
//    exitButton->setFixedSize(175,30);
//    QObject::connect(exitButton, SIGNAL(clicked(bool)), this, SLOT(close()));

//    layout = new QVBoxLayout;
//    layout->addSpacing(20);
//    layout->addWidget(nameButton);
//    layout->addWidget(surnameButton);
//    layout->addWidget(numberButton);
//    layout->addStretch(1);
//    layout->addWidget(exitButton);

//    centralWidget = new QWidget;
//    centralWidget->setLayout(layout);
//    this->setCentralWidget(centralWidget);
}

EditWindow::~EditWindow()
{
    delete ui;
}

void EditWindow::saving()
{
    core->contactBook[number].setName(nameLine->text().toStdString());
    core->contactBook[number].setSurname(surnameLine->text().toStdString());
    core->contactBook[number].setNumber(numberLine->text().toStdString());
    window->refreshBook1();
}
