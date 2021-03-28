#include "myclass.h"
#include <QDebug>

MyClass::MyClass(QObject *parent) : QObject(parent)
{

    //New way
    QObject::connect(this, &MyClass::signalName, this, &MyClass::slotName);
    //Old way
    //QObject::connect(this, SIGNAL(signalName()), this, SLOT(slotName()));
    emit signalName();
}

void MyClass::slotName()
{
    qDebug()<< "Slot called!";
}
