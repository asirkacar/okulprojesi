#include "tknislemcipencere.h"
#include "ui_tknislemcipencere.h"
#include <Veri/VeriSiniflari/tknparcabilgileri.h>

TKNIslemciPencere::TKNIslemciPencere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNIslemciPencere)
{
    ui->setupUi(this);
}

TKNIslemciPencere::~TKNIslemciPencere()
{
    delete ui;
}

TKNParcaBilgileriPtr TKNIslemciPencere::getVeri() const
{

    veri->setParcaMarkasi(ui->lineEdit_5->text());

    veri->setParcaModeli(ui->lineEdit_12->text());
    veri->setSoketTipi(ui->lineEdit->text());
    veri->setIslemciHizi(ui->lineEdit_2->text());
    veri->setMaxTurboHizi(ui->lineEdit_3->text());
    veri->setIslemciCekirdekSayisi(ui->lineEdit_4->text());
    veri->setIslemciOnbellek(ui->lineEdit_7->text());
    veri->setBellekTuru(ui->lineEdit_9->text());
    veri->setGucTuketim(ui->lineEdit_10->text());

    if(ui->radioButton_2->isChecked()){
        veri->setParcaEvetHayir(PTEvet);
    }else if(ui->radioButton_3->isChecked()){
        veri->setParcaEvetHayir(PTHayir);
    }
    if(ui->radioButton_4->isChecked()){
        veri->setParcaVarYok(PTVar);
    }else if(ui->radioButton_5->isChecked()){
        veri->setParcaVarYok(PTYok);
    }

    if(ui->radioButton->isChecked()){
        veri->setParcaTuru(PTCPU);}

    return veri;
}

void TKNIslemciPencere::setVeri(const TKNParcaBilgileriPtr &value)
{
    veri = value;
    ui->lineEdit_5->setText(veri->getParcaMarkasi());
    ui->lineEdit_12->setText(veri->getParcaModeli());
    ui->lineEdit->setText(veri->getSoketTipi());
    ui->lineEdit_2->setText(veri->getIslemciHizi());
    ui->lineEdit_3->setText(veri->getMaxTurboHizi());
    ui->lineEdit_4->setText(veri->getIslemciCekirdekSayisi());
    ui->lineEdit_7->setText(veri->getIslemciOnbellek());
    ui->lineEdit_9->setText(veri->getBellekTuru());
    ui->lineEdit_10->setText(veri->getGucTuketim());

    switch (veri->getParcaEvetHayir()) {
    case PTEvet:
        ui->radioButton_2->setChecked(true);
        break;
    default:
        ui->radioButton_3->setChecked(true);
    }
    switch (veri->getParcaVarYok()) {
    case PTVar:
        ui->radioButton_4->setChecked(true);
        break;
    default:
        ui->radioButton_5->setChecked(true);
    }
    switch (veri->getParcaTuru()) {
    case PTCPU:
        ui->radioButton->setChecked(true);
        break;
    }

}
