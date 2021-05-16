#include "myclass.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyClass myClass;
    myClass.setVersion("v1.0");
    qDebug()<<"myClass version: " <<myClass.version();

    //Alternative
    QObject *object = &myClass;
    object->setProperty("version", "v2.0");

    qDebug()<<"myClass version: " <<myClass.version();

    return a.exec();
}
