#include "mainwindow.h"
#include <QApplication>
#include "GameClasses/maze.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Labyrinth Game");
    w.show();
    return a.exec();
}
