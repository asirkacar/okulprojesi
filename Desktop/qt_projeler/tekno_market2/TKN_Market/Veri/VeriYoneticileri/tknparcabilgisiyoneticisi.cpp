#include "tknparcabilgisiyoneticisi.h"
#include <Veri/VeriSiniflari/tknparcabilgileri.h>

TKNparcaBilgisiYoneticisi::TKNparcaBilgisiYoneticisi(QObject *parent) : QObject(parent)
{
    enSonId=0;
}

TKNparcaBilgisiYoneticisi::Ptr TKNparcaBilgisiYoneticisi::yeni() const
{
    Ptr yeni=std::make_shared<TKNParcaBilgileri>();
    return yeni;
}

void TKNparcaBilgisiYoneticisi::ekle(TKNparcaBilgisiYoneticisi::Ptr parca)
{
    //ParcaId=0 , enSonId=0
    parca->setParcaID(enSonId++); //ilacId=0, enSonId=1 olur ++ solda olsaydı(++enSonId) parcaıd=1 ensonıd=0 olcak ordaki
                                   //yazan işlemden sonrakini 1 artırıyo yani artılardan önce ne yazıyosa onu artırıyo
                                    //(parcaıd++ensonıd) olsaydı parcaıd=1 olurdu gibi
    veriler.append(parca);
}

TKNparcaBilgisiYoneticisi::Ptr TKNparcaBilgisiYoneticisi::sil(IdTuru ParcaID)
{
    for(int i=0; i<veriler.size(); i++)
    {
        if(veriler[i]->getParcaID()==ParcaID)
        {
            Ptr sonuc=veriler.takeAt(i);
            return sonuc;
        }
    }
    throw tr("Aranılan parça bulunamadı arama iptal edildi");
}

TKNparcaBilgisiYoneticisi::Ptr TKNparcaBilgisiYoneticisi::sil(TKNparcaBilgisiYoneticisi::Ptr Parca)
{
    return sil(Parca->getParcaID());
}

TKNparcaBilgisiYoneticisi::Ptr TKNparcaBilgisiYoneticisi::kopyaOlustur(TKNparcaBilgisiYoneticisi::Ptr kaynak) const
{
    Ptr kopya=yeni();
    kopya->setParcaID(kaynak->getParcaID());
    kopya->setParcaMarkasi(kaynak->getParcaMarkasi());
    kopya->setParcaModeli(kaynak->getParcaModeli());
    kopya->setParcaOzellikleri(kaynak->getParcaOzellikleri());
    kopya->setParcaTuru(kaynak->getParcaTuru());
    return kopya;
}

TKNparcaBilgisiYoneticisi::Ptr TKNparcaBilgisiYoneticisi::ilkiniBul(TKNparcaBilgisiYoneticisi::Sart f)
{
    //1. Yol
    for(int i=0; i<veriler.size(); i++)
    {
        Ptr veri_i=veriler[i];
        if(f(veri_i))
        {
            return veri_i;
        }
    }
    throw tr("Aranılan Veri Bulunamadı");

    //2. Yol
    //for(auto i=veriler.begin(); i !=veriler.end(); i++)
    //{
    //    Ptr veri_i=*i;
    //    if(f(veri_i))
    //    {
    //        return veri_i;
    //    }
    //}
    //throw tr("Aranılan Veri Bulunamadı");

    //3. Yol
    //for(Ptr veri_i: qAsConst(veriler))
    //{
    //    if(f(veri_i))
    //    {
    //        return veri_i;
    //    }
    //}
    //throw tr("Aranılan Veri Bulunamadı");
}

TKNparcaBilgisiYoneticisi::Ptr TKNparcaBilgisiYoneticisi::sonuncuyuBul(TKNparcaBilgisiYoneticisi::Sart f)
{
    //1. Yol
    for(int i=veriler.size()-1; i>=0; i--)
    {
        Ptr veri_i=veriler[i];
        if(f(veri_i))
        {
            return veri_i;
        }
    }
    throw tr("Aranılan Veri Bulunamadı");

    //2. Yol
    //for(auto i=veriler.rbegin(); i !=veriler.rend(); i++)
    //{
    //    Ptr veri_i=*i;
    //    if(f(veri_i))
    //    {
    //        return veri_i;
    //    }
    //}
    //throw tr("Aranılan Veri Bulunamadı");
}

TKNparcaBilgisiYoneticisi::Verilistesi TKNparcaBilgisiYoneticisi::tumunuBul(TKNparcaBilgisiYoneticisi::Sart f)
{
    Verilistesi sonuc;
    //1. Yol
    for(int i=0; i<veriler.size(); i++)
    {
        Ptr veri_i=veriler[i];
        if(f(veri_i))
        {
            sonuc.append(veri_i);
        }
    }
    return sonuc;
}
