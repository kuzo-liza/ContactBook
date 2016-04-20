#include <QString>
#include <QtTest>


class ContactTest : public QObject
{
    Q_OBJECT

public:
    ContactTest();

    void testSetName();
    void testSetSurname();
    void testSetNumber();


//      Contact(const Contact &value);
//      const &operator =(const Contact &value);

private Q_SLOTS:

    void testCase1();

//    void testGetName();
//    void testGetSurname();
//    void testGetNumber();
};

ContactTest::ContactTest()
{
}

void ContactTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

//void ContactTest::testGetName()
// {
//    QString name = "Lizka";
//    QCOMPARE(testGetName(),QString("Lizka"));
// }

//void ContactTest::testGetSurname()
//{
//   QString surname = "Kuzovkina";
//   QCOMPARE(testGetSurname(), QString("Kuzovkina"));
//}

//void ContactTest::testGetNumber()
//{
//    QString number = "0000000";
//    QCOMPARE(testGetNumber(), QString("0000000"));
//}

QTEST_APPLESS_MAIN(ContactTest)

#include "tst_contacttest.moc"

