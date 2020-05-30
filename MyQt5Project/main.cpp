#include "enterform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EnterForm w;
    w.show();

    return a.exec();
}
