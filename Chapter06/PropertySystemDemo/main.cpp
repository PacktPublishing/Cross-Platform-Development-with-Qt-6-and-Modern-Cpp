#include "myclass.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyClass myClass;
    myClass.setVersion("v1.0");

    //Alternative
    QObject *object = &myClass;
    object->setProperty("version", "v1.0");


    myClass.show();
    return a.exec();
}
