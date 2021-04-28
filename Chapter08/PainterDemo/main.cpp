#include "paintwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PaintWindow window;
    window.show();
    return a.exec();
}
