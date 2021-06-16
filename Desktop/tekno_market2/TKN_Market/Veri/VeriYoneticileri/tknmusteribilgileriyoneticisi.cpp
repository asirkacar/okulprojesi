#include "tknmusteribilgileriyoneticisi.h"
#include <Veri/VeriSiniflari/tknmusteribilgileri.h>

TKNMusteriBilgileriYoneticisi::TKNMusteriBilgileriYoneticisi(QObject *parent) : QObject(parent)
{

}

TKNMusteriBilgileriYoneticisi::Ptr TKNMusteriBilgileriYoneticisi::kopyaOlustur(TemelVeriYoneticisi::Ptr kaynak) const
{
    Ptr kopya = yeni();
    kopya->setId(kaynak->getId());
    kopya->setMusteriAdi(kaynak->getMusteriAdi());
    kopya->setMusteriAdresi(kaynak->getMusteriAdresi());
    kopya->setMusteriTelefonu(kaynak->getMusteriTelefonu());
    return kopya;

}
QDataStream &operator<<(QDataStream &a, const TKNMusteriBilgileriYoneticisi &b){
    a<<b.enSonId<<b.veriler;
    return a;
}
