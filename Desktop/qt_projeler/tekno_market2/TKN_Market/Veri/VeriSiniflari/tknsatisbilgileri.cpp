#include "tknsatisbilgileri.h"

TKNSatisBilgileri::TKNSatisBilgileri(QObject *parent) : QObject(parent)
{

}

IdTuru TKNSatisBilgileri::getParcaSatisBilgiId() const
{
    return parcaSatisBilgiId;
}

void TKNSatisBilgileri::setParcaSatisBilgiId(const IdTuru &value)
{
    if(value==parcaSatisBilgiId)
        return;
    parcaSatisBilgiId = value;
    emit ParcaSatisBilgiIdDegisti(parcaSatisBilgiId);
}

ReelSayi TKNSatisBilgileri::getParcaSatisMiktari() const
{
    return parcaSatisMiktari;
}

void TKNSatisBilgileri::setParcaSatisMiktari(const ReelSayi &value)
{
    if(value==parcaSatisMiktari)
        return;
    parcaSatisMiktari = value;
    emit ParcaSatisMiktariDegisti(parcaSatisMiktari);
}

ParaBirimi TKNSatisBilgileri::getBirimFiyat() const
{
    return birimFiyat;
}

ParaBirimi TKNSatisBilgileri::getToplamFiyat() const
{
    return birimFiyat * parcaSatisMiktari;
}

void TKNSatisBilgileri::setBirimFiyat(const ParaBirimi &value)
{
    if(value==birimFiyat)
        return;
    birimFiyat = value;
    emit BirimFiyatDegisti(birimFiyat);
}
