#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "/Users/lyubovkulik/Documents/Thermostat_qml/thermostat/thermostat/Contollers/systemcontroller.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    qmlRegisterType< SystemController > ("Monty", 1, 0, "SystemController");

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/thermostat/Main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
