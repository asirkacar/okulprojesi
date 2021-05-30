#include "tknparcabilgisiyoneticisi.h"
#include <Veri/VeriSiniflari/tknparcabilgileri.h>

TKNparcaBilgisiYoneticisi::TKNparcaBilgisiYoneticisi(QObject *parent) : QObject(parent), TemelVeriYoneticisi<TKNParcaBilgileri, TKNParcaBilgileriPtr>()
{

}

TKNparcaBilgisiYoneticisi::Ptr TKNparcaBilgisiYoneticisi::kopyaOlustur(TKNparcaBilgisiYoneticisi::Ptr kaynak) const
{
    Ptr kopya=yeni();
    kopya->setID(kaynak->getID());
    kopya->setParcaMarkasi(kaynak->getParcaMarkasi());
    kopya->setParcaModeli(kaynak->getParcaModeli());
    kopya->setParcaOzellikleri(kaynak->getParcaOzellikleri());
    kopya->setParcaTuru(kaynak->getParcaTuru());
    return kopya;
}

