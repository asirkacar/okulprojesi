#ifndef TKNSATISBILGILERI_H
#define TKNSATISBILGILERI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TKNSatisBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit TKNSatisBilgileri(QObject *parent = nullptr);

    IdTuru getParcaSatisBilgiId() const;

    ReelSayi getParcaSatisMiktari() const;

    ParaBirimi getBirimFiyat() const;

    ParaBirimi getToplamFiyat() const;

signals:
    void ParcaSatisBilgiIdDegisti(const IdTuru &value);
    void ParcaSatisMiktariDegisti(const ReelSayi &value);
    void BirimFiyatDegisti(const ParaBirimi &value);
public slots:
    void setParcaSatisBilgiId(const IdTuru &value);
    void setParcaSatisMiktari(const ReelSayi &value);
    void setBirimFiyat(const ParaBirimi &value);
private:
    IdTuru parcaSatisBilgiId;
    ReelSayi parcaSatisMiktari;
    ParaBirimi birimFiyat;

};

#endif // TKNSATISBILGILERI_H
