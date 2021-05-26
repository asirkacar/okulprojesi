#include "tknparcabilgileri.h"

TKNParcaBilgileri::TKNParcaBilgileri(QObject *parent) : QObject(parent)
{

}

IdTuru TKNParcaBilgileri::getParcaID() const
{
    return ParcaID;
}

void TKNParcaBilgileri::setParcaID(const IdTuru &value)
{
    if(value==ParcaID)
        return;
    ParcaID = value;
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
}
