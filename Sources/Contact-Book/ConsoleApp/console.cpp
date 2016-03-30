#include "console.h"

console::console()
{

}

console::printContacts(contact& *allContacts, int contactsNumber)
{

    for (int i = 0; i < contactsNumber; i++){
    cout << allContacts[i].name << " " << allContacts[i].surname;
    cout << allContacts[i].telephone << endl;
    }

}

console::printContactsInFile(contact& *allContacts, int contactsNumber)
{
    ofstream out("output.txt");

    if (!out){
        cout << "Cannot open the file";
        return 1;
    }
    for (int i = 0; i < contactsNumber; i++){
    out << allContacts[i].name << " " << allContacts[i].surname;
    out << allContacts[i].telephone << endl;
        }
    }
    out.close();
}