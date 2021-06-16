#ifndef TKNPARCABILGILERI_H
#define TKNPARCABILGILERI_H

#include <QObject>
#include <Veri/tanimlar.h>

class TKNParcaBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit TKNParcaBilgileri(QObject *parent = nullptr);
    Q_PROPERTY(IdTuru id READ getId WRITE setId NOTIFY idDegisti)
    Q_PROPERTY(Metin ParcaMarkasi READ getParcaMarkasi WRITE setParcaMarkasi NOTIFY ParcaMarkasiDegisti)
    Q_PROPERTY(Metin ParcaModeli READ getParcaModeli WRITE setParcaModeli NOTIFY ParcaModeliDegisti)
    Q_PROPERTY(ParcaTuru parcaTuru READ getParcaTuru WRITE setParcaTuru NOTIFY ParcaTuruDegisti)
    Q_PROPERTY(Metin ParcaOzellikleri READ getParcaOzellikleri WRITE setParcaOzellikleri NOTIFY ParcaOzellikleriDegisti)
    Q_PROPERTY(ParcaEvetHayir parcaEvetHayir READ getParcaEvetHayir WRITE setParcaEvetHayir NOTIFY ParcaEvetHayirDegisti)
    Q_PROPERTY(ParcaVarYok parcaVarYok READ getParcaVarYok WRITE setParcaVarYok NOTIFY ParcaVarYokDegisti)

    Q_PROPERTY(Metin anakartYapi READ getAnakartYapi WRITE setAnakartYapi NOTIFY AnakartYapiDegisti)
    Q_PROPERTY(Metin soketTipi READ getSoketTipi WRITE setSoketTipi NOTIFY SoketTipiDegisti)
    Q_PROPERTY(Metin anakartChipseti READ getAnakartChipseti WRITE setAnakartChipseti NOTIFY AnakartChipsetiDegisti)
    Q_PROPERTY(Metin ramTipi READ getRamTipi WRITE setRamTipi NOTIFY RamTipiDegisti)
    Q_PROPERTY(Metin ramSlotSayisi READ getRamSlotSayisi WRITE setRamSlotSayisi NOTIFY RamSlotSayisiDegisti)
    Q_PROPERTY(Metin maxRamDestegi READ getMaxRamDestegi WRITE setMaxRamDestegi NOTIFY MaxRamDestegiDegisti)


    Q_PROPERTY(Metin mIkiYuvaSayisi READ getIkiYuvaSayisi WRITE setIkiYuvaSayisi NOTIFY IkiYuvaSayisiDegisti)
    Q_PROPERTY(Metin usbUcNoktaSifir READ getUsbUcNoktaSifir WRITE setUsbUcNoktaSifir NOTIFY UsbUcNoktaSifirDegisti)
    Q_PROPERTY(Metin usbIkiNoktaSifir READ getUsbIkiNoktaSifir WRITE setUsbIkiNoktaSifir NOTIFY UsbIkiNoktaSifirDegisti)
    Q_PROPERTY(Metin hdmi READ getHdmi WRITE setHdmi NOTIFY HdmiDegisti)
    Q_PROPERTY(Metin boyut READ getBoyut WRITE setBoyut NOTIFY BoyutDegisti)
    Q_PROPERTY(Metin gucTuketim READ getGucTuketim WRITE setGucTuketim NOTIFY GucTuketimDegisti)
    Q_PROPERTY(Metin vgaSlot READ getVgaSlot WRITE setVgaSlot NOTIFY VgaSlotDegisti)
    Q_PROPERTY(Metin islemciHizi READ getIslemciHizi WRITE setIslemciHizi NOTIFY IslemciHiziDegisti)
    Q_PROPERTY(Metin maxTurboHizi READ getMaxTurboHizi WRITE setMaxTurboHizi NOTIFY MaxTurboHiziDegisti)
    Q_PROPERTY(Metin islemciCekirdekSayisi READ getIslemciCekirdekSayisi WRITE setIslemciCekirdekSayisi NOTIFY IslemciCekirdekSayisiDegisti)
    Q_PROPERTY(Metin islemciOnbellek READ getIslemciOnbellek WRITE setIslemciOnbellek NOTIFY IslemciOnbellekDegisti)
    Q_PROPERTY(Metin bellekTuru READ getBellekTuru WRITE setBellekTuru NOTIFY BellekTuruDegisti)
    Q_PROPERTY(Metin hafizaBusHizi READ getHafizaBusHizi WRITE setHafizaBusHizi NOTIFY HafizaBusHiziDegisti)
    Q_PROPERTY(Metin ramKapasitesi READ getRamKapasitesi WRITE setRamKapasitesi NOTIFY RamKapasitesiDegisti)
    Q_PROPERTY(Metin gecikmeSuresi READ getGecikmeSuresi WRITE setGecikmeSuresi NOTIFY GecikmeSuresiDegisti)
    Q_PROPERTY(Metin diskKapasitesi READ getDiskKapasitesi WRITE setDiskKapasitesi NOTIFY DiskKapasitesiDegisti)
    Q_PROPERTY(Metin hddDonusHizi READ getHddDonusHizi WRITE setHddDonusHizi NOTIFY HddDonusHiziDegisti)
    Q_PROPERTY(Metin hddOnBellek READ getHddOnBellek WRITE setHddOnBellek NOTIFY HddOnBellekDegisti)
    Q_PROPERTY(Metin kasaYapi READ getKasaYapi WRITE setKasaYapi NOTIFY KasaYapiDegisti)
    Q_PROPERTY(Metin gucKaynagi READ getGucKaynagi WRITE setGucKaynagi NOTIFY GucKaynagiDegisti)
    Q_PROPERTY(Metin dahiliFanSayisi READ getDahiliFanSayisi WRITE setDahiliFanSayisi NOTIFY DahiliFanSayisiDegisti)
    Q_PROPERTY(Metin fanYuvaSayisi READ getFanYuvaSayisi WRITE setFanYuvaSayisi NOTIFY FanYuvaSayisiDegisti)
    Q_PROPERTY(Metin ekranKartiDestekMax READ getEkranKartiDestekMax WRITE setEkranKartiDestekMax NOTIFY EkranKartiDestekMaxDegisti)
    Q_PROPERTY(Metin cpuSogutucuYukseklik READ getCpuSogutucuYukseklik WRITE setCpuSogutucuYukseklik NOTIFY CpuSogutucuYukseklikDegisti)
    Q_PROPERTY(Metin kasaYuvaSayisiUcBucuk READ getKasaYuvaSayisiUcBucuk WRITE setKasaYuvaSayisiUcBucuk NOTIFY KasaYuvaSayisiUcBucukDegisti)
    Q_PROPERTY(Metin kasaYuvaSayisiIkiBucuk READ getKasaYuvaSayisiIkiBucuk WRITE setKasaYuvaSayisiIkiBucuk NOTIFY KasaYuvaSayisiIkiBucukDegisti)
    Q_PROPERTY(Metin usbSayisi READ getUsbSayisi WRITE setUsbSayisi NOTIFY UsbSayisiDegisti)
    Q_PROPERTY(Metin kasaBoyut READ getKasaBoyut WRITE setKasaBoyut NOTIFY KasaBoyutDegisti)
    Q_PROPERTY(Metin bellekTipi READ getBellekTipi WRITE setBellekTipi NOTIFY BellekTipiDegisti)
    Q_PROPERTY(Metin bellekKapasitesi READ getBellekKapasitesi WRITE setBellekKapasitesi NOTIFY BellekKapasitesiDegisti)
    Q_PROPERTY(Metin bellekHizi READ getBellekHizi WRITE setBellekHizi NOTIFY BellekHiziDegisti)
    Q_PROPERTY(Metin cekirdekHizi READ getCekirdekHizi WRITE setCekirdekHizi NOTIFY CekirdekHiziDegisti)
    Q_PROPERTY(Metin monitorTipi READ getMonitorTipi WRITE setMonitorTipi NOTIFY MonitorTipiDegisti)
    Q_PROPERTY(Metin monitorBaglantisi READ getMonitorBaglantisi WRITE setMonitorBaglantisi NOTIFY MonitorBaglantisiDegisti)
    Q_PROPERTY(Metin yenilemeHizi READ getYenilemeHizi WRITE setYenilemeHizi NOTIFY YenilemeHiziDegisti)
    Q_PROPERTY(Metin cozunurluk READ getCozunurluk WRITE setCozunurluk NOTIFY CozunurlukDegisti)
    Q_PROPERTY(Metin izlemeAcisi READ getIzlemeAcisi WRITE setIzlemeAcisi NOTIFY IzlemeAcisiDegisti)
    Q_PROPERTY(Metin klavyeDuzeni READ getKlavyeDuzeni WRITE setKlavyeDuzeni NOTIFY KlavyeDuzeniDegisti)
    Q_PROPERTY(Metin klavyeBaglantisi READ getKlavyeBaglantisi WRITE setKlavyeBaglantisi NOTIFY KlavyeBaglantisiDegisti)
    Q_PROPERTY(Metin baglantiOzellikleri READ getBaglantiOzellikleri WRITE setBaglantiOzellikleri NOTIFY BaglantiOzellikleriDegisti)
    Q_PROPERTY(Metin dpi READ getDpi WRITE setDpi NOTIFY DpiDegisti)
    Q_PROPERTY(Metin mouseTipi READ getMouseTipi WRITE setMouseTipi NOTIFY MouseTipiDegisti)


    IdTuru getId() const;
    Metin getParcaMarkasi() const;
    Metin getParcaModeli() const;
    ParcaTuru getParcaTuru() const;
    Metin getParcaOzellikleri() const;

    ParcaEvetHayir getParcaEvetHayir() const;
    ParcaVarYok getParcaVarYok() const;

    Metin getAnakartYapi() const;
    Metin getSoketTipi() const;
    Metin getAnakartChipseti() const;
    Metin getRamTipi() const;
    Metin getRamSlotSayisi() const;
    Metin getMaxRamDestegi() const;


    Metin getIkiYuvaSayisi() const;
    Metin getUsbUcNoktaSifir() const;
    Metin getUsbIkiNoktaSifir() const;
    Metin getHdmi() const;
    Metin getBoyut() const;
    Metin getGucTuketim() const;
    Metin getVgaSlot() const;
    Metin getIslemciHizi() const;
    Metin getMaxTurboHizi() const;
    Metin getIslemciCekirdekSayisi() const;
    Metin getIslemciOnbellek() const;
    Metin getBellekTuru() const;
    Metin getHafizaBusHizi() const;
    Metin getRamKapasitesi() const;
    Metin getGecikmeSuresi() const;
    Metin getDiskKapasitesi() const;
    Metin getHddDonusHizi() const;
    Metin getHddOnBellek() const;
    Metin getKasaYapi() const;
    Metin getGucKaynagi() const;
    Metin getDahiliFanSayisi() const;
    Metin getFanYuvaSayisi() const;
    Metin getEkranKartiDestekMax() const;
    Metin getCpuSogutucuYukseklik() const;
    Metin getKasaYuvaSayisiUcBucuk() const;
    Metin getKasaYuvaSayisiIkiBucuk() const;
    Metin getUsbSayisi() const;
    Metin getKasaBoyut() const;
    Metin getBellekTipi() const;
    Metin getBellekKapasitesi() const;
    Metin getBellekHizi() const;
    Metin getCekirdekHizi() const;
    Metin getMonitorTipi() const;
    Metin getMonitorBaglantisi() const;
    Metin getYenilemeHizi() const;
    Metin getCozunurluk() const;
    Metin getIzlemeAcisi() const;
    Metin getKlavyeDuzeni() const;
    Metin getKlavyeBaglantisi() const;
    Metin getBaglantiOzellikleri() const;
    Metin getDpi() const;
    Metin getMouseTipi() const;




