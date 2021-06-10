#include "tknmonitorpencere.h"
#include "ui_tknmonitorpencere.h"
#include <Veri/VeriSiniflari/tknparcabilgileri.h>

TKNMonitorPencere::TKNMonitorPencere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNMonitorPencere)
{
    ui->setupUi(this);
}

TKNMonitorPencere::~TKNMonitorPencere()
{
    delete ui;
}

TKNParcaBilgileriPtr TKNMonitorPencere::getVeri() const
{
    veri->setParcaMarkasi(ui->lineEdit->text());
    veri->setParcaModeli(ui->lineEdit_2->text());
    veri->setMonitorTipi(ui->lineEdit_3->text());
    veri->setMonitorBaglantisi(ui->lineEdit_4->text());
    veri->setYenilemeHizi(ui->lineEdit_5->text());
    veri->setBoyut(ui->lineEdit_6->text());
    veri->setCozunurluk(ui->lineEdit_7->text());
    veri->setIzlemeAcisi(ui->lineEdit_8->text());


    if(ui->radioButton->isChecked()){
        veri->setParcaVarYok(PTVar);
    }else if(ui->radioButton_2->isChecked()){
        veri->setParcaVarYok(PTYok);
    }

    if(ui->radioButton_3->isChecked()){
        veri->setParcaTuru(PTMonitor);}
    return veri;
}

void TKNMonitorPencere::setVeri(const TKNParcaBilgileriPtr &value)
{
    veri = value;

    ui->lineEdit->setText(veri->getParcaMarkasi());
    ui->lineEdit_2->setText(veri->getParcaModeli());

    ui->lineEdit_3->setText(veri->getMonitorTipi());
    ui->lineEdit_4->setText(veri->getMonitorBaglantisi());
    ui->lineEdit_5->setText(veri->getYenilemeHizi());
    ui->lineEdit_6->setText(veri->getBoyut());
    ui->lineEdit_7->setText(veri->getCozunurluk());
    ui->lineEdit_8->setText(veri->getIzlemeAcisi());

    switch (veri->getParcaVarYok()) {
    case PTVar:
        ui->radioButton->setChecked(true);
        break;
    default:
        ui->radioButton_2->setChecked(true);
    }

    switch (veri->getParcaTuru()) {
    case PTMonitor:
        ui->radioButton_3->setChecked(true);
        break;
    }

}
