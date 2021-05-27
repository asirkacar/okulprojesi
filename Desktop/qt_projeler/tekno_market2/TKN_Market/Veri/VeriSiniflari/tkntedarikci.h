#ifndef TKNTEDARIKCI_H
#define TKNTEDARIKCI_H

#include <QObject>
#include <Veri/tanimlar.h>
class TKNTedarikci : public QObject
{
    Q_OBJECT
public:
    explicit TKNTedarikci(QObject *parent = nullptr);

    IdTuru getTedarikciId() const;

    Metin getTedarikciAdi() const;

    Metin getTedarikciAdresi() const;

    Metin getTedarikciTelefonu() const;

    Metin getTedarikciYetkiliKisi() const;

signals:
    void TedarikciIdDegisti(const IdTuru &value);
    void TedarikciAdiDegisti(const Metin &value);
    void TedarikciAdresiDegisti(const Metin &value);
    void TedarikciTelefonuDegisti(const Metin &value);
    void TedarikciYetkiliKisiDegisti(const Metin &value);
public slots:
    void setTedarikciId(const IdTuru &value);
    void setTedarikciAdi(const Metin &value);
    void setTedarikciAdresi(const Metin &value);
    void setTedarikciTelefonu(const Metin &value);
    void setTedarikciYetkiliKisi(const Metin &value);

private:
    IdTuru TedarikciId;
    Metin TedarikciAdi;
    Metin TedarikciAdresi;
    Metin TedarikciTelefonu;
    Metin TedarikciYetkiliKisi;


};

#endif // TKNTEDARIKCI_H
