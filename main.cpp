#include "mainwindow.h"
#include <QApplication>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setOrganizationName("ZW_Systems");
    QApplication::setApplicationName("Kalibrator ZW-18a");
    QApplication::setApplicationVersion("1.0.3");

    MainWindow w;
    w.showNormal();
    Q_INIT_RESOURCE(resources);

    return a.exec();
}
