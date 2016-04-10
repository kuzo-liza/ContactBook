#include "console.h"

using namespace std;

void showTheBook()
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
        book.close();
    }
    else cout << "Unable to open file";
}

void searchByName()
{
fstream file("contacts.txt");
vector <Contact> contactBook;
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

while (true){
    cout << "Input the name" << endl;
    string name;
    cin >> name;
    for (int i = 0; i < contactBook.size(); i++){
        if (contactBook[i].name == name){
            cout << name << " " << contactBook[i].number << endl;
        }
    }
}
}
