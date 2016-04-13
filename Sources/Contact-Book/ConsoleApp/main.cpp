#include <console.h>

int main(){

    int check;


    while (true)
    {
        cout << "1 - Show the book" << endl;
        cout << "2 - Search a contact by the name" << endl;
        cout << "3 - Exit" << endl;

//        cout << "4 - " << endl;

        cout << "Input a number of program" << endl;
        cin >> check;

        switch (check){

        case 1:
            showTheBook();
            break;

        case 2:
            searchByName();
            break;

        case 3:
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