signals:
    void idDegisti(const IdTuru &value);
    void ParcaMarkasiDegisti(const Metin &value);
    void ParcaModeliDegisti(const Metin &value);
    void ParcaTuruDegisti(const ParcaTuru &value);
    void ParcaOzellikleriDegisti(const Metin &value);

    void ParcaEvetHayirDegisti(const ParcaEvetHayir &value);
    void ParcaVarYokDegisti(const ParcaVarYok &value);

    void AnakartYapiDegisti(const Metin &value);
    void SoketTipiDegisti(const Metin &value);
    void AnakartChipsetiDegisti(const Metin &value);
    void RamTipiDegisti(const Metin &value);
    void RamSlotSayisiDegisti(const Metin &value);
    void MaxRamDestegiDegisti(const Metin &value);


    void IkiYuvaSayisiDegisti(const Metin &ikiYuvaSayisi);
    void UsbUcNoktaSifirDegisti(const Metin &value);
    void UsbIkiNoktaSifirDegisti(const Metin &value);
    void HdmiDegisti(const Metin &value);
    void BoyutDegisti(const Metin &value);
    void GucTuketimDegisti(const Metin &value);
    void VgaSlotDegisti(const Metin &value);
    void IslemciHiziDegisti(const Metin &value);
    void MaxTurboHiziDegisti(const Metin &value);
    void IslemciCekirdekSayisiDegisti(const Metin &value);
    void IslemciOnbellekDegisti(const Metin &value);
    void BellekTuruDegisti(const Metin &value);
    void HafizaBusHiziDegisti(const Metin &value);
    void RamKapasitesiDegisti(const Metin &value);
    void GecikmeSuresiDegisti(const Metin &value);
    void DiskKapasitesiDegisti(const Metin &value);
    void HddDonusHiziDegisti(const Metin &value);
    void HddOnBellekDegisti(const Metin &value);
    void KasaYapiDegisti(const Metin &value);
    void GucKaynagiDegisti(const Metin &value);
    void DahiliFanSayisiDegisti(const Metin &value);
    void FanYuvaSayisiDegisti(const Metin &value);
    void EkranKartiDestekMaxDegisti(const Metin &value);
    void CpuSogutucuYukseklikDegisti(const Metin &value);
    void KasaYuvaSayisiUcBucukDegisti(const Metin &value);
    void KasaYuvaSayisiIkiBucukDegisti(const Metin &value);
    void UsbSayisiDegisti(const Metin &value);
    void KasaBoyutDegisti(const Metin &value);
    void BellekTipiDegisti(const Metin &value);
    void BellekKapasitesiDegisti(const Metin &value);
    void BellekHiziDegisti(const Metin &value);
    void CekirdekHiziDegisti(const Metin &value);
    void MonitorTipiDegisti(const Metin &value);
    void MonitorBaglantisiDegisti(const Metin &value);
    void YenilemeHiziDegisti(const Metin &value);
    void CozunurlukDegisti(const Metin &value);
    void IzlemeAcisiDegisti(const Metin &value);
    void KlavyeDuzeniDegisti(const Metin &value);
    void KlavyeBaglantisiDegisti(const Metin &value);
    void BaglantiOzellikleriDegisti(const Metin &value);
    void DpiDegisti(const Metin &value);
    void MouseTipiDegisti(const Metin &value);
