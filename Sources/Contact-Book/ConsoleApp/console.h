#ifndef CONSOLE_H
#define CONSOLE_H

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;


void showTheBook();
void searchByName();

class Contact{
public:
    string name;
    string surname;
    string number;
    int group;

    // копирующий конструктор
   Contact(const Contact &value){
        name = value.name;
        surname = value.surname;
        number = value.number;
    }

    Contact(){

    }

    const Contact &operator =(const Contact &value){
        name = value.name;
        surname = value.surname;
        number = value.number;
        return value;
    }
};

#endif // CONSOLE_H
