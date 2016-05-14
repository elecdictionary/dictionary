#include "mainwindow.h"
#include "ediccontroler.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ediccontroler* Ediccon;
    Ediccon = new ediccontroler();
    MainWindow w(Ediccon);
    w.show();

    return a.exec();
}
