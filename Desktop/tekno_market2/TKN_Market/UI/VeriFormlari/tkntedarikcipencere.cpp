#include "tkntedarikcipencere.h"
#include "ui_tkntedarikcipencere.h"

#include <UI/VeriFormlari/Widgetlar/tedarikciduzenleme.h>
#include <UI/ListeFormlari/tkntedarikcilistew.h>
#include <Veri/tkngenelveriyoneticisi.h>
#include <Veri/VeriSiniflari/tkntedarikci.h>

TKNTedarikciPencere::TKNTedarikciPencere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNTedarikciPencere)
{
    ui->setupUi(this);


    TKNTedarikciListeW *widget1 = new TKNTedarikciListeW(this);
    ui->tabTedarikciIslemleri->addTab(widget1, tr("Tedarikçi Liste"));

    connect(widget1, &TKNTedarikciListeW::duzeltmeTalepEdildi,this,&TKNTedarikciPencere::tedarikciDuzelt);

}

TKNTedarikciPencere::~TKNTedarikciPencere()
{
    delete ui;
}



void TKNTedarikciPencere::on_btnYeniTedarikci_clicked()
{
    TedarikciDuzenleme *widget = new TedarikciDuzenleme(this);
    auto index = ui->tabTedarikciIslemleri->addTab(widget, tr("Yeni Tedarikçi Ekle"));

    auto veri = TKNGenelVeriYoneticisi::sec().getTedarikci().yeni();
    widget->setVeri(veri);

    ui->tabTedarikciIslemleri->setCurrentIndex(index);

    TKNTedarikciListeW *listeWgt=nullptr;
    for(auto i=0; i<this->ui->tabTedarikciIslemleri->count(); i++){
        auto ptr=this->ui->tabTedarikciIslemleri->widget(i);
        listeWgt=static_cast<TKNTedarikciListeW *>(ptr);
        if(listeWgt != nullptr){
            break;
        }
    }

    connect(widget, &TedarikciDuzenleme::iptalKapat,[this, widget](){
        for (auto i=0; i<this->ui->tabTedarikciIslemleri->count(); i++ ) {
            if(this->ui->tabTedarikciIslemleri->widget(i)==widget){
                this->ui->tabTedarikciIslemleri->removeTab(i);
                return;
            }
        }
    });
    connect(widget, &TedarikciDuzenleme::kaydetKapat,[this,widget, listeWgt](){
        TKNGenelVeriYoneticisi::sec().getTedarikci().ekle(widget->getVeri());
        listeWgt->aramaYap();
        for (auto i=0; i<this->ui->tabTedarikciIslemleri->count(); i++ ) {
            if(this->ui->tabTedarikciIslemleri->widget(i)==widget){
                this->ui->tabTedarikciIslemleri->removeTab(i);
                return;
            }
        }
    });
}

void TKNTedarikciPencere::tedarikciDuzelt(TKNTedarikciPtr tedarikci)
{
    TedarikciDuzenleme *widget = new TedarikciDuzenleme(this);
    auto index = ui->tabTedarikciIslemleri->addTab(widget, tr("%1 Tedarikçi Düzenle").arg(tedarikci->getTedarikciAdi()));
    widget->setVeri(tedarikci);
    ui->tabTedarikciIslemleri->setCurrentIndex(index);

    TKNTedarikciListeW *listeWgt=nullptr;
    for(auto i=0; i<this->ui->tabTedarikciIslemleri->count(); i++){
        auto ptr=this->ui->tabTedarikciIslemleri->widget(i);
        listeWgt=static_cast<TKNTedarikciListeW *>(ptr);
        if(listeWgt != nullptr){
            break;
        }
    }

    connect(widget, &TedarikciDuzenleme::iptalKapat,[this, widget](){
        for (auto i=0; i<this->ui->tabTedarikciIslemleri->count(); i++ ) {
            if(this->ui->tabTedarikciIslemleri->widget(i)==widget){
                this->ui->tabTedarikciIslemleri->removeTab(i);
                return;
            }
        }
    });

    connect(widget, &TedarikciDuzenleme::kaydetKapat,[this,widget, listeWgt](){
        widget->getVeri();
        listeWgt->aramaYap();
        for (auto i=0; i<this->ui->tabTedarikciIslemleri->count(); i++ ) {
            if(this->ui->tabTedarikciIslemleri->widget(i)==widget){
                this->ui->tabTedarikciIslemleri->removeTab(i);
                return;
            }
        }
    });
}

