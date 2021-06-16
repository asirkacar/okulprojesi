#include "tknparcabilgisiyoneticisi.h"
#include <Veri/VeriSiniflari/tknparcabilgileri.h>

TKNparcaBilgisiYoneticisi::TKNparcaBilgisiYoneticisi(QObject *parent) : QObject(parent), TemelVeriYoneticisi<TKNParcaBilgileri, TKNParcaBilgileriPtr>()
{

}

TKNparcaBilgisiYoneticisi::Ptr TKNparcaBilgisiYoneticisi::kopyaOlustur(TKNparcaBilgisiYoneticisi::Ptr kaynak) const
{
    Ptr kopya=yeni();
    kopya->setId(kaynak->getId());
    kopya->setParcaMarkasi(kaynak->getParcaMarkasi());
    kopya->setParcaModeli(kaynak->getParcaModeli());
    kopya->setParcaOzellikleri(kaynak->getParcaOzellikleri());
    kopya->setParcaTuru(kaynak->getParcaTuru());
    kopya->setParcaEvetHayir(kaynak->getParcaEvetHayir());
    kopya->setParcaVarYok(kaynak->getParcaVarYok());
    kopya->setAnakartYapi(kaynak->getAnakartYapi());
    kopya->setSoketTipi(kaynak->getSoketTipi());
    kopya->setAnakartChipseti(kaynak->getAnakartChipseti());
    kopya->setRamTipi(kaynak->getRamTipi());
    kopya->setRamSlotSayisi(kaynak->getRamSlotSayisi());
    kopya->setMaxRamDestegi(kaynak->getMaxRamDestegi());
    kopya->setIkiYuvaSayisi(kaynak->getIkiYuvaSayisi());
    kopya->setUsbUcNoktaSifir(kaynak->getUsbUcNoktaSifir());
    kopya->setUsbIkiNoktaSifir(kaynak->getUsbIkiNoktaSifir());
    kopya->setHdmi(kaynak->getHdmi());
    kopya->setBoyut(kaynak->getBoyut());
    kopya->setGucTuketim(kaynak->getGucTuketim());
    kopya->setVgaSlot(kaynak->getVgaSlot());
    kopya->setIslemciHizi(kaynak->getIslemciHizi());
    kopya->setIslemciCekirdekSayisi(kaynak->getIslemciCekirdekSayisi());
    kopya->setMaxTurboHizi(kaynak->getMaxTurboHizi());
    kopya->setIslemciOnbellek(kaynak->getIslemciOnbellek());
    kopya->setBellekTuru(kaynak->getBellekTuru());
    kopya->setHafizaBusHizi(kaynak->getHafizaBusHizi());
    kopya->setRamKapasitesi(kaynak->getRamKapasitesi());
    kopya->setGecikmeSuresi(kaynak->getGecikmeSuresi());
    kopya->setDiskKapasitesi(kaynak->getDiskKapasitesi());
    kopya->setHddOnBellek(kaynak->getHddOnBellek());
    kopya->setHddDonusHizi(kaynak->getHddDonusHizi());
    kopya->setKasaYapi(kaynak->getKasaYapi());
    kopya->setGucKaynagi(kaynak->getGucKaynagi());
    kopya->setDahiliFanSayisi(kaynak->getDahiliFanSayisi());
    kopya->setFanYuvaSayisi(kaynak->getFanYuvaSayisi());
    kopya->setEkranKartiDestekMax(kaynak->getEkranKartiDestekMax());
    kopya->setCpuSogutucuYukseklik(kaynak->getCpuSogutucuYukseklik());
    kopya->setKasaYuvaSayisiIkiBucuk(kaynak->getKasaYuvaSayisiIkiBucuk());
    kopya->setKasaYuvaSayisiUcBucuk(kaynak->getKasaYuvaSayisiUcBucuk());
    kopya->setUsbSayisi(kaynak->getUsbSayisi());
    kopya->setKasaBoyut(kaynak->getKasaBoyut());
    kopya->setBellekTipi(kaynak->getBellekTipi());
    kopya->setBellekKapasitesi(kaynak->getBellekKapasitesi());
    kopya->setBellekHizi(kaynak->getBellekHizi());
    kopya->setCekirdekHizi(kaynak->getCekirdekHizi());
    kopya->setMonitorTipi(kaynak->getMonitorTipi());
    kopya->setMonitorBaglantisi(kaynak->getMonitorBaglantisi());
    kopya->setYenilemeHizi(kaynak->getYenilemeHizi());
    kopya->setCozunurluk(kaynak->getCozunurluk());
    kopya->setIzlemeAcisi(kaynak->getIzlemeAcisi());
    kopya->setKlavyeDuzeni(kaynak->getKlavyeDuzeni());
    kopya->setKlavyeBaglantisi(kaynak->getKlavyeBaglantisi());
    kopya->setBaglantiOzellikleri(kaynak->getBaglantiOzellikleri());
    kopya->setDpi(kaynak->getDpi());
    kopya->setMouseTipi(kaynak->getMouseTipi());
    return kopya;
}
QDataStream &operator<<(QDataStream &a, const TKNparcaBilgisiYoneticisi &b){
    a<<b.enSonId<<b.veriler;
    return a;
}

