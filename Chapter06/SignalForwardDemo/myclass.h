#ifndef MYCLASS_H
#define MYCLASS_H

#include <QWidget>

class QPushButton;
class MyClass : public QWidget
{
    Q_OBJECT

public:
    MyClass(QWidget *parent = nullptr);
    ~MyClass();
signals:
     void signalName();
 private:
     QPushButton *myButton;

};
#endif // MYCLASS_H
