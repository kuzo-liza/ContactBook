#ifndef APPLICATION_H
#define APPLICATION_H
#include "contact_book.h"

class Application
{

public:

    Application();
    int check;
    ContactBook book;
    int num;

    void runApp();
    void mainMenu();
    void showBook();
    void searchByName();
    void newContact();
    void editContact(int num);
    void sortInGroups(int group);
};

#endif // APPLICATION_H
