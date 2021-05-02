#include <QtTest>

// add necessary includes here

class TestClass : public QObject
{
    Q_OBJECT

public:
    TestClass() {}
    ~TestClass(){}

private slots:
    void initTestCase(){}
    void cleanupTestCase() {}
    void test_compareStrings();
    void test_compareValues();

};


void TestClass::test_compareStrings()
{
    QString string1 = QLatin1String("Apple");
    QString string2 = QLatin1String("Orange");
    QCOMPARE(string1.localeAwareCompare(string2), 0);
}
void TestClass::test_compareValues()
{
    int a = 10;
    int b = 20;
    int result = a + b;
    QCOMPARE(result,30);
}

QTEST_APPLESS_MAIN(TestClass)

#include "tst_testclass.moc"
