#include "tknfarepencere.h"
#include "ui_tknfarepencere.h"
#include <Veri/VeriSiniflari/tknparcabilgileri.h>

TKNFarePencere::TKNFarePencere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNFarePencere)
{
    ui->setupUi(this);
}

TKNFarePencere::~TKNFarePencere()
{
    delete ui;
}

const TKNParcaBilgileriPtr TKNFarePencere::getVeri() const
{
    veri->setParcaMarkasi(ui->lineEdit->text());
    veri->setParcaModeli(ui->lineEdit_2->text());
    veri->setMouseTipi(ui->lineEdit_3->text());
    veri->setDpi(ui->lineEdit_4->text());
    veri->setBaglantiOzellikleri(ui->lineEdit_5->text());

    if(ui->radioButton->isChecked()){
        veri->setParcaTuru(PTFare);}
    return veri;
}

void TKNFarePencere::setVeri(const TKNParcaBilgileriPtr &value)
{
    veri = value;
    ui->lineEdit->setText(veri->getParcaMarkasi());
    ui->lineEdit_2->setText(veri->getParcaModeli());
    ui->lineEdit_5->setText(veri->getBaglantiOzellikleri());
    ui->lineEdit_4->setText(veri->getDpi());
    ui->lineEdit_2->setText(veri->getMouseTipi());

    switch (veri->getParcaTuru()) {
    case PTFare:
        ui->radioButton->setChecked(true);
        break;
    }
}
