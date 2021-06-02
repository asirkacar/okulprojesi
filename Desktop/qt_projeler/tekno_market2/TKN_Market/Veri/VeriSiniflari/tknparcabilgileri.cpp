#include "tknparcabilgileri.h"
#include <QDataStream>

TKNParcaBilgileri::TKNParcaBilgileri(QObject *parent) : QObject(parent)
{

}

IdTuru TKNParcaBilgileri::getID() const
{
    return ParcaID;
}

void TKNParcaBilgileri::setID(const IdTuru &value)
{
    if(value==ParcaID)
        return;
    ParcaID = value;
    emit IDDegisti(ParcaID);
}

Metin TKNParcaBilgileri::getParcaMarkasi() const
{
    return ParcaMarkasi;
}

void TKNParcaBilgileri::setParcaMarkasi(const Metin &value)
{
    if(value==ParcaMarkasi)
        return;
    ParcaMarkasi = value;
    emit ParcaMarkasiDegisti(ParcaMarkasi);
}

Metin TKNParcaBilgileri::getParcaModeli() const
{
    return ParcaModeli;
}

void TKNParcaBilgileri::setParcaModeli(const Metin &value)
{
    if(value==ParcaModeli)
        return;
    ParcaModeli = value;
    emit ParcaModeliDegisti(ParcaModeli);
}

ParcaTuru TKNParcaBilgileri::getParcaTuru() const
{
    return parcaTuru;
}

void TKNParcaBilgileri::setParcaTuru(const ParcaTuru &value)
{
    if(value==parcaTuru)
        return;
    parcaTuru = value;
    emit ParcaTuruDegisti(parcaTuru);
}

Metin TKNParcaBilgileri::getParcaOzellikleri() const
{
    return ParcaOzellikleri;
}

void TKNParcaBilgileri::setParcaOzellikleri(const Metin &value)
{
    if(value==ParcaOzellikleri)
        return;
    ParcaOzellikleri = value;
    emit ParcaOzellikleriDegisti(ParcaOzellikleri);
}

Metin TKNParcaBilgileri::getMouseTipi() const
{
    return mouseTipi;
}

void TKNParcaBilgileri::setMouseTipi(const Metin &value)
{
    if(value==mouseTipi)
        return;
    mouseTipi = value;
    emit MouseTipiDegisti(mouseTipi);
}

ParcaVarYok TKNParcaBilgileri::getParcaVarYok() const
{
    return parcaVarYok;
}

void TKNParcaBilgileri::setParcaVarYok(const ParcaVarYok &value)
{
    if(value==parcaVarYok)
        return;
    parcaVarYok = value;
    emit ParcaVarYokDegisti(parcaVarYok);
}

Metin TKNParcaBilgileri::getDpi() const
{
    return dpi;
}

void TKNParcaBilgileri::setDpi(const Metin &value)
{
    if(value==dpi)
        return;
    dpi = value;
    emit DpiDegisti(dpi);
}

Metin TKNParcaBilgileri::getBaglantiOzellikleri() const
{
    return baglantiOzellikleri;
}

void TKNParcaBilgileri::setBaglantiOzellikleri(const Metin &value)
{
    if(value==baglantiOzellikleri)
        return;
    baglantiOzellikleri = value;
    emit BaglantiOzellikleriDegisti(baglantiOzellikleri);
}

Metin TKNParcaBilgileri::getKlavyeBaglantisi() const
{
    return klavyeBaglantisi;
}

void TKNParcaBilgileri::setKlavyeBaglantisi(const Metin &value)
{
    if(value==klavyeBaglantisi)
        return;
    klavyeBaglantisi = value;
    emit KlavyeBaglantisiDegisti(klavyeBaglantisi);
}

Metin TKNParcaBilgileri::getKlavyeDuzeni() const
{
    return klavyeDuzeni;
}

void TKNParcaBilgileri::setKlavyeDuzeni(const Metin &value)
{
    if(value==klavyeDuzeni)
        return;
    klavyeDuzeni = value;
    emit KlavyeDuzeniDegisti(klavyeDuzeni);
}

