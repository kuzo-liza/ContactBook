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
