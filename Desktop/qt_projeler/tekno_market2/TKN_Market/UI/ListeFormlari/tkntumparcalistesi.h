#ifndef TKNTUMPARCALISTESI_H
#define TKNTUMPARCALISTESI_H

#include <QDialog>
#include <Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.h>

namespace Ui {
class TKNTumParcaListesi;
}

class TKNTumParcaListesi : public QDialog
{
    Q_OBJECT

public:
    explicit TKNTumParcaListesi(QWidget *parent = nullptr);
    ~TKNTumParcaListesi();

private:
    void ListeGuncelle();
    void Ara();
    Ui::TKNTumParcaListesi *ui;
    TKNparcaBilgisiYoneticisi::Verilistesi liste;
};

#endif // TKNTUMPARCALISTESI_H
