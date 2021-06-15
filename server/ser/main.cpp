#include "myser.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MySer w;
    w.show();
    return a.exec();
}
