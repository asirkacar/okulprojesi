#include "tknalisfatura.h"

TKNAlisFatura::TKNAlisFatura(QObject *parent) : QObject(parent)
{

}

IdTuru TKNAlisFatura::getId() const
{
    return AlisFaturaId;
}

void TKNAlisFatura::setId(const IdTuru &value)
{
    if(value==AlisFaturaId)
        return;
    AlisFaturaId = value;
    emit idDegisti(AlisFaturaId);
}

TarihSaat TKNAlisFatura::getFaturaTarihi() const
{
    return faturaTarihi;
}

void TKNAlisFatura::setFaturaTarihi(const TarihSaat &value)
{
    if(value==faturaTarihi)
        return;
    faturaTarihi = value;
    emit FaturaTarihiDegisti(value);
}

Metin TKNAlisFatura::getFaturaNo() const
{
    return faturaNo;
}

void TKNAlisFatura::setFaturaNo(const Metin &value)
{
    if(value==faturaNo)
        return;
    faturaNo = value;
    emit FaturaNoDegisti(faturaNo);
}
QDataStream &operator<<(QDataStream &stream, const TKNAlisFaturaPtr &veri)
{
    stream<<veri->getId()<<veri->getFaturaNo()<<veri->getFaturaTarihi();
    return stream;
}
QDataStream &operator>>(QDataStream &stream, TKNAlisFaturaPtr &veri)
{
    IdTuru id;
    Metin faturaNo;
    TarihSaat faturaTarihi;

    stream >> id >> faturaNo >> faturaTarihi;

    veri=std::make_shared<TKNAlisFatura>();

    veri->setId(id);
    veri->setFaturaNo(faturaNo);
    veri->setFaturaTarihi(faturaTarihi);
    return stream;
}
