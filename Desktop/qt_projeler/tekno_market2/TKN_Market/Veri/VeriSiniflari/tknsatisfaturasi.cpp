#include "tknsatisfaturasi.h"

TKNSatisFaturasi::TKNSatisFaturasi(QObject *parent) : QObject(parent)
{

}

IdTuru TKNSatisFaturasi::getId() const
{
    return satisFaturaId;
}

void TKNSatisFaturasi::setId(const IdTuru &value)
{
    if(value==satisFaturaId)
        return;
    satisFaturaId = value;
    emit IdDegisti(satisFaturaId);
}

TarihSaat TKNSatisFaturasi::getFaturaTarihi() const
{
    return faturaTarihi;
}

void TKNSatisFaturasi::setFaturaTarihi(const TarihSaat &value)
{
    if(value==faturaTarihi)
        return;
    faturaTarihi = value;
    emit FaturaTarihiDegisti(value);
}

Metin TKNSatisFaturasi::getFaturaNo() const
{
    return faturaNo;
}

void TKNSatisFaturasi::setFaturaNo(const Metin &value)
{
    if(value==faturaNo)
        return;
    faturaNo = value;
    emit FaturaNoDegisti(faturaNo);
}
QDataStream &operator<<(QDataStream &stream, TKNSatisFaturasiPtr &veri)
{
    stream<<veri->getId()<<veri->getFaturaNo()<<veri->getFaturaTarihi();
    return stream;
}
QDataStream &operator>>(QDataStream &stream, TKNSatisFaturasiPtr &veri)
{
    IdTuru id;
    Metin faturaNo;
    TarihSaat faturaTarihi;

    stream >> id >> faturaNo >> faturaTarihi;

    veri=std::make_shared<TKNSatisFaturasi>();

    veri->setId(id);
    veri->setFaturaNo(faturaNo);
    veri->setFaturaTarihi(faturaTarihi);
    return stream;
}


