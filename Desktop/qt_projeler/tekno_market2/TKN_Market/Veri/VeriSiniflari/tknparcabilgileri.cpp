#include "tknparcabilgileri.h"
#include <QDataStream>

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
QDataStream &operator<<(QDataStream &a, TKNParcaBilgileriPtr &b)
{
    a << b->getID()<< b->getParcaMarkasi()<<b->getParcaModeli()<<b->getParcaOzellikleri()<<b->getParcaTuru();
    return a;
}
QDataStream &operator>>(QDataStream &a, TKNParcaBilgileriPtr &b)
{
    IdTuru id;
    Metin parcaMarkası;
    Metin parcaModeli;
    ParcaTuru parcaTuru;
    Metin parcaOzellikleri;

    a >> id >> parcaMarkası >> parcaModeli >> parcaTuru >> parcaOzellikleri;

    b=std::make_shared<TKNParcaBilgileri>();

    b->setID(id);
    b->setParcaMarkasi(parcaMarkası);
    b->setParcaModeli(parcaModeli);
    b->setParcaOzellikleri(parcaOzellikleri);
    b->setParcaTuru(parcaTuru);
    return a;


}

