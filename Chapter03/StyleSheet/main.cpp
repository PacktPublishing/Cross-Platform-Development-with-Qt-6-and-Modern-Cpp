#include <QtWidgets>
#include "customstyle.h"
int main(int argc, char *argv[])
{
    QApplication::setStyle(new CustomStyle);
    QApplication app(argc, argv);
    Widget helloworld;
    helloworld.show();
    return app.exec();
}

