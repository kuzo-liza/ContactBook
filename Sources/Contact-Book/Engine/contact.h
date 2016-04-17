#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

class Contact
{
public:
    void setName(string name);
    void setSurname(string surname);
    void setNumber(string number);

    string getName();
    string getSurname();
    string getNumber();

    string name;
    string surname;
    string number;
    int group;

    Contact();
    Contact(const Contact &value);
    //const &operator =(const Contact &value);
};

#endif // CONTACT_H

