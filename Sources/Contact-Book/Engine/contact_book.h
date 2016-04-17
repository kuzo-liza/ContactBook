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

    int showTheBook();
    int checkNumberOfContacts();

    void deleteContact(int num);
    void searchByName();
    void createContact();
    void fillInTheBook();
    void sortContacts();

};

#endif // CONTACT_BOOK_H
