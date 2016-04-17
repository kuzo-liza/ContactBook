#ifndef CONTACT_BOOK_H
#define CONTACT_BOOK_H

#include "contact_book_global.h"
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include "contact.h"
#include <algorithm>

class ContactBook
{

public:
    ContactBook();
    int sizeOfBook = 0;
    vector <Contact> contactBook;
    int showTheBook();
    void searchByName();
    int createContact(int sizeOfBook);
    void deleteContact();
    int checkNumberOfContacts();
    void fillInTheBook();
    void sortContacts();
};

#endif // CONTACT_BOOK_H
