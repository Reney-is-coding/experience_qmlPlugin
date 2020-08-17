#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "include/ThemeHandler.h"

int main ( int argc, char** argv )
{
    QGuiApplication app ( argc, argv );

    QQmlApplicationEngine engine;

    ThemeHandler* object = new ThemeHandler();
    engine.rootContext()->setContextProperty ( "themeInUse", object ) ;

    engine.addImportPath ( ":/imports" );
    engine.load ( QUrl ( QStringLiteral ( "qrc:/qml/main.qml" ) ) );
    return app.exec();
}
