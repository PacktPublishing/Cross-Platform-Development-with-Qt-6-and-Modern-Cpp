#ifndef BACKENDLOGIC_H
#define BACKENDLOGIC_H

#include <QObject>
class BackendLogic : public QObject
{
    Q_OBJECT
public:
    explicit BackendLogic(QObject *parent = nullptr) { Q_UNUSED(parent);}
    Q_INVOKABLE int getData() {return mValue; }
private:
    int mValue = 100;
};
#endif // BACKENDLOGIC_H
