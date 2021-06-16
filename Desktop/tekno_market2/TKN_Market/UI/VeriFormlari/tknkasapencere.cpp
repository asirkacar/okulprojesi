#include "tknkasapencere.h"
#include "ui_tknkasapencere.h"
#include <Veri/VeriSiniflari/tknparcabilgileri.h>

TKNKasaPencere::TKNKasaPencere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNKasaPencere)
{
    ui->setupUi(this);
}

TKNKasaPencere::~TKNKasaPencere()
{
    delete ui;
}

const TKNParcaBilgileriPtr TKNKasaPencere::getVeri() const
{
    veri->setParcaMarkasi(ui->lineEdit->text());
    veri->setParcaModeli(ui->lineEdit_2->text());
    veri->setKasaYapi(ui->lineEdit_3->text());
    veri->setAnakartYapi(ui->lineEdit_4->text());
    veri->setKasaBoyut(ui->lineEdit_5->text());

    if(ui->radioButton_2->isChecked()){
        veri->setParcaVarYok(PTVar);
    }else if(ui->radioButton->isChecked()){
        veri->setParcaVarYok(PTYok);
    }

    veri->setGucKaynagi(ui->lineEdit_6->text());
    veri->setDahiliFanSayisi(ui->lineEdit_7->text());
    veri->setFanYuvaSayisi(ui->lineEdit_8->text());
    veri->setEkranKartiDestekMax(ui->lineEdit_9->text());
    veri->setCpuSogutucuYukseklik(ui->lineEdit_10->text());
    veri->setKasaYuvaSayisiUcBucuk(ui->lineEdit_11->text());
    veri->setKasaYuvaSayisiIkiBucuk(ui->lineEdit_12->text());
    veri->setUsbSayisi(ui->lineEdit_13->text());

    if(ui->radioButton_3->isChecked()){
        veri->setParcaTuru(PTKasa);}

    return veri;
}

void TKNKasaPencere::setVeri(const TKNParcaBilgileriPtr &value)
{
    veri = value;
    ui->lineEdit->setText(veri->getParcaMarkasi());
    ui->lineEdit_2->setText(veri->getParcaModeli());
    ui->lineEdit_3->setText(veri->getKasaYapi());
    ui->lineEdit_4->setText(veri->getAnakartYapi());
    ui->lineEdit_5->setText(veri->getKasaBoyut());

    switch (veri->getParcaVarYok()) {
    case PTVar:
        ui->radioButton_2->setChecked(true);
        break;
    default:
        ui->radioButton->setChecked(true);
    }


    ui->lineEdit_6->setText(veri->getGucKaynagi());
    ui->lineEdit_7->setText(veri->getDahiliFanSayisi());
    ui->lineEdit_8->setText(veri->getFanYuvaSayisi());
    ui->lineEdit_9->setText(veri->getEkranKartiDestekMax());
    ui->lineEdit_10->setText(veri->getCpuSogutucuYukseklik());
    ui->lineEdit_11->setText(veri->getKasaYuvaSayisiUcBucuk());
    ui->lineEdit_12->setText(veri->getKasaYuvaSayisiIkiBucuk());
    ui->lineEdit_13->setText(veri->getUsbSayisi());

    switch (veri->getParcaTuru()) {
    case PTKasa:
        ui->radioButton_3->setChecked(true);
        break;
    }

}
