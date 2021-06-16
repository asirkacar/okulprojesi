#ifndef TKNTEDARIKCIYONETICI_H
#define TKNTEDARIKCIYONETICI_H

#include <QObject>
#include <Veri/tanimlar.h>
#include <Veri/VeriYoneticileri/temel_veri_yoneticisi.h>

class TKNTedarikciYonetici : public QObject, public TemelVeriYoneticisi<TKNTedarikci, TKNTedarikciPtr>
{
    Q_OBJECT
public:
    explicit TKNTedarikciYonetici(QObject *parent = nullptr);
    Ptr kopyaOlustur(Ptr kaynak) const;

signals:
private:
    friend QDataStream &operator<<(QDataStream &a, const TKNTedarikciYonetici &b);

};
QDataStream &operator<<(QDataStream &a, const TKNTedarikciYonetici &b);

#endif // TKNTEDARIKCIYONETICI_H
