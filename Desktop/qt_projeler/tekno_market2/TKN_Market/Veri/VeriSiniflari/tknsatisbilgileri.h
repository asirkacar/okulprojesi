#ifndef TKNSATISBILGILERI_H
#define TKNSATISBILGILERI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TKNSatisBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit TKNSatisBilgileri(QObject *parent = nullptr);
    Q_PROPERTY(IdTuru id READ getId WRITE setId NOTIFY idDegisti)
    Q_PROPERTY(ReelSayi parcaSatisMiktari READ getParcaSatisMiktari WRITE setParcaSatisMiktari NOTIFY ParcaSatisMiktariDegisti)
    Q_PROPERTY(ParaBirimi birimFiyat READ getBirimFiyat WRITE setBirimFiyat NOTIFY BirimFiyatDegisti)
    Q_PROPERTY(ParaBirimi toplamFiyat READ getToplamFiyat)

    IdTuru getId() const;
    ReelSayi getParcaSatisMiktari() const;
    ParaBirimi getBirimFiyat() const;
    ParaBirimi getToplamFiyat() const;

signals:
    void idDegisti(const IdTuru &value);
    void ParcaSatisMiktariDegisti(const ReelSayi &value);
    void BirimFiyatDegisti(const ParaBirimi &value);
public slots:
    void setId(const IdTuru &value);
    void setParcaSatisMiktari(const ReelSayi &value);
    void setBirimFiyat(const ParaBirimi &value);
private:
    IdTuru parcaSatisBilgiId;
    ReelSayi parcaSatisMiktari;
    ParaBirimi birimFiyat;

};
QDataStream &operator<<(QDataStream &stream, const TKNSatisBilgileriPtr &veri);
QDataStream &operator>>(QDataStream &stream, TKNSatisBilgileriPtr &veri);

#endif // TKNSATISBILGILERI_H
