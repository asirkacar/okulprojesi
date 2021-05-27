#include "tknsatisfaturasi.h"

TKNSatisFaturasi::TKNSatisFaturasi(QObject *parent) : QObject(parent)
{

}

IdTuru TKNSatisFaturasi::getSatisFaturaId() const
{
    return satisFaturaId;
}

void TKNSatisFaturasi::setSatisFaturaId(const IdTuru &value)
{
    if(value==satisFaturaId)
        return;
    satisFaturaId = value;
    emit SatisFaturaIdDegisti(satisFaturaId);
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



