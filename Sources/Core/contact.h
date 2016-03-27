#ifndef CONTACT_H
#define CONTACT_H

#include <string>
using namespace std;

class Contact
{
public:
    Contact();
    void setName(string newName);
    void setSurname(string newSurname);
    void setPhoneNumber(string newPhoneNumber);
    void setGroup(int newGroup);

private:
    string name;
    string surname;
    string phoneNumber;
    int group;

};

#endif // CONTACT_H
