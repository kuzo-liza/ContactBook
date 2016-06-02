#include "application.h"

Application::Application()
{

}

void Application::runApp()
{
    while (true)
    {
        mainMenu();

        cout << "Input a number of program" << endl;
        cin >> check;
        cout << endl;

        switch (check){

        case 1:
            Application::showBook();
            break;

        case 2:
            searchByName();
            break;

        case 3:
            searchBySurname();
            break;

        case 4:
            newContact();
            break;

        case 5:
            cout << "Input contact number to delete" << endl;
            cin >> num;
            book.deleteContact(num);
            cout << endl << "The contact has been deleted" << endl << endl;
            break;

        case 6:
            cout << "Input number of contact to edit" << endl;
            cin >> num;
            cout << endl;
            editContact(num);
            break;

        case 7:
            exit(0);
            break;

        default:
        {
            cout << "Wrong number. Input another number" << endl << endl;
        }
        }
    }
}
void Application::mainMenu()
{
    cout << "1 - Show the book" << endl;
    cout << "2 - Search contact by the name" << endl;
    cout << "3 - Search contact by the surname" << endl;
    cout << "4 - Create new contact" << endl;
    cout << "5 - Delete contact" << endl;
    cout << "6 - Edit contact" << endl;
    cout << "7 - Exit" << endl << endl;
}

void Application::showBook()
{
    for (int i = 0; i < book.sizeOfBook; i++)
    {
        cout << i+1 << " ";
        cout << book.contactBook[i].name << " ";
        cout << book.contactBook[i].surname << " ";
        cout << book.contactBook[i].number << endl;
    }
    cout << endl;
}

void Application::searchByName()
{
    cout << "Input the name" << endl;

    string name;
    cin >> name;
    cout << endl;

   Contact tmpContact = book.searchByName(name);

   cout << tmpContact.getName() << " ";
   cout << tmpContact.getSurname() << " ";
   cout << tmpContact.getNumber() << endl << endl;

}

void Application::searchBySurname()
{
    cout << "Input the surname" << endl;

    string surname;
    cin >> surname;

    cout << endl;

    Contact tmpContact = book.searchBySurname(surname);

    cout << tmpContact.getName() << " ";
    cout << tmpContact.getSurname() << " ";
    cout << tmpContact.getNumber() << endl << endl;

}


void Application::newContact()
{
    string name, surname, number;

    cout << "Input name of a new contact" << endl;
    cin >> name;

    cout << endl << "Input surname of a new contact" << endl;
    cin >> surname;

    cout << endl << "Input telephone number of a new contact" << endl;
    cin >> number;
    cout << endl;

    book.createContact(name, surname, number);

    cout << "Contact " << name << " " << surname << " " << number << " has been added to the book" << endl << endl;
}

void Application::editContact(int num)
{
    cout << book.contactBook[num].name << " ";
    cout << book.contactBook[num].surname << " ";
    cout << book.contactBook[num].number << endl << endl;

    cout << "1 - change the name" << endl;
    cout << "2 - change the surname" << endl;
    cout << "3 - change the number" << endl << endl;
    cout << "Input the number of program" << endl;

    int change;
    cin >> change;
    cout << endl;

    switch (change)
    {

    case 1:
    {
        cout << "Input new name" << endl;
        string newName;
        cin >> newName;
        cout << endl;
        book.contactBook[num].setName(newName);
        cout << "The name was changed" << endl << endl;
        break;
    }

    case 2:
    {
        cout << "Input new surname" << endl;
        string newSurname;
        cin >> newSurname;
        cout << endl;
        book.contactBook[num].setSurname(newSurname);
        cout << "The surname was changed" << endl << endl;
        break;
    }

    case 3:
    {
        cout << "Input new number" << endl;
        string newNumber;
        cin >> newNumber;
        cout << endl;
        book.contactBook[num].setNumber(newNumber);
        cout << "The number was changed" << endl << endl;
        break;
    }
    default:
    {
        cout << "Wrong number. Input another number" << endl << endl;
    }
    }

}

//void sortInGroups(int group)
//{

//}
