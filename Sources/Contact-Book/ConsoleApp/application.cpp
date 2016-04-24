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

        switch (check){

        case 1:
            showBook();
            break;

        case 2:
            searchByName();
            break;

        case 3:
            newContact();
            break;

        case 4:
            cout << "Input contact number to delete" << endl;
            cin >> num;
            book.deleteContact(num);
            break;

        case 5:
            cout << "Input number of contact to edit" << endl;
            cin >> num;
            editContact(num);
            break;

        case 6:
            exit(0);
            break;

        default:
        {
            cout << "Wrong number. Input another number" << endl;
        }
        }
    }
}
void Application::mainMenu()
{
    cout << "1 - Show the book" << endl;
    cout << "2 - Search contact by the name" << endl;
    cout << "3 - Create new contact" << endl;
    cout << "4 - Delete contact" << endl;
    cout << "5 - Edit contact" << endl;
    cout << "6 - Exit" << endl;
}

void Application::showBook()
{
    for (int i = 0; i < book.sizeOfBook; i++)
    {
        cout << i << " ";
        cout << book.contactBook[i].name << " ";
        cout << book.contactBook[i].surname << " ";
        cout << book.contactBook[i].number << endl;
    }
}

void Application::searchByName()
{
    cout << "Input the name" << endl;

    string name;
    cin >> name;

    book.searchByName(name);
}

void Application::newContact()
{
    string name, surname, number;

    cout << "Input name" << endl;
    cin >> name;

    cout << "Input surname" << endl;
    cin >> surname;

    cout << "Input telephone number" << endl;
    cin >> number;

    book.createContact(name, surname, number);
}

void Application::editContact(int num)
{
    cout << book.contactBook[num].name << " ";
    cout << book.contactBook[num].surname << " ";
    cout << book.contactBook[num].number << endl;

    cout << "1 - change the name" << endl;
    cout << "2 - change the surname" << endl;
    cout << "3 - change the number" << endl;

    int change;
    cin >> change;

    switch (change)
    {

    case 1:
    {
        cout << "Input new name" << endl;
        string newName;
        cin >> newName;
        book.contactBook[num].setName(newName);
        break;
    }

    case 2:
    {
        cout << "Input new surname" << endl;
        string newSurname;
        cin >> newSurname;
        book.contactBook[num].setSurname(newSurname);
        break;
    }

    case 3:
    {
        cout << "Input new number" << endl;
        string newNumber;
        cin >> newNumber;
        book.contactBook[num].setNumber(newNumber);
        break;
    }
    default:
    {
        cout << "Wrong number. Input another number" << endl;
    }
    }

}

void sortInGroups(int group)
{

}
