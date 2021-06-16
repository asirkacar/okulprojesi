#include "tknharddiskpencere.h"
#include "ui_tknharddiskpencere.h"
#include <Veri/VeriSiniflari/tknparcabilgileri.h>

TKNHarddiskPencere::TKNHarddiskPencere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNHarddiskPencere)
{
    ui->setupUi(this);
}

TKNHarddiskPencere::~TKNHarddiskPencere()
{
    delete ui;
}

const TKNParcaBilgileriPtr TKNHarddiskPencere::getVeri() const
{
    veri->setParcaMarkasi(ui->lineEdit->text());
    veri->setParcaModeli(ui->lineEdit_2->text());
    veri->setDiskKapasitesi(ui->lineEdit_3->text());
    veri->setHddDonusHizi(ui->lineEdit_4->text());
    veri->setHddOnBellek(ui->lineEdit_5->text());
    veri->setBoyut(ui->lineEdit_6->text());
    if(ui->radioButton->isChecked()){
        veri->setParcaTuru(PTHDD);}
    return veri;
}

void TKNHarddiskPencere::setVeri(const TKNParcaBilgileriPtr &value)
{
    veri = value;
    ui->lineEdit->setText(veri->getParcaMarkasi());
    ui->lineEdit_2->setText(veri->getParcaModeli());
    ui->lineEdit_3->setText(veri->getDiskKapasitesi());
    ui->lineEdit_4->setText(veri->getHddDonusHizi());
    ui->lineEdit_5->setText(veri->getHddOnBellek());
    ui->lineEdit_6->setText(veri->getBoyut());

    switch (veri->getParcaTuru()) {
    case PTHDD:
        ui->radioButton->setChecked(true);
        break;
    }
}