Metin TKNParcaBilgileri::getIzlemeAcisi() const
{
    return izlemeAcisi;
}

void TKNParcaBilgileri::setIzlemeAcisi(const Metin &value)
{
    if(value==izlemeAcisi)
        return;
    izlemeAcisi = value;
    emit IzlemeAcisiDegisti(izlemeAcisi);
}

Metin TKNParcaBilgileri::getCozunurluk() const
{
    return cozunurluk;
}

void TKNParcaBilgileri::setCozunurluk(const Metin &value)
{
    if(value==cozunurluk)
        return;
    cozunurluk = value;
    emit CozunurlukDegisti(cozunurluk);
}

Metin TKNParcaBilgileri::getYenilemeHizi() const
{
    return yenilemeHizi;
}

void TKNParcaBilgileri::setYenilemeHizi(const Metin &value)
{
    if(value==yenilemeHizi)
        return;
    yenilemeHizi = value;
    emit YenilemeHiziDegisti(yenilemeHizi);
}

Metin TKNParcaBilgileri::getMonitorBaglantisi() const
{
    return monitorBaglantisi;
}

void TKNParcaBilgileri::setMonitorBaglantisi(const Metin &value)
{
    if(value==monitorBaglantisi)
        return;
    monitorBaglantisi = value;
    emit MonitorBaglantisiDegisti(monitorBaglantisi);
}

Metin TKNParcaBilgileri::getMonitorTipi() const
{
    return monitorTipi;
}

void TKNParcaBilgileri::setMonitorTipi(const Metin &value)
{
    if(value==monitorTipi)
        return;
    monitorTipi = value;
    emit MonitorTipiDegisti(monitorTipi);
}

Metin TKNParcaBilgileri::getCekirdekHizi() const
{
    return cekirdekHizi;
}

void TKNParcaBilgileri::setCekirdekHizi(const Metin &value)
{
    if(value==cekirdekHizi)
        return;
    cekirdekHizi = value;
    emit CekirdekHiziDegisti(cekirdekHizi);
}

Metin TKNParcaBilgileri::getBellekHizi() const
{
    return bellekHizi;
}

void TKNParcaBilgileri::setBellekHizi(const Metin &value)
{
    if(value==bellekHizi)
        return;
    bellekHizi = value;
    emit BellekHiziDegisti(bellekHizi);
}

Metin TKNParcaBilgileri::getBellekKapasitesi() const
{
    return bellekKapasitesi;
}

void TKNParcaBilgileri::setBellekKapasitesi(const Metin &value)
{
    if(value==bellekKapasitesi)
        return;
    bellekKapasitesi = value;
    emit BellekKapasitesiDegisti(bellekKapasitesi);
}

Metin TKNParcaBilgileri::getBellekTipi() const
{
    return bellekTipi;
}

void TKNParcaBilgileri::setBellekTipi(const Metin &value)
{
    if(value==bellekTipi)
        return;
    bellekTipi = value;
    emit BellekTipiDegisti(bellekTipi);
}

Metin TKNParcaBilgileri::getKasaBoyut() const
{
    return kasaBoyut;
}

void TKNParcaBilgileri::setKasaBoyut(const Metin &value)
{
    if(value==kasaBoyut)
        return;
    kasaBoyut = value;
    emit KasaBoyutDegisti(kasaBoyut);
}

Metin TKNParcaBilgileri::getUsbSayisi() const
{
    return usbSayisi;
}

void TKNParcaBilgileri::setUsbSayisi(const Metin &value)
{
    if(value==usbSayisi)
        return;
    usbSayisi = value;
    emit UsbSayisiDegisti(usbSayisi);
}

Metin TKNParcaBilgileri::getKasaYuvaSayisiIkiBucuk() const
{
    return kasaYuvaSayisiIkiBucuk;
}

void TKNParcaBilgileri::setKasaYuvaSayisiIkiBucuk(const Metin &value)
{
    if(value==kasaYuvaSayisiIkiBucuk)
        return;
    kasaYuvaSayisiIkiBucuk = value;
    emit KasaYuvaSayisiIkiBucukDegisti(kasaYuvaSayisiIkiBucuk);
}

