#include "tknmusteribilgileri.h"

TKNMusteriBilgileri::TKNMusteriBilgileri(QObject *parent) : QObject(parent)
{

}

IdTuru TKNMusteriBilgileri::getId() const
{
    return musteriId;
}

void TKNMusteriBilgileri::setId(const IdTuru &value)
{
    if(value==musteriId)
        return;
    musteriId = value;
    emit idDegisti(musteriId);
}

Metin TKNMusteriBilgileri::getMusteriAdi() const
{
    return musteriAdi;
}

void TKNMusteriBilgileri::setMusteriAdi(const Metin &value)
{
    if(value==musteriAdi)
        return;
    musteriAdi = value;
    emit MusteriAdiDegisti(musteriAdi);
}

Metin TKNMusteriBilgileri::getMusteriAdresi() const
{
    return musteriAdresi;
}

void TKNMusteriBilgileri::setMusteriAdresi(const Metin &value)
{
    if(value==musteriAdresi)
        return;
    musteriAdresi = value;
    emit MusteriAdresiDegisti(musteriAdresi);
}

Metin TKNMusteriBilgileri::getMusteriTelefonu() const
{
    return musteriTelefonu;
}

void TKNMusteriBilgileri::setMusteriTelefonu(const Metin &value)
{
    if(value==musteriTelefonu)
        return;
    musteriTelefonu = value;
    emit MusteriTelefonuDegisti(musteriTelefonu);
}
