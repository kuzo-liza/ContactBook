#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

class Contact
{
public:
    void setName(string name);
    void setSurname(string surname);
    void setNumber(string number);

    string name;
    string surname;
    string number;
    int group;

    Contact();
    Contact(const Contact &value);
    //const &operator =(const Contact &value);
};

#endif // CONTACT_H

