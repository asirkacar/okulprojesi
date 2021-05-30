#include "tknuretilenparca.h"

TKNUretilenParca::TKNUretilenParca(QObject *parent) : QObject(parent)
{

}

IdTuru TKNUretilenParca::getId() const
{
    return uretilenParcaId;
}

void TKNUretilenParca::setId(const IdTuru &value)
{
    if(value==uretilenParcaId)
        return;
    uretilenParcaId = value;
    emit idDegisti(uretilenParcaId);
}

KareKodResim TKNUretilenParca::getKareKodu() const
{
    return kareKodu;
}

void TKNUretilenParca::setKareKodu(const KareKodResim &value)
{
    if(value==kareKodu)
        return;
    kareKodu = value;
    emit kareKoduDegisti(kareKodu);
}

Metin TKNUretilenParca::getSeriNumarasi() const
{
    return seriNumarasi;
}

void TKNUretilenParca::setSeriNumarasi(const Metin &value)
{
    if(value==seriNumarasi)
        return;
    seriNumarasi = value;
    emit seriNumarasiDegisti(seriNumarasi);
}
QDataStream &operator<<(QDataStream &stream, TKNUretilenParcaPtr &veri)
{
    stream<<veri->getId()<<veri->getKareKodu()<<veri->getSeriNumarasi();
    return stream;
}
QDataStream &operator>>(QDataStream &stream, TKNUretilenParcaPtr &veri)
{
    IdTuru id;
    KareKodResim kod;
    Metin seri;

    stream >> id >> kod >> seri;
    veri = std::make_shared<TKNUretilenParca>();
    veri->setId(id);
    veri->setSeriNumarasi(seri);
    veri->setKareKodu(kod);

    return stream;
}
