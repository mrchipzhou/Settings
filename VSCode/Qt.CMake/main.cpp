#include <QGuiApplication>
#include <QApplication>
#include "mainwindow.h"

int main(int argc, char** argv) {
    // QGuiApplication app(argc, argv);
    QApplication app(argc, argv);
    MainWindow w;
    w.show();
    
    return app.exec();
}
