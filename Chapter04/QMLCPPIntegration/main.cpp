#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQmlComponent>

#include "backendlogic.h"

int main(int argc, char *argv[])
{

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    //Approach 1
    qmlRegisterType<BackendLogic>("backend.logic", 1, 0, "BackendLogic");

    //Approach 2
    engine.rootContext()->setContextProperty("radius", 50);

    const QUrl url(QStringLiteral("qrc:/main.qml"));

    //Calling a QML Method
    QQmlComponent component(&engine, "qrc:/CustomItem.qml");
    QObject *object = component.create();
    QString retValue = "";
    QString msg = "Message from C++";
    QMetaObject::invokeMethod(object, "qmlMethod",
                              Q_RETURN_ARG(QString, retValue),
                              Q_ARG(QString, msg));
    qDebug() << "QML method returned:" << retValue;

    engine.load(url);
    delete object;


    return app.exec();
}
