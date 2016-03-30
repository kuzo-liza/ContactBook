#include "contact_book.h"
#include <list>
#include <iterator>
#include "contact.h"

using namespace std;

Contact_book::Contact_book(int numberOfContacts)
{
    list<Contact> contactList;

    for(int i = 0; i < numberOfContacts; i++) {
        contactList.push_back(i);
    }
}

void Contact_book::createContact(){

}
