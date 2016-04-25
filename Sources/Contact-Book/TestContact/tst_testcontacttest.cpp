#include <QString>
#include <QtTest>
#include "contact.h"
#include "contact_book.h"

class TestContactTest : public QObject
{
    Q_OBJECT

public:
    TestContactTest();
    Contact contact;
    ContactBook book;

private Q_SLOTS:

    void testForContact();
    void testCreateContact();
};

TestContactTest::TestContactTest()
{
}

void TestContactTest::testForContact()
{
   string name;
   name = "Lizka";
   contact.setName(name);
   QCOMPARE(contact.getName(), name);

   string surname;
   surname = "Kuzovkina";
   contact.setSurname(surname);
   QCOMPARE(contact.getSurname(), surname);

   string number;
   number = "0000000";
   contact.setNumber(number);
   QCOMPARE(contact.getNumber(), number);
}

void TestContactTest::testCreateContact()
{
    int numberOfContacts;
    numberOfContacts = book.sizeOfBook;
    book.createContact("Lizka", "Kuzovkina", "0000000");
    QCOMPARE(book.sizeOfBook, numberOfContacts+1);
}


QTEST_APPLESS_MAIN(TestContactTest)

#include "tst_testcontacttest.moc"
