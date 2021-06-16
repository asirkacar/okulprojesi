#include "tkntedarikcilistew.h"
#include "ui_tkntedarikcilistew.h"

#include <QStringList>
#include <QTableWidgetItem>
#include <QPushButton>
#include <QMessageBox>

#include <Veri/VeriSiniflari/tkntedarikci.h>
#include <Veri/tkngenelveriyoneticisi.h>

TKNTedarikciListeW::TKNTedarikciListeW(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TKNTedarikciListeW)
{
    ui->setupUi(this);
    aramaYap();
}

TKNTedarikciListeW::~TKNTedarikciListeW()
{
    delete ui;
}

void TKNTedarikciListeW::Ara()
{
    if (ui->cbYazarkenAra->isChecked()) {
        aramaYap();
    }
}

void TKNTedarikciListeW::ListeGuncelle()
{
    ui->tableWidget->clear();
    //satır sütun ayarlanır
    ui->tableWidget->setRowCount(liste.length()+1);
    ui->tableWidget->setColumnCount(7);
    QStringList basliklar;
    basliklar << tr("Tedarikçi ID") << tr("Tedarikçi Adı") << tr("Tedarikçi Adresi") << tr("Tedarikçi Telefonu")
              << tr("Tedarikçi Yetkili Kişi") << tr("Tedarikçi Sil") << tr("Tedarikçi Düzenle");

    ui->tableWidget->setHorizontalHeaderLabels(basliklar);
    for(int i=0; i<liste.length(); i++){
        QTableWidgetItem *hucre = new QTableWidgetItem();
        hucre->setText(tr("%1").arg(liste[i]->getId()));
        ui->tableWidget->setItem(i, 0, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getTedarikciAdi());
        ui->tableWidget->setItem(i, 1, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getTedarikciAdresi());
        ui->tableWidget->setItem(i, 2, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getTedarikciTelefonu());
        ui->tableWidget->setItem(i, 3, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getTedarikciYetkiliKisi());
        ui->tableWidget->setItem(i, 4, hucre);

        QPushButton *silmeButonu = new QPushButton(this);
        silmeButonu->setText(tr("Tedarikçiyi Sil"));
        ui->tableWidget->setCellWidget(i, 5, silmeButonu);

        auto veri_i = liste[i];

        connect(silmeButonu, &QPushButton::clicked, [veri_i, this]() {
            auto cevap = QMessageBox::question(
                nullptr,
                tr("Silme Onayı"),
                tr("%1 isimli Tedarikçiyi silmek istediğinize emin misiniz?").arg(veri_i->getTedarikciAdi()));
            if (cevap == QMessageBox::Yes) {
                TKNGenelVeriYoneticisi::sec().getTedarikci().sil(veri_i->getId());
                QMessageBox::information(nullptr,
                                         tr("Kayıt Silindi"),
                                         tr("Kayıt Silme işlemi tamamlandı!"));
                this->aramaYap();
            }
        });
        QPushButton *duzeltmeButonu = new QPushButton(this);
        duzeltmeButonu->setText(tr("Tedarikçiyi Düzelt"));
        ui->tableWidget->setCellWidget(i, 6, duzeltmeButonu);

        connect(duzeltmeButonu, &QPushButton::clicked, [veri_i, this]() {
            emit this->duzeltmeTalepEdildi(veri_i);
            /*
                TKNRamPencere form;
                form.setWindowTitle(tr("%1 Tedarikçi Bilgilerini Düzenle").arg(veri_i->getTedarikciAdi()));
                form.setVeri(veri_i);
                if(form.exec()==QDialog::Accepted){
                    form.getVeri();
                    this->ListeGuncelle();
                }*/

    });
    }
}

void TKNTedarikciListeW::aramaYap()
{
    auto ekran = this->ui;
    liste=TKNGenelVeriYoneticisi::sec().getTedarikci().tumunuBul([ekran](TKNTedarikciYonetici::Ptr veri)->bool{
            if(ekran->leTedarikciDegeri->text()=="" && ekran->leYetkiliKisiDegeri->text()==""){
            return true;
            }
            if(ekran->leTedarikciDegeri->text()!=""){
                if(ekran->rbTedarikciIleBaslayan->isChecked()){
                    if(!veri->getTedarikciAdi().toLower().startsWith(ekran->leTedarikciDegeri->text().toLower())){
                        return false;
                    }
                }else if(ekran->rbTedarikciIleBiten->isChecked()){
                    if(!veri->getTedarikciAdi().toLower().endsWith(ekran->leTedarikciDegeri->text().toLower())){
                        return false;
                    }
                 }else if(ekran->rbTedarikciIceren->isChecked()){
                    if(!veri->getTedarikciAdi().toLower().contains(ekran->leTedarikciDegeri->text().toLower())){
                        return false;
                    }
                 }
            }
            if(ekran->leYetkiliKisiDegeri->text()!=""){
                if(ekran->rbYetkiliKisiIleBaslayan->isChecked()){
                    if(!veri->getTedarikciYetkiliKisi().toLower().startsWith(ekran->leYetkiliKisiDegeri->text().toLower())){
                        return false;
                    }
                }else if(ekran->rbYetkiliKisilIleBiten->isChecked()){
                    if(!veri->getTedarikciYetkiliKisi().toLower().endsWith(ekran->leYetkiliKisiDegeri->text().toLower())){
                        return false;
                    }
                 }else if(ekran->rbYetkiliKisiIceren->isChecked()){
                    if(!veri->getTedarikciYetkiliKisi().toLower().contains(ekran->leYetkiliKisiDegeri->text().toLower())){
                        return false;
                    }
                 }
            }
            return true;
    });

    ListeGuncelle();
}
