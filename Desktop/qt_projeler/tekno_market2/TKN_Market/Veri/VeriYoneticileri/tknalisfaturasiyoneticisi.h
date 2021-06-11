#ifndef TKNALISFATURASIYONETICISI_H
#define TKNALISFATURASIYONETICISI_H

#include <QObject>
#include <Veri/tanimlar.h>
#include <Veri/VeriYoneticileri/temel_veri_yoneticisi.h>

class TKNAlisFaturasiYoneticisi : public QObject, public TemelVeriYoneticisi<TKNAlisFatura, TKNAlisFaturaPtr>
{
    Q_OBJECT
public:
    explicit TKNAlisFaturasiYoneticisi(QObject *parent = nullptr);
    //Kopya oluşturma
    Ptr kopyaOlustur(Ptr kaynak) const;

signals:
private:
    friend QDataStream &operator<<(QDataStream &a, const TKNAlisFaturasiYoneticisi &b);

};
QDataStream &operator<<(QDataStream &a, const TKNAlisFaturasiYoneticisi &b);

#endif // TKNALISFATURASIYONETICISI_H
