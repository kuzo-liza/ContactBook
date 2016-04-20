#include <QString>
#include <QtTest>
#include <QVector>

class ContactBookTest : public QObject
{
    Q_OBJECT

public:
    ContactBookTest();
//    QVector testContactBook;

    void showTheBook();
    int checkNumberOfContacts();

    void deleteContact(int num);
    void searchByName();
    void createContact();
    void fillInTheBook();
    void sortContacts();
    int num;

private Q_SLOTS:

};

ContactBookTest::ContactBookTest()
{
}

void showTheBook()
{

}

int checkNumberOfContacts()
{

}

void deleteContact(int num)
{

}

void searchByName()
{

}

void createContact()
{

}

void fillInTheBook()
{

}

void sortContacts()
{

}

//  QTEST_MAIN(ContactBookTest)

#include "tst_contact_booktest.moc"

