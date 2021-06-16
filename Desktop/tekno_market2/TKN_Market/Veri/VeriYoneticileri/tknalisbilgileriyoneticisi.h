#ifndef TKNALISBILGILERIYONETICISI_H
#define TKNALISBILGILERIYONETICISI_H

#include <QObject>
#include <Veri/VeriYoneticileri/temel_veri_yoneticisi.h>
#include <Veri/tanimlar.h>

class TKNAlisBilgileriYoneticisi : public QObject, public TemelVeriYoneticisi<TKNAlisBilgileri, TKNAlisBilgileriPtr>
{
    Q_OBJECT
public:
    explicit TKNAlisBilgileriYoneticisi(QObject *parent = nullptr);
    Ptr kopyaOlustur(Ptr kaynak) const;

signals:
private:
    friend QDataStream &operator<<(QDataStream &a, const TKNAlisBilgileriYoneticisi &b);

};
QDataStream &operator<<(QDataStream &a, const TKNAlisBilgileriYoneticisi &b);
#endif // TKNALISBILGILERIYONETICISI_H
