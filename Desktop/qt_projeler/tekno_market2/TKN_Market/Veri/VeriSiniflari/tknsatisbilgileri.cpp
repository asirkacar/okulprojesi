#include "tknsatisbilgileri.h"

TKNSatisBilgileri::TKNSatisBilgileri(QObject *parent) : QObject(parent)
{

}

IdTuru TKNSatisBilgileri::getId() const
{
    return parcaSatisBilgiId;
}

void TKNSatisBilgileri::setId(const IdTuru &value)
{
    if(value==parcaSatisBilgiId)
        return;
    parcaSatisBilgiId = value;
    emit idDegisti(parcaSatisBilgiId);
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
QDataStream &operator<<(QDataStream &stream, TKNSatisBilgileriPtr &veri)
{
    stream << veri->getId() << veri->getBirimFiyat() << veri->getParcaSatisMiktari();
    return stream;
}
QDataStream &operator>>(QDataStream &stream, TKNSatisBilgileriPtr &veri)
{
    IdTuru id;
    ReelSayi parcaSatisMiktari;
    ParaBirimi birimFiyat;

    stream >> id >> parcaSatisMiktari >> birimFiyat;

    veri = std::make_shared<TKNSatisBilgileri>();

    veri->setId(id);
    veri->setBirimFiyat(birimFiyat);
    veri->setParcaSatisMiktari(parcaSatisMiktari);
    return stream;
}