Metin TKNParcaBilgileri::getKasaYuvaSayisiUcBucuk() const
{
    return kasaYuvaSayisiUcBucuk;
}

void TKNParcaBilgileri::setKasaYuvaSayisiUcBucuk(const Metin &value)
{
    if(value==kasaYuvaSayisiUcBucuk)
        return;
    kasaYuvaSayisiUcBucuk = value;
    emit KasaYuvaSayisiUcBucukDegisti(kasaYuvaSayisiUcBucuk);
}

Metin TKNParcaBilgileri::getCpuSogutucuYukseklik() const
{
    return cpuSogutucuYukseklik;
}

void TKNParcaBilgileri::setCpuSogutucuYukseklik(const Metin &value)
{
    if(value==cpuSogutucuYukseklik)
        return;
    cpuSogutucuYukseklik = value;
    emit CpuSogutucuYukseklikDegisti(cpuSogutucuYukseklik);
}

Metin TKNParcaBilgileri::getEkranKartiDestekMax() const
{
    return ekranKartiDestekMax;
}

void TKNParcaBilgileri::setEkranKartiDestekMax(const Metin &value)
{
    if(value==ekranKartiDestekMax)
        return;
    ekranKartiDestekMax = value;
    emit EkranKartiDestekMaxDegisti(ekranKartiDestekMax);
}

Metin TKNParcaBilgileri::getFanYuvaSayisi() const
{
    return fanYuvaSayisi;
}

void TKNParcaBilgileri::setFanYuvaSayisi(const Metin &value)
{
    if(value==fanYuvaSayisi)
        return;
    fanYuvaSayisi = value;
    emit FanYuvaSayisiDegisti(fanYuvaSayisi);
}

Metin TKNParcaBilgileri::getDahiliFanSayisi() const
{
    return dahiliFanSayisi;
}

void TKNParcaBilgileri::setDahiliFanSayisi(const Metin &value)
{
    if(value==dahiliFanSayisi)
        return;
    dahiliFanSayisi = value;
    emit DahiliFanSayisiDegisti(dahiliFanSayisi);
}

Metin TKNParcaBilgileri::getGucKaynagi() const
{
    return gucKaynagi;
}

void TKNParcaBilgileri::setGucKaynagi(const Metin &value)
{
    if(value==gucKaynagi)
        return;
    gucKaynagi = value;
    emit GucKaynagiDegisti(gucKaynagi);
}

Metin TKNParcaBilgileri::getKasaYapi() const
{
    return kasaYapi;
}

void TKNParcaBilgileri::setKasaYapi(const Metin &value)
{
    if(value==kasaYapi)
        return;
    kasaYapi = value;
    emit KasaYapiDegisti(kasaYapi);
}

Metin TKNParcaBilgileri::getHddOnBellek() const
{
    return hddOnBellek;
}

void TKNParcaBilgileri::setHddOnBellek(const Metin &value)
{
    if(value==hddOnBellek)
        return;
    hddOnBellek = value;
    emit HddOnBellekDegisti(hddOnBellek);
}

Metin TKNParcaBilgileri::getHddDonusHizi() const
{
    return hddDonusHizi;
}

void TKNParcaBilgileri::setHddDonusHizi(const Metin &value)
{
    if(value==hddDonusHizi)
        return;
    hddDonusHizi = value;
    emit HddDonusHiziDegisti(hddDonusHizi);
}

Metin TKNParcaBilgileri::getDiskKapasitesi() const
{
    return diskKapasitesi;
}

void TKNParcaBilgileri::setDiskKapasitesi(const Metin &value)
{
    if(value==diskKapasitesi)
        return;
    diskKapasitesi = value;
    emit DiskKapasitesiDegisti(diskKapasitesi);
}

Metin TKNParcaBilgileri::getGecikmeSuresi() const
{
    return gecikmeSuresi;
}

void TKNParcaBilgileri::setGecikmeSuresi(const Metin &value)
{
    if(value==gecikmeSuresi)
        return;
    gecikmeSuresi = value;
    emit GecikmeSuresiDegisti(gecikmeSuresi);
}

