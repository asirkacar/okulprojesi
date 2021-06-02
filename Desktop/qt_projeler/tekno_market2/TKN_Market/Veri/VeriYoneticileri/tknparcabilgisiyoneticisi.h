#ifndef TKNPARCABILGISIYONETICISI_H
#define TKNPARCABILGISIYONETICISI_H

#include <QObject>
#include <Veri/tanimlar.h>
#include <Veri/VeriYoneticileri/temel_veri_yoneticisi.h>

class TKNparcaBilgisiYoneticisi : public QObject , public TemelVeriYoneticisi<TKNParcaBilgileri, TKNParcaBilgileriPtr>
{
    Q_OBJECT
public:


    explicit TKNparcaBilgisiYoneticisi(QObject *parent = nullptr);


    //Kopya oluşturma
    Ptr kopyaOlustur(Ptr kaynak) const;



signals:
private:
    friend QDataStream &operator<<(QDataStream &a, TKNparcaBilgisiYoneticisi &b);


};
QDataStream &operator<<(QDataStream &a, TKNparcaBilgisiYoneticisi &b);

#endif // TKNPARCABILGISIYONETICISI_H