public slots:
    void setId(const IdTuru &value);
    void setParcaMarkasi(const Metin &value);
    void setParcaModeli(const Metin &value);
    void setParcaTuru(const ParcaTuru &value);
    void setParcaOzellikleri(const Metin &value);

    void setParcaEvetHayir(const ParcaEvetHayir &value);
    void setParcaVarYok(const ParcaVarYok &value);

    void setAnakartYapi(const Metin &value);
    void setSoketTipi(const Metin &value);
    void setAnakartChipseti(const Metin &value);
    void setRamTipi(const Metin &value);
    void setRamSlotSayisi(const Metin &value);
    void setMaxRamDestegi(const Metin &value);


    void setIkiYuvaSayisi(const Metin &ikiYuvaSayisi);
    void setUsbUcNoktaSifir(const Metin &value);
    void setUsbIkiNoktaSifir(const Metin &value);
    void setHdmi(const Metin &value);
    void setBoyut(const Metin &value);
    void setGucTuketim(const Metin &value);
    void setVgaSlot(const Metin &value);
    void setIslemciHizi(const Metin &value);
    void setMaxTurboHizi(const Metin &value);
    void setIslemciCekirdekSayisi(const Metin &value);
    void setIslemciOnbellek(const Metin &value);
    void setBellekTuru(const Metin &value);
    void setHafizaBusHizi(const Metin &value);
    void setRamKapasitesi(const Metin &value);
    void setGecikmeSuresi(const Metin &value);
    void setDiskKapasitesi(const Metin &value);
    void setHddDonusHizi(const Metin &value);
    void setHddOnBellek(const Metin &value);
    void setKasaYapi(const Metin &value);
    void setGucKaynagi(const Metin &value);
    void setDahiliFanSayisi(const Metin &value);
    void setFanYuvaSayisi(const Metin &value);
    void setEkranKartiDestekMax(const Metin &value);
    void setCpuSogutucuYukseklik(const Metin &value);
    void setKasaYuvaSayisiUcBucuk(const Metin &value);
    void setKasaYuvaSayisiIkiBucuk(const Metin &value);
    void setUsbSayisi(const Metin &value);
    void setKasaBoyut(const Metin &value);
    void setBellekTipi(const Metin &value);
    void setBellekKapasitesi(const Metin &value);
    void setBellekHizi(const Metin &value);
    void setCekirdekHizi(const Metin &value);
    void setMonitorTipi(const Metin &value);
    void setMonitorBaglantisi(const Metin &value);
    void setYenilemeHizi(const Metin &value);
    void setCozunurluk(const Metin &value);
    void setIzlemeAcisi(const Metin &value);
    void setKlavyeDuzeni(const Metin &value);
    void setKlavyeBaglantisi(const Metin &value);
    void setBaglantiOzellikleri(const Metin &value);
    void setDpi(const Metin &value);
    void setMouseTipi(const Metin &value);

