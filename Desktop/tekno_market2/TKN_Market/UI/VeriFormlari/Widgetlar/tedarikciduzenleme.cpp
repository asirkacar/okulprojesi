#include "tedarikciduzenleme.h"
#include "ui_tedarikciduzenleme.h"

#include <Veri/VeriSiniflari/tkntedarikci.h>

TedarikciDuzenleme::TedarikciDuzenleme(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TedarikciDuzenleme)
{
    ui->setupUi(this);
}

TedarikciDuzenleme::~TedarikciDuzenleme()
{
    delete ui;
}

void TedarikciDuzenleme::on_btnKaydet_clicked()
{
    emit kaydetKapat();
}

const TKNTedarikciPtr &TedarikciDuzenleme::getVeri() const
{
    veri->setTedarikciAdi(ui->leTedarikciAdi->text());
    veri->setTedarikciTelefonu(ui->leTedarikciTelefonu->text());
    veri->setTedarikciYetkiliKisi(ui->leTedarikciYetkiliKisi->text());
    veri->setTedarikciAdresi(ui->pteTedarikciAdresi->toPlainText());
    return veri;
}

void TedarikciDuzenleme::setVeri(const TKNTedarikciPtr &newVeri)
{
    veri = newVeri;
    ui->leTedarikciAdi->setText(veri->getTedarikciAdi());
    ui->leTedarikciTelefonu->setText(veri->getTedarikciTelefonu());
    ui->leTedarikciYetkiliKisi->setText(veri->getTedarikciYetkiliKisi());
    ui->pteTedarikciAdresi->setPlainText(veri->getTedarikciAdresi());
}


void TedarikciDuzenleme::on_btnIptal_clicked()
{
    emit iptalKapat();
}

