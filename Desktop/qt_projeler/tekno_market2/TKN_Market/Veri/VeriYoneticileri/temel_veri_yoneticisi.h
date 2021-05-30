#ifndef TEMEL_VERI_YONETICISI_H
#define TEMEL_VERI_YONETICISI_H
#include <Veri/tanimlar.h>
#include <QObject>

template <class V, class P>
class TemelVeriYoneticisi{
public:
    typedef V Veri;
    typedef P Ptr;
    typedef QList<Ptr> Verilistesi ;
    typedef std::function<bool(Ptr)> Sart;

    explicit TemelVeriYoneticisi(){
        enSonId=0;

    }

    //Yeni parça oluşturma
    Ptr yeni() const
    {
        Ptr yeni=std::make_shared<Veri>();
        return yeni;
    }

    //Listeye yeni Parça ekleme
    void ekle(Ptr parca)
    {
        //ParcaId=0 , enSonId=0
        parca->setID(enSonId++); //ilacId=0, enSonId=1 olur ++ solda olsaydı(++enSonId) parcaıd=1 ensonıd=0 olcak ordaki
                                       //yazan işlemden sonrakini 1 artırıyo yani artılardan önce ne yazıyosa onu artırıyo
                                        //(parcaıd++ensonıd) olsaydı parcaıd=1 olurdu gibi
        veriler.append(parca);
    }

    //Listeden parca Silme
    Ptr sil(IdTuru ParcaID)//hem id göndermeyle
    {
        for(int i=0; i<veriler.size(); i++)
        {
            if(veriler[i]->getID()==ParcaID)
            {
                Ptr sonuc=veriler.takeAt(i);
                return sonuc;
            }
        }
        throw QObject::tr("Aranılan parça bulunamadı arama iptal edildi");

    }
    Ptr sil(Ptr Parca)//hem ptr adını göndermeyle de kaydeder
    {
        return sil(Parca->getID());
    }

    //Parca Arama
    Ptr ilkiniBul(Sart f)
    {
        //1. Yol
        //for(int i=0; i<veriler.size(); i++)
        //{
         //   Ptr veri_i=veriler[i];
       //     if(f(veri_i))
         //   {
         //       return veri_i;
        //    }
       // }
       // throw tr("Aranılan Veri Bulunamadı");

        //2. Yol
        for(auto i=veriler.begin(); i !=veriler.end(); i++)
        {
            Ptr veri_i=*i;
            if(f(veri_i))
            {
                return veri_i;
            }
        }
        throw QObject::tr("Aranılan Veri Bulunamadı");

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
    Ptr sonuncuyuBul(Sart f){
        //1. Yol
        for(int i=veriler.size()-1; i>=0; i--)
        {
            Ptr veri_i=veriler[i];
            if(f(veri_i))
            {
                return veri_i;
            }
        }
        throw QObject::tr("Aranılan Veri Bulunamadı");

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
    Verilistesi tumunuBul(Sart f){
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
protected:
    Verilistesi veriler;

    IdTuru enSonId;
};

#endif // TEMEL_VERI_YONETICISI_H
