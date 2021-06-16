#include "tkntedarikciyonetici.h"
#include <Veri/VeriSiniflari/tkntedarikci.h>

TKNTedarikciYonetici::TKNTedarikciYonetici(QObject *parent) : QObject(parent)
{

}

TKNTedarikciYonetici::Ptr TKNTedarikciYonetici::kopyaOlustur(Ptr kaynak) const
{
    Ptr kopya = yeni();
    kopya->setId(kaynak->getId());
    kopya->setTedarikciAdi(kaynak->getTedarikciAdi());
    kopya->setTedarikciAdresi(kaynak->getTedarikciAdresi());
    kopya->setTedarikciTelefonu(kaynak->getTedarikciTelefonu());
    kopya->setTedarikciYetkiliKisi(kaynak->getTedarikciYetkiliKisi());
    return kopya;
}
QDataStream &operator<<(QDataStream &a, const TKNTedarikciYonetici &b){
    a<<b.enSonId<<b.veriler;
    return a;
}
