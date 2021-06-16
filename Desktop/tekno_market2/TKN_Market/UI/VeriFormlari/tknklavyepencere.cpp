#include "tknklavyepencere.h"
#include "ui_tknklavyepencere.h"
#include <Veri/VeriSiniflari/tknparcabilgileri.h>

TKNKlavyePencere::TKNKlavyePencere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNKlavyePencere)
{
    ui->setupUi(this);
}

TKNKlavyePencere::~TKNKlavyePencere()
{
    delete ui;
}

const TKNParcaBilgileriPtr TKNKlavyePencere::getVeri() const
{
    veri->setParcaMarkasi(ui->lineEdit->text());
    veri->setParcaModeli(ui->lineEdit_2->text());
    veri->setKlavyeDuzeni(ui->lineEdit_3->text());
    veri->setKlavyeBaglantisi(ui->lineEdit_4->text());
    veri->setBaglantiOzellikleri(ui->lineEdit_5->text());


    if(ui->radioButton->isChecked()){
        veri->setParcaTuru(PTKlavye);}
    return veri;
}

void TKNKlavyePencere::setVeri(const TKNParcaBilgileriPtr &value)
{
    veri = value;
    ui->lineEdit->setText(veri->getParcaMarkasi());
    ui->lineEdit_2->setText(veri->getParcaModeli());
    ui->lineEdit_3->setText(veri->getKlavyeDuzeni());
    ui->lineEdit_4->setText(veri->getKlavyeBaglantisi());
    ui->lineEdit_5->setText(veri->getBaglantiOzellikleri());

    switch (veri->getParcaTuru()) {
    case PTKlavye:
        ui->radioButton->setChecked(true);
        break;
    }
}
