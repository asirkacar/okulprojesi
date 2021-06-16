#include "tknramliste.h"
#include "ui_tknramliste.h"

#include <Veri/tkngenelveriyoneticisi.h>
#include <QStringList>
#include <QTableWidgetItem>
#include <Veri/VeriSiniflari/tknparcabilgileri.h>
#include <QPushButton>
#include <QMessageBox>
#include <UI/VeriFormlari/tknrampencere.h>

TKNRamListe::TKNRamListe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNRamListe)
{
    ui->setupUi(this);
    aramaYap();
}

TKNRamListe::~TKNRamListe()
{
    delete ui;
}

void TKNRamListe::ListeGuncelle()
{
    ui->tableWidget->clear();
    //satır sütun ayarlanır
    ui->tableWidget->setRowCount(liste.length()+1);
    ui->tableWidget->setColumnCount(10);
    QStringList basliklar;
    basliklar << tr("Parça ID") << tr("Parça Türü") << tr("Parça Markası") << tr("Parça Modeli") << tr("Ram Tipi")
              << tr("Hafıza Bus Hızı") << tr("Ram Kapasitesi") << tr("Gecikme Süresi");
    ui->tableWidget->setHorizontalHeaderLabels(basliklar);

    for(int i=0; i<liste.length(); i++){
        QTableWidgetItem *hucre = new QTableWidgetItem();
        hucre->setText(tr("%1").arg(liste[i]->getId()));
        ui->tableWidget->setItem(i, 0, hucre);

        hucre = new QTableWidgetItem();
        switch (liste[i]->getParcaTuru()){
        case PTRam:
            hucre->setText("Ram");
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
        hucre->setText(liste[i]->getRamTipi());
        ui->tableWidget->setItem(i, 4, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getHafizaBusHizi());
        ui->tableWidget->setItem(i, 5, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getRamKapasitesi());
        ui->tableWidget->setItem(i, 6, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getGecikmeSuresi());
        ui->tableWidget->setItem(i, 7, hucre);

        QPushButton *silmeButonu = new QPushButton(this);
        silmeButonu->setText(tr("Parçayı Sil"));
        ui->tableWidget->setCellWidget(i, 8, silmeButonu);

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
        ui->tableWidget->setCellWidget(i, 9, duzeltmeButonu);

        connect(duzeltmeButonu, &QPushButton::clicked, [veri_i, this]() {
                TKNRamPencere form;
                form.setWindowTitle(tr("%1 Ram Bilgilerini Düzenle").arg(veri_i->getParcaMarkasi()));
                form.setVeri(veri_i);
                if(form.exec()==QDialog::Accepted){
                    form.getVeri();
                    this->ListeGuncelle();
                }

    });
    }
}

void TKNRamListe::aramaYap()
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

void TKNRamListe::on_pushButton_clicked()
{
    aramaYap();
}

void TKNRamListe::Ara()
{
    if (ui->cbYazarkenAra->isChecked()) {
        aramaYap();
    }
}
