#ifndef CONTACT_BOOK_H
#define CONTACT_BOOK_H

#include "contact.h"

class ContactBook
{

public:

    int sizeOfBook;
    ContactBook();
    vector <Contact> contactBook;

    int checkSizeOfFile();
    void deleteContact(int num);
    Contact searchByName(string name);
    Contact searchBySurname(string surname);
    void createContact(string name, string surname, string number);
    void fillInTheBook();
    void sortContacts();
    bool compareByName(const Contact& contact1, const Contact& contact2);
    void sortByName();
    int checkNumberOfContacts();
    void saveBook();
};

#endif // CONTACT_BOOK_H
