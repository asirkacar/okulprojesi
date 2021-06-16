#include "tknkasaliste.h"
#include "ui_tknkasaliste.h"

#include <Veri/tkngenelveriyoneticisi.h>
#include <QStringList>
#include <QTableWidgetItem>
#include <Veri/VeriSiniflari/tknparcabilgileri.h>
#include <QPushButton>
#include <QMessageBox>
#include <UI/VeriFormlari/tknkasapencere.h>

TKNKasaListe::TKNKasaListe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNKasaListe)
{
    ui->setupUi(this);
    aramaYap();
}

TKNKasaListe::~TKNKasaListe()
{
    delete ui;
}

void TKNKasaListe::ListeGuncelle()
{
    ui->tableWidget->clear();
    //satır sütun ayarlanır
    ui->tableWidget->setRowCount(liste.length()+1);
    ui->tableWidget->setColumnCount(18);
    QStringList basliklar;
    basliklar << tr("Parça ID") << tr("Parça Türü") << tr("Parça Markası") << tr("Parça Modeli") << tr("Kasa Yapısı")
              << tr("Anakart Yapısı") << tr("Kasa Boyutu") << tr("Güç kaynağı") << tr("Güç Değeri")
              << tr("Dahili Fan Sayısı") << tr("Fan Yuva Sayısı") << tr("Ekran Kartı Desteği") << tr("İşlemci Soğutucu "
"Yüksekliği") << tr("3.5 Hdd Yuva Sayısı") << tr("2.5 Hdd Yuva Sayısı") << tr("Usb Sayısı");
    ui->tableWidget->setHorizontalHeaderLabels(basliklar);

    for(int i=0; i<liste.length(); i++){
        QTableWidgetItem *hucre = new QTableWidgetItem();
        hucre->setText(tr("%1").arg(liste[i]->getId()));
        ui->tableWidget->setItem(i, 0, hucre);

        hucre = new QTableWidgetItem();
        switch (liste[i]->getParcaTuru()){
        case PTKasa:
            hucre->setText("Kasa");
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
        hucre->setText(liste[i]->getKasaYapi());
        ui->tableWidget->setItem(i, 4, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getAnakartYapi());
        ui->tableWidget->setItem(i, 5, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getBoyut());
        ui->tableWidget->setItem(i, 6, hucre);

        hucre = new QTableWidgetItem();
        switch (liste[i]->getParcaVarYok()){
        case PTVar:
            hucre->setText("Var");
            break;
        default:
            hucre->setText("Yok");}
        ui->tableWidget->setItem(i, 7, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getGucKaynagi());
        ui->tableWidget->setItem(i, 8, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getDahiliFanSayisi());
        ui->tableWidget->setItem(i, 9, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getFanYuvaSayisi());
        ui->tableWidget->setItem(i, 10, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getEkranKartiDestekMax());
        ui->tableWidget->setItem(i, 11, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getCpuSogutucuYukseklik());
        ui->tableWidget->setItem(i, 12, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getKasaYuvaSayisiUcBucuk());
        ui->tableWidget->setItem(i, 13, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getKasaYuvaSayisiIkiBucuk());
        ui->tableWidget->setItem(i, 14, hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getUsbSayisi());
        ui->tableWidget->setItem(i, 15, hucre);

        QPushButton *silmeButonu = new QPushButton(this);
        silmeButonu->setText(tr("Parçayı Sil"));
        ui->tableWidget->setCellWidget(i, 16, silmeButonu);

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
        ui->tableWidget->setCellWidget(i, 17, duzeltmeButonu);

        connect(duzeltmeButonu, &QPushButton::clicked, [veri_i, this]() {
                TKNKasaPencere form;
                form.setWindowTitle(tr("%1 Kasa Bilgilerini Düzenle").arg(veri_i->getParcaMarkasi()));
                form.setVeri(veri_i);
                if(form.exec()==QDialog::Accepted){
                    form.getVeri();
                    this->ListeGuncelle();
                }

    });
    }
}

void TKNKasaListe::aramaYap()
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

void TKNKasaListe::on_pushButton_clicked()
{
    aramaYap();
}

void TKNKasaListe::Ara()
{
    if (ui->cbYazarkenAra->isChecked()) {
        aramaYap();
    }
}
