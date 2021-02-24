#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "customobject.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));

   // If you are using QML_ELEMENT, then qmlRegisterType is not required.
   //qmlRegisterType() is used for earlier versions of Qt.
   // qmlRegisterType<CustomObject>("MyCustomObject", 1, 0, "CustomObject");

    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
