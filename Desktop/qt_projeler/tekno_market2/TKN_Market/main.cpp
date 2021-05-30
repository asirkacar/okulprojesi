#include "tknanapencere.h"

#include <QApplication>
#include <Veri/VeriSiniflari/tknparcabilgileri.h>
#include <Veri/VeriSiniflari/tknalisfatura.h>
#include <Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.h>
#include <Veri/VeriYoneticileri/tknalisfaturasiyoneticisi.h>

#include <QFile> //dosya açıp kapatmak için
#include <QDir> //klasörde dosya varmı yokmu sorgu klasör işlemleri

#include <QTextStream> //açılan dosyaya veri gönderme metin şeklinde gönderiyo
#include <QDataStream> //veri şeklinde gönderiyo

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TKNAnaPencere w;
    w.show();
    return a.exec();
}
