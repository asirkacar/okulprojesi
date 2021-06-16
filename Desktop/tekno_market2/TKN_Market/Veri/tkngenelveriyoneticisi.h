#ifndef TKNGENELVERIYONETICISI_H
#define TKNGENELVERIYONETICISI_H

#include <QObject>
#include <Veri/VeriYoneticileri/tknalisfaturasiyoneticisi.h>
#include <Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.h>
#include <Veri/VeriYoneticileri/tknmusteribilgileriyoneticisi.h>
#include <Veri/VeriYoneticileri/tknalisbilgileriyoneticisi.h>
#include <Veri/VeriYoneticileri/tkntedarikciyonetici.h>



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
    TKNAlisBilgileriYoneticisi &getParcaAlis();
    TKNTedarikciYonetici &getTedarikci();

signals:
private:
    TKNAlisFaturasiYoneticisi alisFaturalari;
    TKNparcaBilgisiYoneticisi parcaBilgisi;
    TKNMusteriBilgileriYoneticisi musteriBilgileri;
    TKNAlisBilgileriYoneticisi parcaAlis;
    TKNTedarikciYonetici tedarikci;

    friend QDataStream &operator<<(QDataStream &a, const TKNGenelVeriYoneticisi &b);
    friend QDataStream &operator>>(QDataStream &a, TKNGenelVeriYoneticisi &b);
};
QDataStream &operator<<(QDataStream &a, const TKNGenelVeriYoneticisi &b);
QDataStream &operator>>(QDataStream &a, TKNGenelVeriYoneticisi &b);
#endif // TKNGENELVERIYONETICISI_H
