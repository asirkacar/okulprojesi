#include "tknalisbilgileri.h"

TKNAlisBilgileri::TKNAlisBilgileri(QObject *parent) : QObject(parent)
{

}

IdTuru TKNAlisBilgileri::getId() const
{
    return parcaAlisId;
}

void TKNAlisBilgileri::setId(const IdTuru &value)
{
    if(value==parcaAlisId)
        return;
    parcaAlisId = value;
    emit IdDegisti(parcaAlisId);
}

ReelSayi TKNAlisBilgileri::getParcaAlisMiktari() const
{
    return parcaAlisMiktari;
}

void TKNAlisBilgileri::setParcaAlisMiktari(const ReelSayi &value)
{
    if(value==parcaAlisMiktari)
        return;
    parcaAlisMiktari = value;
    emit ParcaAlisMiktariDegisti(parcaAlisMiktari);
}

ParaBirimi TKNAlisBilgileri::getBirimFiyat() const
{
    return birimFiyat;
}

ParaBirimi TKNAlisBilgileri::getToplam() const
{
    return parcaAlisMiktari * birimFiyat;
}

void TKNAlisBilgileri::setBirimFiyat(const ParaBirimi &value)
{
    if(value==birimFiyat)
        return;
    birimFiyat = value;
    emit BirimFiyatDegisti(birimFiyat);
}
