#include "contact_book.h"

ContactBook::ContactBook()
{
    sizeOfBook = 0;
    checkNumberOfContacts();
    contactBook.resize(sizeOfBook);

}

int ContactBook::showTheBook()
{
    string line;
    ifstream book ("contacts.txt");

    if (book.is_open())
    {

       while (! book.eof() )
        {
            getline (book,line);
            cout << line << endl;


        }
        cout << sizeOfBook << endl;
        book.close();
    }
    else cout << "Unable to open file";
    return sizeOfBook;
}

void ContactBook::searchByName()
{
    fstream file("contacts.txt");

    while(true){
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

//while (true){
    cout << "Input the name" << endl;
    string name;
    string surname;
    cin >> name;
    for (int i = 0; i < contactBook.size(); i++){
        if (contactBook[i].name == name){
            cout << name << " ";
            cout << contactBook[i].surname << " " << contactBook[i].number << endl;
        }
// else cout << "Wrong name. Try again" << endl;
    }
}
//}

int ContactBook::createContact(int sizeOfBook){

    int i = sizeOfBook;
    Contact tmpContact;

    cout << "Input name" << endl;
    cin >> tmpContact.name;
    cout << "Input surname" << endl;
    cin >> tmpContact.surname;
    cout << "Input telephone number" << endl;
    cin >> tmpContact.number;
    contactBook.push_back(tmpContact);

}

void ContactBook::deleteContact(){

}

int ContactBook::checkNumberOfContacts()
{
    string line;
    ifstream book ("contacts.txt");

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
    fstream file("contacts.txt");
    for (int i = 0; i < sizeOfBook; i++)
    {
        file >> contactBook[i].name;
        file >> contactBook[i].surname;
        file >> contactBook[i].number;

    }

}

//void sortContacts(){
//sort(contactBook.begin(), contactBook.end());
//}
