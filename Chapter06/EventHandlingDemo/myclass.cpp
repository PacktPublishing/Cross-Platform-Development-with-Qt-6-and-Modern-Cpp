#include "myclass.h"
#include <QKeyEvent>

MyClass::MyClass(QWidget *parent)
    : QWidget(parent)
{
}

MyClass::~MyClass()
{
}

bool MyClass::event(QEvent *event)
{
    if (event->type() == QEvent::KeyPress)
    {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        if (keyEvent->key() == Qt::Key_Enter)
        {
            // Handle Enter event event
            return true;
        }
    }
    else if (event->type() == MyCustomEvent::MyEvent)
    {
        MyCustomEvent *myEvent = static_cast<MyCustomEvent *>(event);
        // Handle custom event
        return true;
    }

    return QWidget::event(event);
}
