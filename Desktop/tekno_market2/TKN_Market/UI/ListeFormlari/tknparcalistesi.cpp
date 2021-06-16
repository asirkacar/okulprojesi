#include "tknparcalistesi.h"
#include "ui_tknparcalistesi.h"
#include <Veri/tkngenelveriyoneticisi.h>
#include <QStringList>
#include <QTableWidgetItem>
#include <Veri/VeriSiniflari/tknparcabilgileri.h>

TKNParcaListesi::TKNParcaListesi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNParcaListesi)
{
    ui->setupUi(this);
    //Ara();
}

TKNParcaListesi::~TKNParcaListesi()
{
    delete ui;
}
/*
void TKNParcaListesi::ListeGuncelle()
{
    //listedeki bilgileri ekrana yazdıran fonk
    //tablo sıfırlanır
    ui->tableWidget->clear();
    //satır sütun ayarlanır
    ui->tableWidget->setRowCount(liste.length()+1);
    ui->tableWidget->setColumnCount(6);
    QStringList basliklar;
    basliklar << tr("Parça ID") << tr("Parça Türü") << tr("Parça Adı");
    ui->tableWidget->setHorizontalHeaderLabels(basliklar);
    //veri
    for(int i=0; i<liste.length(); i++){
        QTableWidgetItem *hucre = new QTableWidgetItem();
        hucre->setText(tr("%1").arg(liste[i]->getID()));
        ui->tableWidget->setItem(i, 0, hucre);

        hucre = new QTableWidgetItem();
        switch (liste[i]->getParcaTuru()){
        case PTAnakart:
            hucre->setText("Anakart");
            break;
        case  PTCPU:
            hucre->setText("İşlemci");
            break;
        case PTEkranKart:
            hucre->setText("Ekrankartı");
        case PTRam:
            hucre->setText("RAM");
            break;
        case PTHDD:
            hucre->setText("HardDisk");
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

    }

}

void TKNParcaListesi::Ara()
{
    liste=TKNGenelVeriYoneticisi::sec().getParcaBilgisi().tumunuBul([](TKNparcaBilgisiYoneticisi::Ptr p)->bool{
            return true;});
    ListeGuncelle();
}*/
