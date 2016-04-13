#include <console.h>

using namespace std;

void menu(){

    cout << "Back to menu" << endl;
    int main();

}


int main(){

    int check;

    cout << "1 - Show the book" << endl;
    cout << "2 - Search a contact by the name" << endl;
    cout << "3 - Bcak to menu" << endl;
    cout << "4 - Exit" << endl;

    cout << "Input a number of program" << endl;
    cin >> check;

    switch (check){

    case 1:
        showTheBook();


    case 2:
        searchByName();
        break;

    case 3:
        break;


    case 4:
        break;

    default:
            {
                cout << "Wrong number. Input another number" << endl;
            }
    }
 return 0;

}
