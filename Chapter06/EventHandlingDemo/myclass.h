#ifndef MYCLASS_H
#define MYCLASS_H

#include <QWidget>
#include <QEvent>

class MyCustomEvent : public QEvent
{
public:
    static const QEvent::Type MyEvent = QEvent::Type(QEvent::User + 1);
};

class MyClass : public QWidget
{
    Q_OBJECT

public:
    MyClass(QWidget *parent = nullptr);
    ~MyClass();
protected:
    bool event(QEvent *event);
};
#endif // MYCLASS_H
