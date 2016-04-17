#include <console.h>
#include "contact_book.h"

int main(){

    int check;
    ContactBook book;

    while (true)
    {
        cout << "1 - Show the book" << endl;
        cout << "2 - Search a contact by the name" << endl;
        cout << "3 - Exit" << endl;
        cout << "4 - Create a new contact" << endl;

        cout << "Input a number of program" << endl;
        cin >> check;

        switch (check){

        case 1:
            book.showTheBook();
            break;

        case 2:
            book.searchByName();
            break;

        case 3:
            exit(0);
            break;

        case 4:
            book.createContact(book.sizeOfBook);
            break;

        case 5:
            book.deleteContact();
            break;

        default:
        {
            cout << "Wrong number. Input another number" << endl;
        }
        }


    }

    return 0;

}
