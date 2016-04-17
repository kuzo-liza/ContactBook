#include "contact_book.h"

int main(){

    int check;
    ContactBook book;

    while (true)
    {
        cout << "1 - Show the book" << endl;
        cout << "2 - Search contact by the name" << endl;
        cout << "3 - Create new contact" << endl;
        cout << "4 - Delete contact" << endl;
        cout << "5 - Exit" << endl;

        cout << "Input a number of program" << endl;
        cin >> check;

        switch (check){

        case 1:
//            cout << book.contactBook[0].name << " ";
//            cout << book.contactBook[0].surname << " ";
//            cout << book.contactBook[0].number << endl;
            book.showTheBook();
            break;

        case 2:
            book.searchByName();
            break;

        case 3:
            book.createContact();
            break;

        case 4:
            int num;
            cout << "Input contact number to delete" << endl;
            cin >> num;
            book.deleteContact(num);
            break;

        case 5:
            exit(0);
            break;

        default:
        {
            cout << "Wrong number. Input another number" << endl;
        }
        }
    }
    return 0;

}
