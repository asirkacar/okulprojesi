#include "tknparcabilgileri.h"

TKNParcaBilgileri::TKNParcaBilgileri(QObject *parent) : QObject(parent)
{

}

IdTuru TKNParcaBilgileri::getID() const
{
    return ParcaID;
}

void TKNParcaBilgileri::setID(const IdTuru &value)
{
    if(value==ParcaID)
        return;
    ParcaID = value;
    emit IDDegisti(ParcaID);
}

Metin TKNParcaBilgileri::getParcaMarkasi() const
{
    return ParcaMarkasi;
}

void TKNParcaBilgileri::setParcaMarkasi(const Metin &value)
{
    if(value==ParcaMarkasi)
        return;
    ParcaMarkasi = value;
    emit ParcaMarkasiDegisti(ParcaMarkasi);
}

Metin TKNParcaBilgileri::getParcaModeli() const
{
    return ParcaModeli;
}

void TKNParcaBilgileri::setParcaModeli(const Metin &value)
{
    if(value==ParcaModeli)
        return;
    ParcaModeli = value;
    emit ParcaModeliDegisti(ParcaModeli);
}

ParcaTuru TKNParcaBilgileri::getParcaTuru() const
{
    return parcaTuru;
}

void TKNParcaBilgileri::setParcaTuru(const ParcaTuru &value)
{
    if(value==parcaTuru)
        return;
    parcaTuru = value;
    emit ParcaTuruDegisti(parcaTuru);
}

Metin TKNParcaBilgileri::getParcaOzellikleri() const
{
    return ParcaOzellikleri;
}

void TKNParcaBilgileri::setParcaOzellikleri(const Metin &value)
{
    if(value==ParcaOzellikleri)
        return;
    ParcaOzellikleri = value;
    emit ParcaOzellikleriDegisti(ParcaOzellikleri);
}
