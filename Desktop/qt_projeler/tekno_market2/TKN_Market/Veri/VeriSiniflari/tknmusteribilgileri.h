#ifndef TKNMUSTERIBILGILERI_H
#define TKNMUSTERIBILGILERI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TKNMusteriBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit TKNMusteriBilgileri(QObject *parent = nullptr);

    IdTuru getMusteriId() const;

    Metin getMusteriAdi() const;

    Metin getMusteriAdresi() const;

    Metin getMusteriTelefonu() const;

signals:
    void MusteriIdDegisti(const IdTuru &value);
    void MusteriAdiDegisti(const Metin &value);
    void MusteriAdresiDegisti(const Metin &value);
    void MusteriTelefonuDegisti(const Metin &value);
public slots:
    void setMusteriId(const IdTuru &value);
    void setMusteriAdi(const Metin &value);
    void setMusteriAdresi(const Metin &value);
    void setMusteriTelefonu(const Metin &value);
private:
    IdTuru musteriId;
    Metin musteriAdi;
    Metin musteriAdresi;
    Metin musteriTelefonu;

};

#endif // TKNMUSTERIBILGILERI_H
