#ifndef TKNGENELVERIYONETICISI_H
#define TKNGENELVERIYONETICISI_H

#include <QObject>
#include <Veri/VeriYoneticileri/tknalisfaturasiyoneticisi.h>
#include <Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.h>
#include <Veri/VeriYoneticileri/tknmusteribilgileriyoneticisi.h>



class TKNGenelVeriYoneticisi : public QObject
{
    Q_OBJECT
private:
    explicit TKNGenelVeriYoneticisi(QObject *parent = nullptr);
public:
    static TKNGenelVeriYoneticisi &sec();


    TKNAlisFaturasiYoneticisi &getAlisFaturalari();
    TKNparcaBilgisiYoneticisi &getParcaBilgisi();
    TKNMusteriBilgileriYoneticisi &getMusteriBilgileri();

signals:
private:
    TKNAlisFaturasiYoneticisi alisFaturalari;
    TKNparcaBilgisiYoneticisi parcaBilgisi;
    TKNMusteriBilgileriYoneticisi musteriBilgileri;
    friend QDataStream &operator<<(QDataStream &a, const TKNGenelVeriYoneticisi &b);
    friend QDataStream &operator>>(QDataStream &a, TKNGenelVeriYoneticisi &b);
};
QDataStream &operator<<(QDataStream &a, const TKNGenelVeriYoneticisi &b);
QDataStream &operator>>(QDataStream &a, TKNGenelVeriYoneticisi &b);
#endif // TKNGENELVERIYONETICISI_H
