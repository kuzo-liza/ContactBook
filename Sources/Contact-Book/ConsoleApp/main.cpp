#include <console.h>

using namespace std;

int main()
{
    int check;
    cout << "1 - Show the book" << endl;
    cout << "2 - Search a contact by the name" << endl;
    cout << "Input a number of program" << endl;
    cin >> check;

    switch (check){

    case 1:
        showTheBook();
        break;

    case 2:
        searchByName();
        break;

    default:
            {
                std::cout << "Wrong number. Input another number" << endl;
            }
        return 0;
    }
}



