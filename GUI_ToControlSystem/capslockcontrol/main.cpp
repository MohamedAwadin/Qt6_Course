#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQuickStyle>
#include "capslockcontrol.h"

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    QQuickStyle::setStyle("Universal");
    CapsLockControl capsLockController;

    engine.rootContext()->setContextProperty("capsLockController", &capsLockController);
    engine.load(QUrl::fromLocalFile("Main.qml"));

    if (engine.rootObjects().isEmpty()) return -1;

    return app.exec();
}
