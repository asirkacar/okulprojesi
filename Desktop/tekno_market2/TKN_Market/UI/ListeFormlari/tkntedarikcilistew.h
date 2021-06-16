#ifndef TKNTEDARIKCILISTEW_H
#define TKNTEDARIKCILISTEW_H

#include <QWidget>
#include <Veri/tanimlar.h>

#include <Veri/VeriYoneticileri/tkntedarikciyonetici.h>

namespace Ui {
class TKNTedarikciListeW;
}

class TKNTedarikciListeW : public QWidget
{
    Q_OBJECT

public:
    explicit TKNTedarikciListeW(QWidget *parent = nullptr);
    ~TKNTedarikciListeW();
    void aramaYap();
signals:
    void duzeltmeTalepEdildi(TKNTedarikciYonetici::Ptr tedarikci);

private slots:
    void Ara();


private:
    void ListeGuncelle();


    Ui::TKNTedarikciListeW *ui;
    TKNTedarikciYonetici::Verilistesi liste;
};

#endif // TKNTEDARIKCILISTEW_H
