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

    for (int i = 0; i < contactBook.size(); i++)
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
    ifstream book ("contact.txt");

    if (book.is_open())
    {
        while (! book.eof() )
        {
            getline (book,line);
            sizeOfBook++;
        }

        book.close();
    }

    return sizeOfBook;
}

void ContactBook::fillInTheBook()
{
    fstream file("contact.txt");

    for (int i = 0; i < sizeOfBook; i++)
    {
        file >> contactBook[i].name;
        file >> contactBook[i].surname;
        file >> contactBook[i].number;
    }
}


//void ContactBook::sortContacts()
//{
//sort(contactBook.begin(), contactBook.end());
//}
