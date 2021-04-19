#include "myclass.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyClass w;
    w.show();
    return a.exec();
}
