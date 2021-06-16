#include "tknmusteripencere.h"
#include "ui_tknmusteripencere.h"
#include <Veri/VeriSiniflari/tknmusteribilgileri.h>


TKNMusteriPencere::TKNMusteriPencere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNMusteriPencere)
{
    ui->setupUi(this);
}

TKNMusteriPencere::~TKNMusteriPencere()
{
    delete ui;
}

const TKNMusteriBilgileriPtr &TKNMusteriPencere::getVeri() const
{
    veri->setMusteriAdi(ui->lineEdit->text());
    veri->setMusteriAdresi(ui->plainTextEdit->toPlainText());
    veri->setMusteriTelefonu(ui->lineEdit_3->text());
    return veri;
}

void TKNMusteriPencere::setVeri(const TKNMusteriBilgileriPtr &newVeri)
{
    veri = newVeri;

    ui->lineEdit->setText(veri->getMusteriAdi());
    ui->plainTextEdit->setPlainText(veri->getMusteriAdresi());
    ui->lineEdit_3->setText(veri->getMusteriTelefonu());
}
