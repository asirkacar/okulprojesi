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
