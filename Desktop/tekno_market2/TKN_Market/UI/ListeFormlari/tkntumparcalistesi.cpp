#include "tkntumparcalistesi.h"
#include "ui_tkntumparcalistesi.h"
#include <Veri/tkngenelveriyoneticisi.h>
#include <QStringList>
#include <QTableWidgetItem>
#include <Veri/VeriSiniflari/tknparcabilgileri.h>
#include <QPushButton>
#include <QMessageBox>
#include <UI/VeriFormlari/tknanakartpencere.h>
#include <UI/VeriFormlari/tknislemcipencere.h>

TKNTumParcaListesi::TKNTumParcaListesi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNTumParcaListesi)
{
    ui->setupUi(this);
    aramaYap();
}

TKNTumParcaListesi::~TKNTumParcaListesi()
{
    delete ui;
}

void TKNTumParcaListesi::ListeGuncelle()
{
    //listedeki bilgileri ekrana yazdıran fonk
    //tablo sıfırlanır
    ui->tableWidget->clear();
    //satır sütun ayarlanır
    ui->tableWidget->setRowCount(liste.length()+1);
    ui->tableWidget->setColumnCount(5);
    QStringList basliklar;
    basliklar << tr("Parça ID") << tr("Parça Türü") << tr("Parça Markası") << tr("Parça Modeli") << tr("Parça Sil");
    ui->tableWidget->setHorizontalHeaderLabels(basliklar);
    //veri
    for(int i=0; i<liste.length(); i++){
        QTableWidgetItem *hucre = new QTableWidgetItem();
        hucre->setText(tr("%1").arg(liste[i]->getId()));
        ui->tableWidget->setItem(i, 0, hucre);

        hucre = new QTableWidgetItem();
        switch (liste[i]->getParcaTuru()){
        case PTAnakart:
            hucre->setText("Anakart");
            break;
        case  PTCPU:
            hucre->setText("İşlemci");
            break;
        case PTRam:
            hucre->setText("RAM");
            break;
        case PTHDD:
            hucre->setText("HardDisk");
            break;
        case PTEkranKart:
            hucre->setText("Ekran Kartı");
            break;
        case PTKasa:
            hucre->setText("Kasa");
            break;
        case PTGucKaynak:
            hucre->setText("Güç Kaynağı");
            break;
        case PTMonitor:
            hucre->setText("Monitör");
            break;
        case PTKlavye:
            hucre->setText("Klavye");
            break;
        default:
            hucre->setText("Fare");
            break;

        }
        ui->tableWidget->setItem(i, 1, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getParcaMarkasi());
        ui->tableWidget->setItem(i, 2, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getParcaModeli());
        ui->tableWidget->setItem(i, 3, hucre);

        QPushButton *silmeButonu = new QPushButton(this);
        silmeButonu->setText(tr("Parçayı Sil"));
        ui->tableWidget->setCellWidget(i, 4, silmeButonu);

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
        });/*
        QPushButton *duzeltmeButonu = new QPushButton(this);
        duzeltmeButonu->setText(tr("Parçayı Düzelt"));
        ui->tableWidget->setCellWidget(i, 7, duzeltmeButonu);

        connect(duzeltmeButonu, &QPushButton::clicked, [veri_i, this]() {
            if(ui->tableWidget->columnAt(1) == PTAnakart){

            BURASI DÜZELTME YAPIYO

                TKNAnakartPencere form;
                form.setWindowTitle(tr("%1 Anakart Bilgileri Düzenle").arg(veri_i->getParcaMarkasi()));
                form.setVeri(veri_i);
                if(form.exec()==QDialog::Accepted){
                    form.getVeri();
                    this->ListeGuncelle();
                }
            }
            else if(ui->tableWidget->columnAt(1) == ){
                                     //buradan this güncelleye kadarki kısım düzenleme işini yapan kod
                TKNIslemciPencere form;
                form.setWindowTitle(tr("%1 İşlemci Bilgileri Düzenle").arg(veri_i->getParcaMarkasi()));
                form.setVeri(veri_i);
                if(form.exec()==QDialog::Accepted){
                    form.getVeri();
                    this->ListeGuncelle();
                }

                }



    });*/
    }

}

void TKNTumParcaListesi::aramaYap()
{
    auto ekran = this->ui;
    liste=TKNGenelVeriYoneticisi::sec().getParcaBilgisi().tumunuBul([ekran](TKNparcaBilgisiYoneticisi::Ptr veri)->bool{
            if(ekran->leParcaAdDegeri->text()=="" && ekran->leParcaModelDegeri->text()==""){
            return true;
            }
            if(ekran->leParcaAdDegeri->text()!=""){
                if(ekran->rbParcaAdiIleBaslayan->isChecked()){
                    if(!veri->getParcaMarkasi().toLower().startsWith(ekran->leParcaAdDegeri->text().toLower())){
                        return false;
                    }
                }else if(ekran->rbParcaAdiIleBiten->isChecked()){
                    if(!veri->getParcaMarkasi().toLower().endsWith(ekran->leParcaAdDegeri->text().toLower())){
                        return false;
                    }
                 }else if(ekran->rbParcaAdiIceren->isChecked()){
                    if(!veri->getParcaMarkasi().toLower().contains(ekran->leParcaAdDegeri->text().toLower())){
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

void TKNTumParcaListesi::Ara()
{
    if (ui->cbYazarkenAra->isChecked()) {
        aramaYap();
    }

    /*
    //tüm listeyi getirir
    liste=TKNGenelVeriYoneticisi::sec().getParcaBilgisi().tumunuBul([](TKNparcaBilgisiYoneticisi::Ptr p)->bool{
            return true;});
    ListeGuncelle();*/
}

void TKNTumParcaListesi::on_pushButton_2_clicked()
{
    aramaYap();
}
