#ifndef TKNPARCABILGILERI_H
#define TKNPARCABILGILERI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TKNParcaBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit TKNParcaBilgileri(QObject *parent = nullptr);
    Q_PROPERTY(IdTuru iD READ getID WRITE setID NOTIFY IDDegisti)
    Q_PROPERTY(Metin ParcaMarkasi READ getParcaMarkasi WRITE setParcaMarkasi NOTIFY ParcaMarkasiDegisti)
    Q_PROPERTY(Metin ParcaModeli READ getParcaModeli WRITE setParcaModeli NOTIFY ParcaModeliDegisti)
    Q_PROPERTY(ParcaTuru parcaTuru READ getParcaTuru WRITE setParcaTuru NOTIFY ParcaTuruDegisti)
    Q_PROPERTY(Metin ParcaOzellikleri READ getParcaOzellikleri WRITE setParcaOzellikleri NOTIFY ParcaOzellikleriDegisti)

    IdTuru getID() const;
    Metin getParcaMarkasi() const;
    Metin getParcaModeli() const;
    ParcaTuru getParcaTuru() const;
    Metin getParcaOzellikleri() const;

signals:
    void IDDegisti(const IdTuru &value);
    void ParcaMarkasiDegisti(const Metin &value);
    void ParcaModeliDegisti(const Metin &value);
    void ParcaTuruDegisti(const ParcaTuru &value);
    void ParcaOzellikleriDegisti(const Metin &value);
public slots:
    void setID(const IdTuru &value);
    void setParcaMarkasi(const Metin &value);
    void setParcaModeli(const Metin &value);
    void setParcaTuru(const ParcaTuru &value);
    void setParcaOzellikleri(const Metin &value);

private:
    IdTuru ParcaID;
    Metin ParcaMarkasi;
    Metin ParcaModeli;
    ParcaTuru parcaTuru;
    Metin ParcaOzellikleri;

};

QDataStream &operator<<(QDataStream &a, TKNParcaBilgileriPtr &b);
QDataStream &operator>>(QDataStream &a, TKNParcaBilgileriPtr &b);


#endif // TKNPARCABILGILERI_H
