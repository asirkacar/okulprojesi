#include "tknanapencere.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TKNAnaPencere w;
    w.show();
    return a.exec();
}