private:
    //anakart
    IdTuru ParcaID;
    Metin ParcaMarkasi;
    Metin ParcaModeli;
    ParcaTuru parcaTuru;

    ParcaEvetHayir parcaEvetHayir;
    ParcaVarYok parcaVarYok;

    Metin anakartYapi;
    Metin soketTipi;
    Metin anakartChipseti;
    Metin ramTipi;
    Metin ramSlotSayisi;
    Metin maxRamDestegi;
    Metin mIkiYuvaSayisi;
    Metin usbUcNoktaSifir;
    Metin usbIkiNoktaSifir;
    Metin hdmi;
    Metin boyut;
    Metin gucTuketim;
    Metin vgaSlot;

    //cpu
    Metin islemciHizi;
    Metin maxTurboHizi;
    Metin islemciCekirdekSayisi;
    Metin islemciOnbellek;
    Metin bellekTuru;
    //ram
    Metin hafizaBusHizi;
    Metin ramKapasitesi;
    Metin gecikmeSuresi;
    //hdd
    Metin diskKapasitesi;
    Metin hddDonusHizi;
    Metin hddOnBellek;

    //kasa
    Metin kasaYapi;
    Metin gucKaynagi;
    Metin dahiliFanSayisi;
    Metin fanYuvaSayisi;
    Metin ekranKartiDestekMax;
    Metin cpuSogutucuYukseklik;
    Metin kasaYuvaSayisiUcBucuk;
    Metin kasaYuvaSayisiIkiBucuk;
    Metin usbSayisi;
    Metin kasaBoyut;

    //ekran kartı
    Metin bellekTipi;
    Metin bellekKapasitesi;
    Metin bellekHizi;
    Metin cekirdekHizi;

    //monitör
    Metin monitorTipi;
    Metin monitorBaglantisi;
    Metin yenilemeHizi;
    Metin cozunurluk;
    Metin izlemeAcisi;

    //klavye
    Metin klavyeDuzeni;
    Metin klavyeBaglantisi;
    Metin baglantiOzellikleri;
    //fare
    Metin dpi;
    Metin mouseTipi;
    Metin ParcaOzellikleri;

};

QDataStream &operator<<(QDataStream &a, const TKNParcaBilgileriPtr &b);
QDataStream &operator>>(QDataStream &a, TKNParcaBilgileriPtr &b);


#endif // TKNPARCABILGILERI_H
