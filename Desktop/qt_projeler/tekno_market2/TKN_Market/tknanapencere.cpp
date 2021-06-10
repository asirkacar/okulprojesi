#include "tknanapencere.h"
#include "ui_tknanapencere.h"
#include <Veri/tkngenelveriyoneticisi.h>

#include <QDir>
#include <QFile>
#include <QDataStream>
#include <QStandardPaths>
#include <UI/VeriFormlari/tknparcatanimlama.h>

#include <UI/VeriFormlari/tknanakartpencere.h>
#include <UI/VeriFormlari/tknislemcipencere.h>
#include <UI/VeriFormlari/tknekrankartipencere.h>
#include <UI/VeriFormlari/tknfarepencere.h>
#include <UI/VeriFormlari/tknguckaynagipencere.h>
#include <UI/VeriFormlari/tknrampencere.h>
#include <UI/VeriFormlari/tknharddiskpencere.h>
#include <UI/VeriFormlari/tknkasapencere.h>
#include <UI/VeriFormlari/tknmonitorpencere.h>
#include <UI/VeriFormlari/tknklavyepencere.h>

#include <Veri/VeriSiniflari/tknparcabilgileri.h>
#include <UI/ListeFormlari/tknparcalistesi.h>
#include <UI/ListeFormlari/tkntumparcalistesi.h>
#include <UI/ListeFormlari/tknanakartliste.h>
#include <UI/ListeFormlari/tknislemciliste.h>
#include <UI/ListeFormlari/tknekrankartliste.h>
#include <UI/ListeFormlari/tknramliste.h>
#include <UI/ListeFormlari/tknharddiskliste.h>
#include <UI/ListeFormlari/tknkasaliste.h>
#include <UI/ListeFormlari/tknguckaynakliste.h>
#include <UI/ListeFormlari/tknmonitorliste.h>
#include <UI/ListeFormlari/tknklavyeliste.h>
#include <UI/ListeFormlari/tknfareliste.h>


TKNAnaPencere::TKNAnaPencere(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TKNAnaPencere)
{
    ui->setupUi(this);
    TKNGenelVeriYoneticisi::sec();
    QString dosya_yolu=QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation);
    QDir dosya_klasoru(dosya_yolu);
    if(dosya_klasoru.exists("tekno.db")){
        QFile dosya(dosya_yolu+"/tekno.db");
        if(dosya.open(QIODevice::ReadOnly)){
            QDataStream oku(&dosya);
            oku >> TKNGenelVeriYoneticisi::sec();
            dosya.close();
        }
    }

}

TKNAnaPencere::~TKNAnaPencere()
{
    delete ui;
    QString dosya_yolu=QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation);
    QFile dosya(dosya_yolu+"/tekno.db");

    if(dosya.open(QIODevice::WriteOnly)){
        QDataStream yaz(&dosya);
        yaz << TKNGenelVeriYoneticisi::sec();
        dosya.close();
    }

}


void TKNAnaPencere::on_actionYeni_Par_a_Giri_i_triggered()
{

}

void TKNAnaPencere::on_actionMevcut_Par_alar_triggered()
{

}

void TKNAnaPencere::on_actionAnakart_triggered()
{
    TKNAnakartPencere form;
    auto veri=TKNGenelVeriYoneticisi::sec().getParcaBilgisi().yeni();

    form.setVeri(veri);
    form.setWindowTitle(tr("Yeni Anakart Girişi"));
    if(form.exec()==QDialog::Accepted){
        veri = form.getVeri();
        TKNGenelVeriYoneticisi::sec().getParcaBilgisi().ekle(veri);}
}

void TKNAnaPencere::on_actionT_m_Par_alar_triggered()
{
    TKNTumParcaListesi form;
    form.exec();
}

void TKNAnaPencere::on_action_lemci_triggered()
{
    TKNIslemciPencere form;
    auto veri=TKNGenelVeriYoneticisi::sec().getParcaBilgisi().yeni();

    form.setVeri(veri);
    form.setWindowTitle(tr("Yeni İşlemci Girişi"));
    if(form.exec()==QDialog::Accepted){
        veri = form.getVeri();
        TKNGenelVeriYoneticisi::sec().getParcaBilgisi().ekle(veri);}
}

void TKNAnaPencere::on_actionEkran_Kart_triggered()
{
    TKNEkranKartiPencere form;
    auto veri=TKNGenelVeriYoneticisi::sec().getParcaBilgisi().yeni();

    form.setVeri(veri);
    form.setWindowTitle(tr("Yeni Ekran Kartı Girişi"));
    if(form.exec()==QDialog::Accepted){
        veri = form.getVeri();
        TKNGenelVeriYoneticisi::sec().getParcaBilgisi().ekle(veri);}
}

