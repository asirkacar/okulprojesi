#include "tkntedarikci.h"

TKNTedarikci::TKNTedarikci(QObject *parent) : QObject(parent)
{

}

IdTuru TKNTedarikci::getId() const
{
    return TedarikciId;
}

void TKNTedarikci::setId(const IdTuru &value)
{
    if(value==TedarikciId)
        return;
    TedarikciId = value;
    emit idDegisti(TedarikciId);
}

Metin TKNTedarikci::getTedarikciAdi() const
{
    return TedarikciAdi;
}

void TKNTedarikci::setTedarikciAdi(const Metin &value)
{
    if(value==TedarikciAdi)
        return;
    TedarikciAdi = value;
    emit TedarikciAdiDegisti(TedarikciAdi);
}

Metin TKNTedarikci::getTedarikciAdresi() const
{
    return TedarikciAdresi;
}

void TKNTedarikci::setTedarikciAdresi(const Metin &value)
{
    if(value==TedarikciAdresi)
        return;
    TedarikciAdresi = value;
    emit TedarikciAdresiDegisti(TedarikciAdresi);
}

Metin TKNTedarikci::getTedarikciTelefonu() const
{
    return TedarikciTelefonu;
}

void TKNTedarikci::setTedarikciTelefonu(const Metin &value)
{
    if(value==TedarikciTelefonu)
        return;
    TedarikciTelefonu = value;
    emit TedarikciTelefonuDegisti(TedarikciTelefonu);
}

Metin TKNTedarikci::getTedarikciYetkiliKisi() const
{
    return TedarikciYetkiliKisi;
}

void TKNTedarikci::setTedarikciYetkiliKisi(const Metin &value)
{
    if(value==TedarikciYetkiliKisi)
        return;
    TedarikciYetkiliKisi = value;
    emit TedarikciYetkiliKisiDegisti(TedarikciYetkiliKisi);
}
