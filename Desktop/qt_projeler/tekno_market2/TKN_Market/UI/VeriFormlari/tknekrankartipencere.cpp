#include "tknekrankartipencere.h"
#include "ui_tknekrankartipencere.h"
#include <Veri/VeriSiniflari/tknparcabilgileri.h>

TKNEkranKartiPencere::TKNEkranKartiPencere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNEkranKartiPencere)
{
    ui->setupUi(this);
}

TKNEkranKartiPencere::~TKNEkranKartiPencere()
{
    delete ui;
}

TKNParcaBilgileriPtr TKNEkranKartiPencere::getVeri() const
{
    veri->setParcaMarkasi(ui->lineEdit->text());
    veri->setParcaModeli(ui->lineEdit_2->text());
    veri->setBellekTipi(ui->lineEdit_3->text());
    veri->setBellekKapasitesi(ui->lineEdit_4->text());
    veri->setBellekHizi(ui->lineEdit_5->text());
    veri->setVgaSlot(ui->lineEdit_6->text());
    veri->setHdmi(ui->lineEdit_7->text());
    veri->setGucTuketim(ui->lineEdit_9->text());
    veri->setBoyut(ui->lineEdit_10->text());
    if(ui->radioButton->isChecked()){
        veri->setParcaTuru(PTEkranKart);}
    return veri;
}

void TKNEkranKartiPencere::setVeri(const TKNParcaBilgileriPtr &value)
{
    veri = value;
    ui->lineEdit->setText(veri->getParcaMarkasi());
    ui->lineEdit_2->setText(veri->getParcaModeli());
    ui->lineEdit_3->setText(veri->getBellekTipi());
    ui->lineEdit_4->setText(veri->getBellekKapasitesi());
    ui->lineEdit_5->setText(veri->getBellekHizi());
    ui->lineEdit_6->setText(veri->getVgaSlot());
    ui->lineEdit_7->setText(veri->getHdmi());
    ui->lineEdit_9->setText(veri->getGucTuketim());
    ui->lineEdit_10->setText(veri->getBoyut());
    switch (veri->getParcaTuru()) {
    case PTEkranKart:
        ui->radioButton->setChecked(true);
        break;
    }
}
