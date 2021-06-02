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

#include <Veri/VeriSiniflari/tknparcabilgileri.h>
#include <UI/ListeFormlari/tknparcalistesi.h>
#include <UI/ListeFormlari/tkntumparcalistesi.h>

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
    if(form.exec()==QDialog::Accepted){
        veri = form.getVeri();
        TKNGenelVeriYoneticisi::sec().getParcaBilgisi().ekle(veri);}
}
