#include "tknrampencere.h"
#include "ui_tknrampencere.h"
#include <Veri/VeriSiniflari/tknparcabilgileri.h>

TKNRamPencere::TKNRamPencere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNRamPencere)
{
    ui->setupUi(this);
}

TKNRamPencere::~TKNRamPencere()
{
    delete ui;
}

const TKNParcaBilgileriPtr TKNRamPencere::getVeri() const
{
    veri->setParcaMarkasi(ui->lineEdit_6->text());
    veri->setParcaModeli(ui->lineEdit_5->text());

    veri->setRamTipi(ui->lineEdit->text());
    veri->setHafizaBusHizi(ui->lineEdit_2->text());
    veri->setRamKapasitesi(ui->lineEdit_3->text());
    veri->setGecikmeSuresi(ui->lineEdit_4->text());

    if(ui->radioButton->isChecked()){
        veri->setParcaTuru(PTRam);}
    return veri;
}

void TKNRamPencere::setVeri(const TKNParcaBilgileriPtr &value)
{
    veri = value;

    ui->lineEdit_6->setText(veri->getParcaMarkasi());
    ui->lineEdit_5->setText(veri->getParcaModeli());

    ui->lineEdit->setText(veri->getRamTipi());
    ui->lineEdit_2->setText(veri->getHafizaBusHizi());
    ui->lineEdit_3->setText(veri->getRamKapasitesi());
    ui->lineEdit_4->setText(veri->getGecikmeSuresi());

    switch (veri->getParcaTuru()) {
    case PTRam:
        ui->radioButton->setChecked(true);
        break;
    }
}
