#include "tknguckaynagipencere.h"
#include "ui_tknguckaynagipencere.h"
#include <Veri/VeriSiniflari/tknparcabilgileri.h>

TKNGucKaynagiPencere::TKNGucKaynagiPencere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNGucKaynagiPencere)
{
    ui->setupUi(this);
}

TKNGucKaynagiPencere::~TKNGucKaynagiPencere()
{
    delete ui;
}

const TKNParcaBilgileriPtr TKNGucKaynagiPencere::getVeri() const
{
    veri->setParcaMarkasi(ui->lineEdit->text());
    veri->setParcaModeli(ui->lineEdit_2->text());
    veri->setGucTuketim(ui->lineEdit_3->text());
    veri->setBoyut(ui->lineEdit_4->text());

    if(ui->radioButton->isChecked()){
        veri->setParcaTuru(PTGucKaynak);}
    return veri;
}

void TKNGucKaynagiPencere::setVeri(const TKNParcaBilgileriPtr &value)
{
    veri = value;
    ui->lineEdit->setText(veri->getParcaMarkasi());
    ui->lineEdit_2->setText(veri->getParcaModeli());
    ui->lineEdit_3->setText(veri->getGucTuketim());
    ui->lineEdit_4->setText(veri->getBoyut());

    switch (veri->getParcaTuru()) {
    case PTGucKaynak:
        ui->radioButton->setChecked(true);
        break;
    }
}
