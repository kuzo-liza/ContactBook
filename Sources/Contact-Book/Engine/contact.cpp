#include "contact.h"

Contact::Contact()
{

}

Contact::Contact(const Contact &value)
{
    name = value.name;
    surname = value.surname;
    number = value.number;
}

//const Contact &operator =(const Contact &value){
//    name = value.name;
//    surname = value.surname;
//    number = value.number;
//    return value;
//}

string Contact::getName()
{
    return name;
}
string Contact::getSurname()
{
    return surname;
}
string Contact::getNumber()
{
    return number;
}

void Contact::setName(string newName)
{
    name = newName;
}

void Contact::setSurname(string newSurname)
{
    surname = newSurname;
}

void Contact::setNumber(string newNumber)
{
    number = newNumber;
}