Metin TKNParcaBilgileri::getRamKapasitesi() const
{
    return ramKapasitesi;
}

void TKNParcaBilgileri::setRamKapasitesi(const Metin &value)
{
    if(value==ramKapasitesi)
        return;
    ramKapasitesi = value;
    emit RamKapasitesiDegisti(ramKapasitesi);
}

Metin TKNParcaBilgileri::getHafizaBusHizi() const
{
    return hafizaBusHizi;
}

void TKNParcaBilgileri::setHafizaBusHizi(const Metin &value)
{
    if(value==hafizaBusHizi)
        return;
    hafizaBusHizi = value;
    emit HafizaBusHiziDegisti(hafizaBusHizi);
}

Metin TKNParcaBilgileri::getBellekTuru() const
{
    return bellekTuru;
}

void TKNParcaBilgileri::setBellekTuru(const Metin &value)
{
    if(value==bellekTuru)
        return;
    bellekTuru = value;
    emit BellekTuruDegisti(bellekTuru);
}

Metin TKNParcaBilgileri::getIslemciOnbellek() const
{
    return islemciOnbellek;
}

void TKNParcaBilgileri::setIslemciOnbellek(const Metin &value)
{
    if(value==islemciOnbellek)
        return;
    islemciOnbellek = value;
    emit IslemciOnbellekDegisti(islemciOnbellek);
}

Metin TKNParcaBilgileri::getIslemciCekirdekSayisi() const
{
    return islemciCekirdekSayisi;
}

void TKNParcaBilgileri::setIslemciCekirdekSayisi(const Metin &value)
{
    if(value==islemciCekirdekSayisi)
        return;
    islemciCekirdekSayisi = value;
    emit IslemciCekirdekSayisiDegisti(islemciCekirdekSayisi);
}

Metin TKNParcaBilgileri::getMaxTurboHizi() const
{
    return maxTurboHizi;
}

void TKNParcaBilgileri::setMaxTurboHizi(const Metin &value)
{
    if(value==maxTurboHizi)
        return;
    maxTurboHizi = value;
    emit MaxTurboHiziDegisti(maxTurboHizi);
}

Metin TKNParcaBilgileri::getIslemciHizi() const
{
    return islemciHizi;
}

void TKNParcaBilgileri::setIslemciHizi(const Metin &value)
{
    if(value==islemciHizi)
        return;
    islemciHizi = value;
    emit IslemciHiziDegisti(islemciHizi);
}

Metin TKNParcaBilgileri::getVgaSlot() const
{
    return vgaSlot;
}

void TKNParcaBilgileri::setVgaSlot(const Metin &value)
{
    if(value==vgaSlot)
        return;
    vgaSlot = value;
    emit VgaSlotDegisti(vgaSlot);
}

Metin TKNParcaBilgileri::getGucTuketim() const
{
    return gucTuketim;
}

void TKNParcaBilgileri::setGucTuketim(const Metin &value)
{
    if(value==gucTuketim)
        return;
    gucTuketim = value;
    emit GucTuketimDegisti(gucTuketim);
}

Metin TKNParcaBilgileri::getBoyut() const
{
    return boyut;
}

void TKNParcaBilgileri::setBoyut(const Metin &value)
{
    if(value==boyut)
        return;
    boyut = value;
    emit BoyutDegisti(boyut);
}

Metin TKNParcaBilgileri::getHdmi() const
{
    return hdmi;
}

void TKNParcaBilgileri::setHdmi(const Metin &value)
{
    if(value==hdmi)
        return;
    hdmi = value;
    emit HdmiDegisti(hdmi);
}

Metin TKNParcaBilgileri::getUsbIkiNoktaSifir() const
{
    return usbIkiNoktaSifir;
}

void TKNParcaBilgileri::setUsbIkiNoktaSifir(const Metin &value)
{
    if(value==usbIkiNoktaSifir)
        return;
    usbIkiNoktaSifir = value;
    emit UsbIkiNoktaSifirDegisti(usbIkiNoktaSifir);
}

Metin TKNParcaBilgileri::getUsbUcNoktaSifir() const
{
    return usbUcNoktaSifir;
}

