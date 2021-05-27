#ifndef TKNPARCABILGILERI_H
#define TKNPARCABILGILERI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TKNParcaBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit TKNParcaBilgileri(QObject *parent = nullptr);

    IdTuru getParcaID() const;

    Metin getParcaMarkasi() const;

    Metin getParcaModeli() const;

    ParcaTuru getParcaTuru() const;

    Metin getParcaOzellikleri() const;

signals:
    void ParcaIDDegisti(const IdTuru &value);
    void ParcaMarkasiDegisti(const Metin &value);
    void ParcaModeliDegisti(const Metin &value);
    void ParcaTuruDegisti(const ParcaTuru &value);
    void ParcaOzellikleriDegisti(const Metin &value);
public slots:
    void setParcaID(const IdTuru &value);
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

#endif // TKNPARCABILGILERI_H
