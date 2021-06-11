#ifndef TKNMUSTERIBILGILERIYONETICISI_H
#define TKNMUSTERIBILGILERIYONETICISI_H

#include <QObject>
#include <Veri/tanimlar.h>
#include <Veri/VeriYoneticileri/temel_veri_yoneticisi.h>

class TKNMusteriBilgileriYoneticisi : public QObject, public TemelVeriYoneticisi<TKNMusteriBilgileri, TKNMusteriBilgileriPtr>
{
    Q_OBJECT
public:
    explicit TKNMusteriBilgileriYoneticisi(QObject *parent = nullptr);

    Ptr kopyaOlustur(Ptr kaynak) const;

signals:
private:
    friend QDataStream &operator<<(QDataStream &a, const TKNMusteriBilgileriYoneticisi &b);

};
QDataStream &operator<<(QDataStream &a, const TKNMusteriBilgileriYoneticisi &b);
#endif // TKNMUSTERIBILGILERIYONETICISI_H
