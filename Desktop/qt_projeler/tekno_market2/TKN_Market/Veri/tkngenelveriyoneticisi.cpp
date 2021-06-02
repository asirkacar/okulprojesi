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
QDataStream &operator<<(QDataStream &a, TKNGenelVeriYoneticisi &b)
{
    a<<b.musteriBilgileri<<b.alisFaturalari<<b.getParcaBilgisi();
    return a;
}
QDataStream &operator>>(QDataStream &a, TKNGenelVeriYoneticisi &b)
{
    a>>b.musteriBilgileri>>b.alisFaturalari>>b.getParcaBilgisi();
    return a;
}
