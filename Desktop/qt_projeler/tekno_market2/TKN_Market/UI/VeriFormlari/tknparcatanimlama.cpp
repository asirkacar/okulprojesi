#include "tknparcatanimlama.h"
#include "ui_tknparcatanimlama.h"
#include <Veri/VeriSiniflari/tknparcabilgileri.h>


TKNParcaTanimlama::TKNParcaTanimlama(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNParcaTanimlama)
{
    ui->setupUi(this);
}

TKNParcaTanimlama::~TKNParcaTanimlama()
{
    delete ui;
}
/*
TKNParcaBilgileriPtr TKNParcaTanimlama::getVeri() const
{
    if(ui->radioButton->isChecked()){
        veri->setParcaTuru(PTAnakart);
    }else if(ui->radioButton_2->isChecked()){
        veri->setParcaTuru(PTCPU);
    }else if(ui->radioButton_3->isChecked()){
        veri->setParcaTuru(PTEkranKart);
    }else if(ui->radioButton_4->isChecked()){
        veri->setParcaTuru(PTRam);
    }else if(ui->radioButton_5->isChecked()){
        veri->setParcaTuru(PTHDD);
    }else if(ui->radioButton_6->isChecked()){
        veri->setParcaTuru(PTKasa);
    }else if(ui->radioButton_7->isChecked()){
        veri->setParcaTuru(PTGucKaynak);
    }else if(ui->radioButton_8->isChecked()){
        veri->setParcaTuru(PTMonitor);
    }else if(ui->radioButton_9->isChecked()){
        veri->setParcaTuru(PTKlavye);
    }else{
        veri->setParcaTuru(PTFare);
    }
    veri->setParcaMarkasi(ui->parcaAdi->text());
    return veri;
}

void TKNParcaTanimlama::setVeri(const TKNParcaBilgileriPtr &value)
{
    veri = value;

    switch (veri->getParcaTuru()) {
    case PTAnakart:
        ui->radioButton->setChecked(true);
        break;
    case PTCPU:
        ui->radioButton_2->setChecked(true);
        break;
    case PTEkranKart:
        ui->radioButton_3->setChecked(true);
        break;
    case PTRam:
        ui->radioButton_4->setChecked(true);
        break;
    case PTHDD:
        ui->radioButton_5->setChecked(true);
        break;
    case PTKasa:
        ui->radioButton_6->setChecked(true);
        break;
    case PTGucKaynak:
        ui->radioButton_7->setChecked(true);
        break;
    case PTMonitor:
        ui->radioButton_8->setChecked(true);
        break;
    case PTKlavye:
        ui->radioButton_9->setChecked(true);
        break;
    default :
        ui->radioButton_10->setChecked(true);

    }
    ui->parcaAdi->setText(veri->getParcaMarkasi());
}*/
