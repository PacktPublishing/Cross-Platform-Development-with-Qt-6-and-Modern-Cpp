#include "customwidget.h"

#include <QApplication>
#include <QTranslator>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QTranslator translator;

    if(translator.load(":/translations/Simplei18nDemo_de_DE.qm"))
    {
        app.installTranslator(&translator);
        qDebug()<<"Loaded successfully!";
    }
    else
    {
        qDebug()<<"Loading failed.";
    }
    CustomWidget customUI;
    customUI.show();
    return app.exec();
}
