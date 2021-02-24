#ifndef CUSTOMOBJECT_H
#define CUSTOMOBJECT_H

#include <QObject>
#include <QtQml>
#include <QVariant>

class CustomObject : public QObject
{
    Q_OBJECT
    QML_ELEMENT
public:
    explicit CustomObject(QObject *parent = nullptr);
    Q_INVOKABLE void setObject(QObject* object)
    {
        object->setProperty("text", QVariant("Clicked!"));
    }
};

#endif // CUSTOMOBJECT_H
