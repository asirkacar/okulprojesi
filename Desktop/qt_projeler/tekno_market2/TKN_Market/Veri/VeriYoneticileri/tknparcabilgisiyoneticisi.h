#ifndef TKNPARCABILGISIYONETICISI_H
#define TKNPARCABILGISIYONETICISI_H

#include <QObject>
#include <Veri/tanimlar.h>
#include <QList>
#include <functional>

class TKNparcaBilgisiYoneticisi : public QObject
{
    Q_OBJECT
public:
    typedef TKNParcaBilgileri Veri;
    typedef TKNParcaBilgileriPtr Ptr;
    typedef QList<Ptr> Verilistesi ;
    typedef std::function<bool(Ptr)> Sart;

    explicit TKNparcaBilgisiYoneticisi(QObject *parent = nullptr);

    //Yeni parça oluşturma
    Ptr yeni() const;

    //Listeye yeni Parça ekleme
    void ekle(Ptr parca);

    //Listeden parca Silme
    Ptr sil(IdTuru ParcaID);//hem id göndermeyle
    Ptr sil(Ptr Parca);//hem ptr adını göndermeyle de kaydeder

    //Kopya oluşturma
    Ptr kopyaOlustur(Ptr kaynak) const;

    //Parca Arama
    Ptr ilkiniBul(Sart f);
    Ptr sonuncuyuBul(Sart f);
    Verilistesi tumunuBul(Sart f);

signals:
private:
    Verilistesi veriler;

    IdTuru enSonId;

};

#endif // TKNPARCABILGISIYONETICISI_H
