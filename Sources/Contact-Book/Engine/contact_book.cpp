#include "contact_book.h"

ContactBook::ContactBook()
{
    sizeOfBook = 0;
    checkNumberOfContacts();
    contactBook.resize(sizeOfBook);
    fillInTheBook();
}

int ContactBook::showTheBook()
{

//    string line;
//    ifstream book ("contact.txt");
//    if (book.is_open())
//    {
//       while (! book.eof() )
//        {
//            getline (book,line);
//            cout << line << endl;
//        }
//        cout << sizeOfBook << endl;
//        book.close();
//    }
//    else cout << "Unable to open file";
//    return sizeOfBook;

    for (int i = 0; i < sizeOfBook; i++)
    {
        cout << i << " ";
        cout << contactBook[i].name << " ";
        cout << contactBook[i].surname << " ";
        cout << contactBook[i].number << endl;
    }
}

void ContactBook::searchByName()
{
    fstream file("contact.txt");
    while(true)
    {
        Contact object;
        file >> object.name;
        if (file.eof())
            break;
        file >> object.surname;
        if (file.eof())
            break;
        file >> object.number;
        if (file.eof())
            break;
        contactBook.push_back(object);
    }

    cout << "Input the name" << endl;
    string name;
    string surname;
    cin >> name;

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

void ContactBook::createContact()
{
    Contact tmpContact;

    cout << "Input name" << endl;
    cin >> tmpContact.name;

    cout << "Input surname" << endl;
    cin >> tmpContact.surname;

    cout << "Input telephone number" << endl;
    cin >> tmpContact.number;

    contactBook.push_back(tmpContact);
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