void TKNAnaPencere::on_actionFare_triggered()
{
    TKNFarePencere form;
    auto veri=TKNGenelVeriYoneticisi::sec().getParcaBilgisi().yeni();

    form.setVeri(veri);
    form.setWindowTitle(tr("Yeni Fare Girişi"));
    if(form.exec()==QDialog::Accepted){
        veri = form.getVeri();
        TKNGenelVeriYoneticisi::sec().getParcaBilgisi().ekle(veri);}
}

void TKNAnaPencere::on_actionG_Kayna_triggered()
{
    TKNGucKaynagiPencere form;
    auto veri=TKNGenelVeriYoneticisi::sec().getParcaBilgisi().yeni();

    form.setVeri(veri);
    form.setWindowTitle(tr("Yeni Güç Kaynağı Girişi"));
    if(form.exec()==QDialog::Accepted){
        veri = form.getVeri();
        TKNGenelVeriYoneticisi::sec().getParcaBilgisi().ekle(veri);}
}

void TKNAnaPencere::on_actionRam_triggered()
{
    TKNRamPencere form;
    auto veri=TKNGenelVeriYoneticisi::sec().getParcaBilgisi().yeni();

    form.setVeri(veri);
    form.setWindowTitle(tr("Yeni Ram Girişi"));
    if(form.exec()==QDialog::Accepted){
        veri = form.getVeri();
        TKNGenelVeriYoneticisi::sec().getParcaBilgisi().ekle(veri);}
}

void TKNAnaPencere::on_actionHardDisk_triggered()
{
    TKNHarddiskPencere form;
    auto veri=TKNGenelVeriYoneticisi::sec().getParcaBilgisi().yeni();

    form.setVeri(veri);
    form.setWindowTitle(tr("Yeni Harddisk Girişi"));
    if(form.exec()==QDialog::Accepted){
        veri = form.getVeri();
        TKNGenelVeriYoneticisi::sec().getParcaBilgisi().ekle(veri);}
}

void TKNAnaPencere::on_actionKasa_triggered()
{
    TKNKasaPencere form;
    auto veri=TKNGenelVeriYoneticisi::sec().getParcaBilgisi().yeni();

    form.setVeri(veri);
    form.setWindowTitle(tr("Yeni Kasa Girişi"));
    if(form.exec()==QDialog::Accepted){
        veri = form.getVeri();
        TKNGenelVeriYoneticisi::sec().getParcaBilgisi().ekle(veri);}
}

void TKNAnaPencere::on_actionMonit_r_triggered()
{
    TKNMonitorPencere form;
    auto veri=TKNGenelVeriYoneticisi::sec().getParcaBilgisi().yeni();

    form.setVeri(veri);
    form.setWindowTitle(tr("Yeni Monitör Girişi"));
    if(form.exec()==QDialog::Accepted){
        veri = form.getVeri();
        TKNGenelVeriYoneticisi::sec().getParcaBilgisi().ekle(veri);}
}

void TKNAnaPencere::on_actionKlavye_triggered()
{
    TKNKlavyePencere form;
    auto veri=TKNGenelVeriYoneticisi::sec().getParcaBilgisi().yeni();

    form.setVeri(veri);
    form.setWindowTitle(tr("Yeni Klavye Girişi"));
    if(form.exec()==QDialog::Accepted){
        veri = form.getVeri();
        TKNGenelVeriYoneticisi::sec().getParcaBilgisi().ekle(veri);}
}

void TKNAnaPencere::on_actionAnakartlar_triggered()
{
    TKNAnakartListe form;
    form.exec();
}

void TKNAnaPencere::on_action_lemciler_triggered()
{
    TKNIslemciListe form;
    form.exec();
}

void TKNAnaPencere::on_actionEkran_Kartlar_triggered()
{
    TKNEkranKartListe form;
    form.exec();
}

void TKNAnaPencere::on_actionRamler_triggered()
{
    TKNRamListe form;
    form.exec();
}

void TKNAnaPencere::on_actionHarddiskler_triggered()
{
    TKNHarddiskListe form;
    form.exec();
}

void TKNAnaPencere::on_actionKasalar_triggered()
{
    TKNKasaListe form;
    form.exec();
}

void TKNAnaPencere::on_actionG_Kaynaklar_triggered()
{
    TKNGucKaynakListe form;
    form.exec();
}

void TKNAnaPencere::on_actionMonit_rler_triggered()
{
    TKNMonitorListe form;
    form.exec();
}

void TKNAnaPencere::on_actionKlavyeler_triggered()
{
    TKNMonitorListe form;
    form.exec();
}

void TKNAnaPencere::on_actionFareler_triggered()
{
    TKNFareListe form;
    form.exec();
}
