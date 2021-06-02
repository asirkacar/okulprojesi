#include "tknanakartpencere.h"
#include "ui_tknanakartpencere.h"
#include <Veri/VeriSiniflari/tknparcabilgileri.h>

TKNAnakartPencere::TKNAnakartPencere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNAnakartPencere)
{
    ui->setupUi(this);
}

TKNAnakartPencere::~TKNAnakartPencere()
{
    delete ui;
}

TKNParcaBilgileriPtr TKNAnakartPencere::getVeri() const
{
    if(ui->radioButton->isChecked()){
        veri->setParcaTuru(PTAnakart);}
    veri->setParcaMarkasi(ui->lineEdit->text());
    veri->setParcaModeli(ui->lineEdit_2->text());
    veri->setAnakartYapi(ui->lineEdit_3->text());
    veri->setAnakartChipseti(ui->lineEdit_4->text());
    veri->setSoketTipi(ui->lineEdit_5->text());
    veri->setRamTipi(ui->lineEdit_6->text());

    veri->setRamSlotSayisi(ui->lineEdit_7->text());
    veri->setMaxRamDestegi(ui->lineEdit_8->text());
    veri->setIkiYuvaSayisi(ui->lineEdit_9->text());
    veri->setUsbUcNoktaSifir(ui->lineEdit_10->text());
    veri->setUsbIkiNoktaSifir(ui->lineEdit_11->text());
    veri->setHdmi(ui->lineEdit_13->text());

    return veri;
}

void TKNAnakartPencere::setVeri(const TKNParcaBilgileriPtr &value)
{
    veri = value;

    switch (veri->getParcaTuru()) {
    case PTAnakart:
        ui->radioButton->setChecked(true);
        break;
    }
    ui->lineEdit->setText(veri->getParcaMarkasi());
    ui->lineEdit_2->setText(veri->getParcaModeli());
    ui->lineEdit_3->setText(veri->getAnakartYapi());
    ui->lineEdit_4->setText(veri->getAnakartChipseti());
    ui->lineEdit_5->setText(veri->getSoketTipi());
    ui->lineEdit_6->setText(veri->getRamTipi());
    ui->lineEdit_7->setText(veri->getRamSlotSayisi());
    ui->lineEdit_8->setText(veri->getMaxRamDestegi());
    ui->lineEdit_9->setText(veri->getIkiYuvaSayisi());
    ui->lineEdit_10->setText(veri->getUsbUcNoktaSifir());
    ui->lineEdit_11->setText(veri->getUsbIkiNoktaSifir());
    ui->lineEdit_13->setText(veri->getHdmi());



}
