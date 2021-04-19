#include "myclass.h"
#include <QPushButton>

MyClass::MyClass(QWidget *parent)
    : QWidget(parent)
{
    myButton = new QPushButton(this);
    connect(myButton, &QPushButton::clicked,
            this, &MyClass::signalName);
}

MyClass::~MyClass()
{
}

