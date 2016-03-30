#include <QString>
#include <QtTest>

class ContactTestTest : public QObject
{
    Q_OBJECT

public:
    ContactTestTest();

private Q_SLOTS:
    void testCase1();
};

ContactTestTest::ContactTestTest()
{
}

void ContactTestTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(ContactTestTest)

#include "tst_contacttesttest.moc"
