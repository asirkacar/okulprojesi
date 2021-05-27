#ifndef TKNALISBILGILERI_H
#define TKNALISBILGILERI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TKNAlisBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit TKNAlisBilgileri(QObject *parent = nullptr);

    IdTuru getParcaAlisId() const;

    ReelSayi getParcaAlisMiktari() const;

    ParaBirimi getBirimFiyat() const;

    ParaBirimi getToplam() const;

signals:
    void ParcaAlisIdDegisti(const IdTuru &value);
    void ParcaAlisMiktariDegisti(const ReelSayi &value);
    void BirimFiyatDegisti(const ParaBirimi &value);
public slots:
    void setParcaAlisId(const IdTuru &value);
    void setParcaAlisMiktari(const ReelSayi &value);
    void setBirimFiyat(const ParaBirimi &value);

private:
    IdTuru parcaAlisId;
    ReelSayi parcaAlisMiktari;
    ParaBirimi birimFiyat;


};

#endif // TKNALISBILGILERI_H
