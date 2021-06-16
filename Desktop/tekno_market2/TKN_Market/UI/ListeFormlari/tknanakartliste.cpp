#include "tknanakartliste.h"
#include "ui_tknanakartliste.h"

#include <Veri/tkngenelveriyoneticisi.h>
#include <QStringList>
#include <QTableWidgetItem>
#include <Veri/VeriSiniflari/tknparcabilgileri.h>
#include <QPushButton>
#include <QMessageBox>
#include <UI/VeriFormlari/tknanakartpencere.h>

TKNAnakartListe::TKNAnakartListe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNAnakartListe)
{
    ui->setupUi(this);
    aramaYap();
}

TKNAnakartListe::~TKNAnakartListe()
{
    delete ui;
}

void TKNAnakartListe::ListeGuncelle()
{
    ui->tableWidget->clear();
    //satır sütun ayarlanır
    ui->tableWidget->setRowCount(liste.length()+1);
    ui->tableWidget->setColumnCount(16);
    QStringList basliklar;
    basliklar << tr("Parça ID") << tr("Parça Türü") << tr("Parça Markası") << tr("Parça Modeli") << tr("Anakart Yapısı")
              << tr("Anakart Chipseti") << tr("Soket tipi") << tr("Ram Tipi") << tr("Ram Slot Sayısı") << tr("Max Ram Desteği")
              << tr("M2 Yuva Sayısı") << tr("USB 3.0") << tr("USB 2.0") << tr("HDMI");
    ui->tableWidget->setHorizontalHeaderLabels(basliklar);

    for(int i=0; i<liste.length(); i++){
        QTableWidgetItem *hucre = new QTableWidgetItem();
        hucre->setText(tr("%1").arg(liste[i]->getId()));
        ui->tableWidget->setItem(i, 0, hucre);

        hucre = new QTableWidgetItem();
        switch (liste[i]->getParcaTuru()){
        case PTAnakart:
            hucre->setText("Anakart");
            break;
        }
        ui->tableWidget->setItem(i, 1, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getParcaMarkasi());
        ui->tableWidget->setItem(i, 2, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getParcaModeli());
        ui->tableWidget->setItem(i, 3, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getAnakartYapi());
        ui->tableWidget->setItem(i, 4, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getAnakartChipseti());
        ui->tableWidget->setItem(i, 5, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getSoketTipi());
        ui->tableWidget->setItem(i, 6, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getRamTipi());
        ui->tableWidget->setItem(i, 7, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getRamSlotSayisi());
        ui->tableWidget->setItem(i, 8, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getMaxRamDestegi());
        ui->tableWidget->setItem(i, 9, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getIkiYuvaSayisi());
        ui->tableWidget->setItem(i, 10, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getUsbUcNoktaSifir());
        ui->tableWidget->setItem(i, 11, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getUsbIkiNoktaSifir());
        ui->tableWidget->setItem(i, 12, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getHdmi());
        ui->tableWidget->setItem(i, 13, hucre);

        QPushButton *silmeButonu = new QPushButton(this);
        silmeButonu->setText(tr("Parçayı Sil"));
        ui->tableWidget->setCellWidget(i, 14, silmeButonu);

        auto veri_i = liste[i];

        connect(silmeButonu, &QPushButton::clicked, [veri_i, this]() {
            auto cevap = QMessageBox::question(
                nullptr,
                tr("Silme Onayı"),
                tr("%1 isimli parçayı silmek istediğinize emin misiniz?").arg(veri_i->getParcaMarkasi()));
            if (cevap == QMessageBox::Yes) {
                TKNGenelVeriYoneticisi::sec().getParcaBilgisi().sil(veri_i->getId());
                QMessageBox::information(nullptr,
                                         tr("Kayıt Silindi"),
                                         tr("Kayıt Silme işlemi tamamlandı!"));
                this->aramaYap();
            }
        });
        QPushButton *duzeltmeButonu = new QPushButton(this);
        duzeltmeButonu->setText(tr("Parçayı Düzelt"));
        ui->tableWidget->setCellWidget(i, 15, duzeltmeButonu);

        connect(duzeltmeButonu, &QPushButton::clicked, [veri_i, this]() {
                TKNAnakartPencere form;
                form.setWindowTitle(tr("%1 Anakart Bilgilerini Düzenle").arg(veri_i->getParcaMarkasi()));
                form.setVeri(veri_i);
                if(form.exec()==QDialog::Accepted){
                    form.getVeri();
                    this->ListeGuncelle();
                }

    });
    }
}

void TKNAnakartListe::aramaYap()
{
    auto ekran = this->ui;
    liste=TKNGenelVeriYoneticisi::sec().getParcaBilgisi().tumunuBul([ekran](TKNparcaBilgisiYoneticisi::Ptr veri)->bool{
            if(ekran->leParcaMarkaDegeri->text()=="" && ekran->leParcaModelDegeri->text()==""){
            return true;
            }
            if(ekran->leParcaMarkaDegeri->text()!=""){
                if(ekran->rbParcaMarkaIleBaslayan->isChecked()){
                    if(!veri->getParcaMarkasi().toLower().startsWith(ekran->leParcaMarkaDegeri->text().toLower())){
                        return false;
                    }
                }else if(ekran->rbParcaMarkaIleBiten->isChecked()){
                    if(!veri->getParcaMarkasi().toLower().endsWith(ekran->leParcaMarkaDegeri->text().toLower())){
                        return false;
                    }
                 }else if(ekran->rbParcaMarkaIceren->isChecked()){
                    if(!veri->getParcaMarkasi().toLower().contains(ekran->leParcaMarkaDegeri->text().toLower())){
                        return false;
                    }
                 }
            }
            if(ekran->leParcaModelDegeri->text()!=""){
                if(ekran->rbParcaModelIleBaslayan->isChecked()){
                    if(!veri->getParcaModeli().toLower().startsWith(ekran->leParcaModelDegeri->text().toLower())){
                        return false;
                    }
                }else if(ekran->rbParcaModelIleBiten->isChecked()){
                    if(!veri->getParcaModeli().toLower().endsWith(ekran->leParcaModelDegeri->text().toLower())){
                        return false;
                    }
                 }else if(ekran->rbParcaModelIceren->isChecked()){
                    if(!veri->getParcaModeli().toLower().contains(ekran->leParcaModelDegeri->text().toLower())){
                        return false;
                    }
                 }
            }
            return true;
    });

    ListeGuncelle();
}

void TKNAnakartListe::on_pushButton_clicked()
{
    aramaYap();
}

void TKNAnakartListe::Ara()
{
    if (ui->cbYazarkenAra->isChecked()) {
        aramaYap();
    }
}
