#include "tknalisbilgileriyoneticisi.h"
#include <Veri/VeriSiniflari/tknalisbilgileri.h>

TKNAlisBilgileriYoneticisi::TKNAlisBilgileriYoneticisi(QObject *parent) : QObject(parent)
{

}

TKNAlisBilgileriYoneticisi::Ptr TKNAlisBilgileriYoneticisi::kopyaOlustur(Ptr kaynak) const
{
    Ptr kopya=yeni();
    kopya->setId(kaynak->getId());
    kopya->setBirimFiyat(kaynak->getBirimFiyat());
    kopya->setParcaAlisMiktari(kaynak->getParcaAlisMiktari());
    return kopya;

}
QDataStream &operator<<(QDataStream &a, const TKNAlisBilgileriYoneticisi &b)
{
    a<<b.enSonId<<b.veriler;
    return a;
}
