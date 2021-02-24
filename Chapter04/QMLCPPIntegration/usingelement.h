#ifndef USINGELEMENT_H
#define USINGELEMENT_H

#include <QObject>
#include <QtQml>
class UsingElements : public QObject
{
    Q_OBJECT
    QML_ELEMENT

public:
    explicit UsingElements(QObject *parent = nullptr) { Q_UNUSED(parent);}
    Q_INVOKABLE int readValue() {return mValue; }
private:
    int mValue = 500;

};
#endif // USINGELEMENT_H


