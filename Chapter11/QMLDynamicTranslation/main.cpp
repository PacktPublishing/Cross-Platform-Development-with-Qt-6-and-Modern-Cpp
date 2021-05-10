#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "translationsupport.h"

int main(int argc, char *argv[])
{

    QGuiApplication app(argc, argv);

    TranslationSupport i18nSupport;
    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("i18nSupport", &i18nSupport);
    const QUrl url(QStringLiteral("qrc:/main.qml"));

    QObject::connect(&i18nSupport, &TranslationSupport::updateGUI, &engine, &QQmlApplicationEngine::retranslate);
    engine.load(url);

    return app.exec();
}
