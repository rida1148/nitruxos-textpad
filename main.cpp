// C++ header to include for using qmlRegisterType();
#include <QtQml>            // If you use Qt5


#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickWindow>

#include "file.h"    // Your FileIO C++ class

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("File", new File());
    engine.load(QUrl("qml/textpad/main.qml"));

    return app.exec();
}
