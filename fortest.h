#ifndef FORTEST_H
#define FORTEST_H

#include <QObject>
#include <QString>

class ForTest : public QObject {
  Q_OBJECT
public:
  explicit ForTest(QObject *parent = nullptr);
  void setQstring(QString string);
  QString getString();

private:
  QString theString;
signals:
};

#endif // FORTEST_H
