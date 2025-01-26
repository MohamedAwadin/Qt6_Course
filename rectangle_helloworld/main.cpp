//It manages the application life cycle, event loop
#include <QGuiApplication>


// Provides Qt applicatoon engine class, for loading and managing QML files.
#include <QQmlApplicationEngine>


/* argc = number of parameters you send,
 * argv = the parameters you send actually
 */

// Entery point for C++ program
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    /*

        Singles & Slotes : to handell the error or fail
    */
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("rectangle_helloworld", "Main");

    return app.exec();
}
