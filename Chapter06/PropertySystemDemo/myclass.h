#ifndef MYCLASS_H
#define MYCLASS_H

#include <QWidget>

class MyClass : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(QString version READ version WRITE setVersion NOTIFY versionChanged)

public:
    MyClass(QWidget *parent = nullptr);
    ~MyClass();

    void setVersion(QString version)
    {
        m_version = version;
        emit versionChanged(version);
    }
    QString version() const { return m_version; }

    signals:
        void versionChanged(QString version);

    private:
       QString m_version;
};
#endif // MYCLASS_H
