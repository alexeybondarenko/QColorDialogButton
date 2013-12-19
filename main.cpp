#include "mainwindow.h"
#include <QApplication>

#include <QDebyg>

int main(int argc, char *argv[])
{
	std::cout << 'dslfkdsj';
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
