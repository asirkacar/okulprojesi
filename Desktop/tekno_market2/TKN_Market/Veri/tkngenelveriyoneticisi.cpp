#include "tkngenelveriyoneticisi.h"


TKNGenelVeriYoneticisi::TKNGenelVeriYoneticisi(QObject *parent) : QObject(parent)
{

}

TKNGenelVeriYoneticisi &TKNGenelVeriYoneticisi::sec()
{
    static TKNGenelVeriYoneticisi nesne;
    return nesne;
}

TKNAlisFaturasiYoneticisi &TKNGenelVeriYoneticisi::getAlisFaturalari()
{
    return alisFaturalari;
}

TKNparcaBilgisiYoneticisi &TKNGenelVeriYoneticisi::getParcaBilgisi()
{
    return parcaBilgisi;
}

TKNMusteriBilgileriYoneticisi &TKNGenelVeriYoneticisi::getMusteriBilgileri()
{
    return musteriBilgileri;
}

TKNAlisBilgileriYoneticisi &TKNGenelVeriYoneticisi::getParcaAlis()
{
    return parcaAlis;
}

TKNTedarikciYonetici &TKNGenelVeriYoneticisi::getTedarikci()
{
    return tedarikci;
}
QDataStream &operator<<(QDataStream &a, const TKNGenelVeriYoneticisi &b)
{
    a<<b.alisFaturalari<<b.parcaBilgisi<<b.musteriBilgileri<<b.parcaAlis<<b.tedarikci;
    return a;
}
QDataStream &operator>>(QDataStream &a, TKNGenelVeriYoneticisi &b)
{
    a>>b.alisFaturalari>>b.parcaBilgisi>>b.musteriBilgileri>>b.parcaAlis>>b.tedarikci;
    return a;
}
