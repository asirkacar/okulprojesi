#include "tknanapencere.h"

#include <QApplication>
#include <Veri/VeriSiniflari/tknparcabilgileri.h>
#include <Veri/VeriSiniflari/tknparcabilgileri.h>
#include <Veri/VeriSiniflari/tknalisfatura.h>
#include <Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.h>
#include <Veri/VeriYoneticileri/tknalisfaturasiyoneticisi.h>

#include <QFile> //dosya açıp kapatmak için
#include <QDir> //klasörde dosya varmı yokmu sorgu klasör işlemleri

#include <QTextStream> //açılan dosyaya veri gönderme metin şeklinde gönderiyo
#include <QDataStream> //veri şeklinde gönderiyo

void deneme(){
    TKNparcaBilgisiYoneticisi yonetici;
    auto yeni=yonetici.yeni();
    yeni->setParcaMarkasi("Nvidia");
    yeni->setParcaModeli("Geforce");

    yonetici.ekle(yeni);
    yeni=yonetici.yeni();
    yeni->setParcaMarkasi("Intel");
    yeni->setParcaModeli("i5");
    yonetici.ekle(yeni);

    auto parca=yonetici.ilkiniBul([](TKNParcaBilgileriPtr i) {return i->getParcaMarkasi()=="Nvidia";});
    TKNAlisFaturasiYoneticisi yonetici1;
    auto yeniAlisFaturasi = yonetici1.yeni();
    yeniAlisFaturasi->setId(1);
    yonetici1.ekle(yeniAlisFaturasi);

    QFile dosya("teknno.tkn");
    if(dosya.open(QIODevice::WriteOnly)){
        QDataStream dosya_yaz(&dosya);
        dosya_yaz << yeni;
        dosya.close();
    }
    QFile dosya1("tekno.tkn");
    if(dosya1.open(QIODevice::ReadOnly)){
        QDataStream dosya_oku(&dosya1);
        dosya_oku >> yeni;
    }

}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TKNAnaPencere w;
    w.show();
    return a.exec();
}
