#ifndef TKNMUSTERIBILGILERI_H
#define TKNMUSTERIBILGILERI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TKNMusteriBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit TKNMusteriBilgileri(QObject *parent = nullptr);
    Q_PROPERTY(IdTuru id READ getId WRITE setId NOTIFY idDegisti)
    Q_PROPERTY(Metin musteriAdi READ getMusteriAdi WRITE setMusteriAdi NOTIFY MusteriAdiDegisti)
    Q_PROPERTY(Metin musteriAdresi READ getMusteriAdresi WRITE setMusteriAdresi NOTIFY MusteriAdresiDegisti)
    Q_PROPERTY(Metin musteriTelefonu READ getMusteriTelefonu WRITE setMusteriTelefonu NOTIFY MusteriTelefonuDegisti)

    IdTuru getId() const;
    Metin getMusteriAdi() const;
    Metin getMusteriAdresi() const;
    Metin getMusteriTelefonu() const;

signals:
    void idDegisti(const IdTuru &value);
    void MusteriAdiDegisti(const Metin &value);
    void MusteriAdresiDegisti(const Metin &value);
    void MusteriTelefonuDegisti(const Metin &value);
public slots:
    void setId(const IdTuru &value);
    void setMusteriAdi(const Metin &value);
    void setMusteriAdresi(const Metin &value);
    void setMusteriTelefonu(const Metin &value);
private:
    IdTuru musteriId;
    Metin musteriAdi;
    Metin musteriAdresi;
    Metin musteriTelefonu;

};
QDataStream &operator<<(QDataStream &stream, TKNMusteriBilgileriPtr &veri);
QDataStream &operator>>(QDataStream &stream, TKNMusteriBilgileriPtr &veri);
#endif // TKNMUSTERIBILGILERI_H
