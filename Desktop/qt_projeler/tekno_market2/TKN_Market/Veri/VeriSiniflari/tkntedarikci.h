#ifndef TKNTEDARIKCI_H
#define TKNTEDARIKCI_H

#include <QObject>
#include <Veri/tanimlar.h>
class TKNTedarikci : public QObject
{
    Q_OBJECT
public:
    explicit TKNTedarikci(QObject *parent = nullptr);
    Q_PROPERTY(IdTuru id READ getId WRITE setId NOTIFY idDegisti)
    Q_PROPERTY(Metin TedarikciAdi READ getTedarikciAdi WRITE setTedarikciAdi NOTIFY TedarikciAdiDegisti)
    Q_PROPERTY(Metin TedarikciAdresi READ getTedarikciAdresi WRITE setTedarikciAdresi NOTIFY TedarikciAdresiDegisti)
    Q_PROPERTY(Metin TedarikciTelefonu READ getTedarikciTelefonu WRITE setTedarikciTelefonu NOTIFY TedarikciTelefonuDegisti)
    Q_PROPERTY(Metin TedarikciYetkiliKisi READ getTedarikciYetkiliKisi WRITE setTedarikciYetkiliKisi NOTIFY TedarikciYetkiliKisiDegisti)

    IdTuru getId() const;
    Metin getTedarikciAdi() const;
    Metin getTedarikciAdresi() const;
    Metin getTedarikciTelefonu() const;
    Metin getTedarikciYetkiliKisi() const;

signals:
    void idDegisti(const IdTuru &value);
    void TedarikciAdiDegisti(const Metin &value);
    void TedarikciAdresiDegisti(const Metin &value);
    void TedarikciTelefonuDegisti(const Metin &value);
    void TedarikciYetkiliKisiDegisti(const Metin &value);
public slots:
    void setId(const IdTuru &value);
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
