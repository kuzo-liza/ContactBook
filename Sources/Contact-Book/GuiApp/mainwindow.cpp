#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "createwindow.h"
#include "contactwindow.h"
#include "searchwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setFixedSize(991,628);
    this->setWindowTitle("Contact Book");

    core = new ContactBook;

    icon = new QIcon(":/resourses/images for GUI/icon.png");
    this->setWindowIcon(*icon);

    QPixmap background(":/resourses/images for GUI/background.jpg");
    QPalette qPalette;
    qPalette.setBrush(this->backgroundRole(),QBrush(background));
    this->setPalette(qPalette);


    centralWidget = new QWidget;

    searchButton = new QPushButton ("Search for contact");
    searchButton->setFixedSize(200,50);
    QObject::connect(searchButton, SIGNAL(clicked(bool)), this, SLOT(searchMenu()));

    createButton = new QPushButton ("Create new contact");
    createButton->setFixedSize(200,50);
    QObject::connect(createButton, SIGNAL(clicked(bool)), this, SLOT(createContact()));

    exitButton = new QPushButton ("Exit");
    exitButton->setFixedSize(200,50);
    QObject::connect(exitButton, SIGNAL(clicked(bool)), this, SLOT(saveBook()));
    QObject::connect(exitButton, SIGNAL(clicked(bool)), this, SLOT(close()));


    buttonsLayout = new QVBoxLayout;
    bookLayout = new QVBoxLayout;
    mainLayout = new QHBoxLayout;
    bookLayout1 = new QVBoxLayout;
    bookLayout1->setSpacing(0);

    for (int i = 0; i < core->checkNumberOfContacts(); i++)
    {
        QPushButton *button = new QPushButton;
        std::string string;
        string = core->contactBook[i].getName() + " " + core->contactBook[i].getSurname();
        button->setText(string.c_str());
        buttons.push_back(button);
        bookLayout1->addWidget(buttons[i]);
        buttons[i]->setProperty("number", i);
        QObject::connect(buttons[i], SIGNAL(clicked(bool)), this, SLOT(contactMenu()));
    }

//    QPixmap background1(":/resourses/images for GUI/scrollarea.jpg");
//        QPalette qPalette1;
//        qPalette.setBrush(ui->scrollArea->backgroundRole(),QBrush(background1));
//    ui->scrollArea->setStyleSheet(" background-image: url(:/resourses/images for GUI/scrollarea.jpg);");
//    for (int i = 1; i < 50; i++)
//    {
//        buttons[i-1]->setStyleSheet( " background-color: #B87333");
//    }

    QWidget *widget = new QWidget;
    widget->setLayout(bookLayout1);
    ui->scrollArea->setWidget(widget);
    ui->scrollArea->setFixedSize(370,535);

    bookLayout->addWidget(ui->scrollArea);

    buttonsLayout->addSpacing(30);
    buttonsLayout->addWidget(searchButton);
    buttonsLayout->addWidget(createButton);
    buttonsLayout->addStretch(1);
    buttonsLayout->addWidget(exitButton);
    buttonsLayout->addSpacing(30);

    mainLayout->addSpacing(70);
    mainLayout->addLayout(bookLayout);
    mainLayout->addStretch(1);
    mainLayout->addLayout(buttonsLayout);
    mainLayout->addSpacing(150);

    centralWidget->setLayout(mainLayout);

    this->setCentralWidget(centralWidget);

    window = new CreateWindow(0, core);
    QObject::connect(window, SIGNAL(okPressed()), this, SLOT(refreshButtons()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createContact()
{
    window->line1->clear();
    window->line2->clear();
    window->line3->clear();

    window->show();
}

void MainWindow::contactMenu()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QVariant index = button->property("number");
    int number = index.toInt();
    ContactWindow *window = new ContactWindow(0, number, core, this);
    window->show();
}

void MainWindow::searchMenu()
{
    SearchWindow *window = new SearchWindow;
    window->show();
}

void MainWindow::refreshButtons()
{
    for (int i = 0; i < core->checkNumberOfContacts()-1; i++)
    {
        bookLayout1->removeWidget(buttons[i]);
    }
    buttons.clear();
    for (int i = 0; i < core->checkNumberOfContacts(); i++)
    {
        QPushButton *button = new QPushButton;
        std::string string;
        string = core->contactBook[i].getName() + " " + core->contactBook[i].getSurname();
        button->setText(string.c_str());
        buttons.push_back(button);
        bookLayout1->addWidget(buttons[i]);
        buttons[i]->setProperty("number", i);
        QObject::connect(buttons[i], SIGNAL(clicked(bool)), this, SLOT(contactMenu()));
    }
}

void MainWindow::refreshBook()
{
    for (int i = 0; i < core->checkNumberOfContacts()+1; i++)
    {
        bookLayout1->removeWidget(buttons[i]);
    }
    buttons.clear();
    for (int i = 0; i < core->checkNumberOfContacts(); i++)
    {
        QPushButton *button = new QPushButton;
        std::string string;
        string = core->contactBook[i].getName() + " " + core->contactBook[i].getSurname();
        button->setText(string.c_str());
        buttons.push_back(button);
        bookLayout1->addWidget(buttons[i]);
        buttons[i]->setProperty("number", i);
        QObject::connect(buttons[i], SIGNAL(clicked(bool)), this, SLOT(contactMenu()));
    }
}

void MainWindow::refreshBook1()
{
    for (int i = 0; i < core->checkNumberOfContacts(); i++)
    {
        bookLayout1->removeWidget(buttons[i]);
    }
    buttons.clear();
    for (int i = 0; i < core->checkNumberOfContacts(); i++)
    {
        QPushButton *button = new QPushButton;
        std::string string;
        string = core->contactBook[i].getName() + " " + core->contactBook[i].getSurname();
        button->setText(string.c_str());
        buttons.push_back(button);
        bookLayout1->addWidget(buttons[i]);
        buttons[i]->setProperty("number", i);
        QObject::connect(buttons[i], SIGNAL(clicked(bool)), this, SLOT(contactMenu()));
    }
}

void MainWindow::saveBook()
{
    core->saveBook();
}
