#ifndef TKNALISBILGILERI_H
#define TKNALISBILGILERI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TKNAlisBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit TKNAlisBilgileri(QObject *parent = nullptr);
    Q_PROPERTY(IdTuru id READ getId WRITE setId NOTIFY IdDegisti)
    Q_PROPERTY(ReelSayi parcaAlisMiktari READ getParcaAlisMiktari WRITE setParcaAlisMiktari NOTIFY ParcaAlisMiktariDegisti)
    Q_PROPERTY(ParaBirimi birimFiyat READ getBirimFiyat WRITE setBirimFiyat NOTIFY BirimFiyatDegisti)
    Q_PROPERTY(ParaBirimi toplam READ getToplam)

    IdTuru getId() const;
    ReelSayi getParcaAlisMiktari() const;
    ParaBirimi getBirimFiyat() const;
    ParaBirimi getToplam() const;

signals:
    void IdDegisti(const IdTuru &value);
    void ParcaAlisMiktariDegisti(const ReelSayi &value);
    void BirimFiyatDegisti(const ParaBirimi &value);
public slots:
    void setId(const IdTuru &value);
    void setParcaAlisMiktari(const ReelSayi &value);
    void setBirimFiyat(const ParaBirimi &value);

private:
    IdTuru parcaAlisId;
    ReelSayi parcaAlisMiktari;
    ParaBirimi birimFiyat;


};

#endif // TKNALISBILGILERI_H
