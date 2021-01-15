#include "../fortest.h"
#include <QtTest>
// add necessary includes here

class BigTest : public QObject {
  Q_OBJECT

public:
  BigTest();
  ~BigTest();

private slots:
  void test_case1();
};

BigTest::BigTest() {}

BigTest::~BigTest() {}

void BigTest::test_case1() {

  ForTest asd;
  asd.setQstring("Working!!!");
  QString result = asd.getString();

  QCOMPARE(result, "Working!!!");
}

QTEST_APPLESS_MAIN(BigTest)

#include "tst_bigtest.moc"
