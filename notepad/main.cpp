#include "notepad.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Q_INIT_RESOURCE(icons);

    Notepad w;
    w.show();

    return a.exec();
}
