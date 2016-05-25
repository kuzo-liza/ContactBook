#ifndef CONTACT_BOOK_H
#define CONTACT_BOOK_H

#include "contact_book_global.h"
#include "contact.h"

class ContactBook
{

public:

    int sizeOfBook;
    ContactBook();
    vector <Contact> contactBook;

    int checkNumberOfContacts();
    void deleteContact(int num);
    void searchByName(string name);
    void searchBySurname(string surname);
    void createContact(string name, string surname, string number);
    void fillInTheBook();
    void sortContacts();
    bool compareByName(const Contact& contact1, const Contact& contact2);
    void sortByName();
};

#endif // CONTACT_BOOK_H