void TKNParcaBilgileri::setUsbUcNoktaSifir(const Metin &value)
{
    if(value==usbUcNoktaSifir)
        return;
    usbUcNoktaSifir = value;
    emit UsbUcNoktaSifirDegisti(usbUcNoktaSifir);
}

Metin TKNParcaBilgileri::getIkiYuvaSayisi() const
{
    return mIkiYuvaSayisi;
}

void TKNParcaBilgileri::setIkiYuvaSayisi(const Metin &ikiYuvaSayisi)
{
    if(ikiYuvaSayisi==mIkiYuvaSayisi){
        return;
    }
    mIkiYuvaSayisi = ikiYuvaSayisi;
    emit IkiYuvaSayisiDegisti(ikiYuvaSayisi);
}

Metin TKNParcaBilgileri::getMaxRamDestegi() const
{
    return maxRamDestegi;
}

void TKNParcaBilgileri::setMaxRamDestegi(const Metin &value)
{
    if(value==maxRamDestegi)
        return;
    maxRamDestegi = value;
    emit MaxRamDestegiDegisti(maxRamDestegi);
}

Metin TKNParcaBilgileri::getRamSlotSayisi() const
{
    return ramSlotSayisi;
}

void TKNParcaBilgileri::setRamSlotSayisi(const Metin &value)
{
    if(value==ramSlotSayisi)
        return;
    ramSlotSayisi = value;
    emit RamSlotSayisiDegisti(ramSlotSayisi);
}

Metin TKNParcaBilgileri::getRamTipi() const
{
    return ramTipi;
}

void TKNParcaBilgileri::setRamTipi(const Metin &value)
{
    if(value==ramTipi)
        return;
    ramTipi = value;
    emit RamTipiDegisti(ramTipi);
}

Metin TKNParcaBilgileri::getAnakartChipseti() const
{
    return anakartChipseti;
}

void TKNParcaBilgileri::setAnakartChipseti(const Metin &value)
{
    if(value==anakartChipseti)
        return;
    anakartChipseti = value;
    emit AnakartChipsetiDegisti(anakartChipseti);
}

Metin TKNParcaBilgileri::getSoketTipi() const
{
    return soketTipi;
}

void TKNParcaBilgileri::setSoketTipi(const Metin &value)
{
    if(value==soketTipi)
        return;
    soketTipi = value;
    emit SoketTipiDegisti(soketTipi);
}

Metin TKNParcaBilgileri::getAnakartYapi() const
{
    return anakartYapi;
}

void TKNParcaBilgileri::setAnakartYapi(const Metin &value)
{
    if(value==anakartYapi)
        return;
    anakartYapi = value;
    emit AnakartYapiDegisti(anakartYapi);
}

ParcaEvetHayir TKNParcaBilgileri::getParcaEvetHayir() const
{
    return parcaEvetHayir;
}

void TKNParcaBilgileri::setParcaEvetHayir(const ParcaEvetHayir &value)
{
    if(value==parcaEvetHayir)
        return;
    parcaEvetHayir = value;
    emit ParcaEvetHayirDegisti(parcaEvetHayir);
}
QDataStream &operator<<(QDataStream &a, const TKNParcaBilgileriPtr &b)
{
    a << b->getID()<< b->getParcaMarkasi()<<b->getParcaModeli()<<b->getParcaOzellikleri()<<b->getParcaTuru();
    return a;
}
QDataStream &operator>>(QDataStream &a, TKNParcaBilgileriPtr &b)
{
    IdTuru id;
    Metin parcaMarkasi;
    Metin parcaModeli;
    ParcaTuru parcaTuru;
    Metin parcaOzellikleri;

    a >> id >> parcaMarkasi >> parcaModeli >> parcaTuru >> parcaOzellikleri;

    b=std::make_shared<TKNParcaBilgileri>();

    b->setID(id);
    b->setParcaMarkasi(parcaMarkasi);
    b->setParcaModeli(parcaModeli);
    b->setParcaOzellikleri(parcaOzellikleri);
    b->setParcaTuru(parcaTuru);
    return a;


}

