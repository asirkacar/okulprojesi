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
QDataStream &operator<<(QDataStream &stream, TKNMusteriBilgileriPtr &veri)
{
    stream<<veri->getId()<<veri->getMusteriAdi()<<veri->getMusteriAdresi()<<veri->getMusteriTelefonu();
    return stream;
}
QDataStream &operator>>(QDataStream &stream, TKNMusteriBilgileriPtr &veri)
{
    IdTuru id;
    Metin musteriAdi, musteriAdresi, musteriTelefonu;
    stream >> id >> musteriAdi >> musteriAdresi >> musteriTelefonu;
    veri=std::make_shared<TKNMusteriBilgileri>();
    veri->setId(id);
    veri->setMusteriAdi(musteriAdi);
    veri->setMusteriAdresi(musteriAdresi);
    veri->setMusteriTelefonu(musteriTelefonu);

    return stream;
}
