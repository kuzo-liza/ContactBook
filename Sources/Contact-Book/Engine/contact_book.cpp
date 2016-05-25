#include "contact_book.h"

ContactBook::ContactBook()
{
    sizeOfBook = 0;
    checkNumberOfContacts();
    contactBook.resize(sizeOfBook);
    fillInTheBook();
}

void ContactBook::searchByName(string name)
{

    for (int i = 1; i < contactBook.size(); i++)
    {
        if (contactBook[i].name == name)
        {
            cout << name << " ";
            cout << contactBook[i].surname << " ";
            cout << contactBook[i].number << endl;
        }
        // else cout << "Wrong name. Try again" << endl;
    }
}

void ContactBook::searchBySurname(string surname)
{

    for (int i = 1; i < contactBook.size(); i++)
    {
        if (contactBook[i].surname == surname)
        {
            cout << contactBook[i].name << " ";
            cout << surname << " ";
            cout << contactBook[i].number << endl;
        }
        // else cout << "Wrong surname. Try again" << endl;
    }
}

void ContactBook::createContact(string name, string surname, string number)
{
    Contact newContact;
    newContact.setName(name);
    newContact.setSurname(surname);
    newContact.setNumber(number);

    contactBook.push_back(newContact);
    sizeOfBook++;
}

void ContactBook::deleteContact(int num)
{
    contactBook.erase(contactBook.begin() + num);
    sizeOfBook--;
}

int ContactBook::checkNumberOfContacts()
{
    string line;
    ifstream book ("contactbook.txt");
    if (book.is_open())
    {
        while (! book.eof() )
        {
            getline (book,line);
            sizeOfBook++;
        }
        sizeOfBook++;
        book.close();
    }

    return sizeOfBook;
}

void ContactBook::fillInTheBook()
{
    fstream file("contactbook.txt");

    for (int i = 1; i < sizeOfBook; i++)
    {
        file >> contactBook[i].name;
        file >> contactBook[i].surname;
        file >> contactBook[i].number;
    }
}

bool ContactBook::compareByName(const Contact& contact1, const Contact& contact2)
{
    if (contact1.name == contact2.name)
    {
        return contact1.surname < contact2.surname;
    }
    return contact1.name < contact2.name;
}

void ContactBook::sortByName()
{
    //sort(contactBook.begin(), contactBook.end(), compareByName);
}

