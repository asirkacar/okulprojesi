#include "tknislemciliste.h"
#include "ui_tknislemciliste.h"

#include <Veri/tkngenelveriyoneticisi.h>
#include <QStringList>
#include <QTableWidgetItem>
#include <Veri/VeriSiniflari/tknparcabilgileri.h>
#include <QPushButton>
#include <QMessageBox>
#include <UI/VeriFormlari/tknislemcipencere.h>

TKNIslemciListe::TKNIslemciListe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNIslemciListe)
{
    ui->setupUi(this);
    aramaYap();
}

TKNIslemciListe::~TKNIslemciListe()
{
    delete ui;
}

void TKNIslemciListe::ListeGuncelle()
{
    ui->tableWidget->clear();
    //satır sütun ayarlanır
    ui->tableWidget->setRowCount(liste.length()+1);
    ui->tableWidget->setColumnCount(15);
    QStringList basliklar;
    basliklar << tr("Parça ID") << tr("Parça Türü") << tr("Parça Markası") << tr("Parça Modeli") << tr("Soket Tipi")
              << tr("İşlemci Hızı") << tr("Max Turbo Hızı") << tr("İşlemci Çekirdek Sayısı") << tr("İşlemci Ön Bellek")
              << tr("Bellek Türleri") << tr("Güç Tüketim") << tr("Entegre Grafik Kartı") << tr("Soğutucu");
    ui->tableWidget->setHorizontalHeaderLabels(basliklar);

    for(int i=0; i<liste.length(); i++){
        QTableWidgetItem *hucre = new QTableWidgetItem();
        hucre->setText(tr("%1").arg(liste[i]->getId()));
        ui->tableWidget->setItem(i, 0, hucre);

        hucre = new QTableWidgetItem();
        switch (liste[i]->getParcaTuru()){
        case PTCPU:
            hucre->setText("İşlemci");
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
        hucre->setText(liste[i]->getSoketTipi());
        ui->tableWidget->setItem(i, 4, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getIslemciHizi());
        ui->tableWidget->setItem(i, 5, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getMaxTurboHizi());
        ui->tableWidget->setItem(i, 6, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getIslemciCekirdekSayisi());
        ui->tableWidget->setItem(i, 7, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getIslemciOnbellek());
        ui->tableWidget->setItem(i, 8, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getBellekTuru());
        ui->tableWidget->setItem(i, 9, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getGucTuketim());
        ui->tableWidget->setItem(i, 10, hucre);

        hucre = new QTableWidgetItem();
        switch (liste[i]->getParcaEvetHayir()){
        case PTEvet:
            hucre->setText("Var");
            break;
        default:
            hucre->setText("Yok");}
        ui->tableWidget->setItem(i, 11, hucre);

        hucre = new QTableWidgetItem();
        switch (liste[i]->getParcaVarYok()){
        case PTVar:
            hucre->setText("Var");
            break;
        default:
            hucre->setText("Yok");}
        ui->tableWidget->setItem(i, 12, hucre);

        QPushButton *silmeButonu = new QPushButton(this);
        silmeButonu->setText(tr("Parçayı Sil"));
        ui->tableWidget->setCellWidget(i, 13, silmeButonu);

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
        ui->tableWidget->setCellWidget(i, 14, duzeltmeButonu);

        connect(duzeltmeButonu, &QPushButton::clicked, [veri_i, this]() {
                TKNIslemciPencere form;
                form.setWindowTitle(tr("%1 İşlemci Bilgilerini Düzenle").arg(veri_i->getParcaMarkasi()));
                form.setVeri(veri_i);
                if(form.exec()==QDialog::Accepted){
                    form.getVeri();
                    this->ListeGuncelle();
                }

    });
    }

}

void TKNIslemciListe::aramaYap()
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

void TKNIslemciListe::on_pushButton_clicked()
{
    aramaYap();
}

void TKNIslemciListe::Ara()
{
    if (ui->cbYazarkenAra->isChecked()) {
        aramaYap();
    }
}
