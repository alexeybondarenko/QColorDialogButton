#include "mainwindow.h"
#include <QApplication>

#include <QDebug>

int main(int argc, char *argv[])
{
    //some comment
    qDebug() <<"Merge test";
    qDebug() << 'dslfkdsj';

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
