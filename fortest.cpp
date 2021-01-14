#include "fortest.h"

ForTest::ForTest(QObject *parent) : QObject(parent) {}

void ForTest::setQstring(QString string) { theString = string; }

QString ForTest::getString() { return theString; }
