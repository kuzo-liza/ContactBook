#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setFixedSize(991,628);
    this->setWindowTitle("The best contact book in the world");

//    QIcon *icon = new QIcon(":/resourses/images for GUI/icon.png");
//    this->setWindowIcon(icon);

    QPixmap background(":/resourses/images for GUI/background.jpg");
    QPalette qPalette;
    qPalette.setBrush(this->backgroundRole(),QBrush(background));
    this->setPalette(qPalette);

    centralWidget = new QWidget;

    searchButton = new QPushButton ("search for contact");
    searchButton->setFixedSize(200,50);
//    QObject::connect();

    createButton = new QPushButton ("create new contact");
    createButton->setFixedSize(200,50);

//    QObject::connect();

    editButton = new QPushButton ("edit contact");
    editButton->setFixedSize(200,50);

//    QObject::connect();

    deleteButton = new QPushButton ("delete contact");
    deleteButton->setFixedSize(200,50);

//    QObject::connect();

    exitButton = new QPushButton ("exit");
    exitButton->setFixedSize(200,50);

    QObject::connect(exitButton, SIGNAL(clicked(bool)), this, SLOT(close()));

//    QSlider *slider = new QSlider (Qt::Horizontal);

    buttonsLayout = new QVBoxLayout;

//    layout->addWidget(slider);

    bookLayout = new QVBoxLayout;
    mainLayout = new QHBoxLayout;

    buttonsLayout->addSpacing(30);
    buttonsLayout->addWidget(searchButton);
    buttonsLayout->addWidget(createButton);
    buttonsLayout->addWidget(editButton);
    buttonsLayout->addWidget(deleteButton);
    buttonsLayout->addStretch(1);
    buttonsLayout->addWidget(exitButton);
    buttonsLayout->addSpacing(30);

    mainLayout->addLayout(bookLayout);
    mainLayout->addStretch(1);
    mainLayout->addLayout(buttonsLayout);
    mainLayout->addSpacing(150);

    centralWidget->setLayout(mainLayout);

    this->setCentralWidget(centralWidget);

}

MainWindow::~MainWindow()
{
    delete ui;
}
