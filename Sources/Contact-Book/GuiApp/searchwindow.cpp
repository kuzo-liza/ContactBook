#include "searchwindow.h"
#include "ui_searchwindow.h"

SearchWindow::SearchWindow(QWidget *parent, ContactBook *core1) :
    QMainWindow(parent),
    ui(new Ui::SearchWindow)
{
    ui->setupUi(this);
    core = core1;
    this->setFixedSize(500,300);
    this->setWindowTitle("Search for contact");

    icon = new QIcon(":/resourses/images for GUI/icon.png");
    this->setWindowIcon(*icon);

    label = new QLabel("Input name or surname");
    line = new QLineEdit;
    line->setFixedSize(200,30);

    nameButton = new QPushButton("Search by name");
    nameButton->setFixedSize(150,30);
    QObject::connect(nameButton, SIGNAL(clicked(bool)), this, SLOT(searchByName()));

    surnameButton = new QPushButton("Search by surname");
    surnameButton->setFixedSize(150,30);

    exitButton = new QPushButton ("Exit");
    QObject::connect(exitButton, SIGNAL(clicked(bool)), this, SLOT(close()));
    exitButton->setFixedSize(150,30);

    layout1 = new QVBoxLayout;
    layout2 = new QVBoxLayout;
    mainLayout = new QHBoxLayout;

    layout1->addWidget(label);
    layout1->addWidget(line);
    layout1->addSpacing(125);

    layout2->addWidget(nameButton);
    layout2->addWidget(surnameButton);
    layout2->addWidget(exitButton);

    mainLayout->addLayout(layout1);
    mainLayout->addLayout(layout2);

    centralWidget = new QWidget;
    centralWidget->setLayout(mainLayout);
    this->setCentralWidget(centralWidget);

}

SearchWindow::~SearchWindow()
{
    delete ui;
}

void SearchWindow::searchByName()
{
    Contact contact = core->searchByName(line->text().toStdString());
    ContactWindow *window = new ContactWindow(0, &contact ,0);
    window->show();
}

void SearchWindow::searchBySurname()
{

}
