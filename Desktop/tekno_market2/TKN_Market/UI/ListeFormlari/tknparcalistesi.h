#ifndef TKNPARCALISTESI_H
#define TKNPARCALISTESI_H

#include <QDialog>
#include <Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.h>

namespace Ui {
class TKNParcaListesi;
}

class TKNParcaListesi : public QDialog
{
    Q_OBJECT

public:
    explicit TKNParcaListesi(QWidget *parent = nullptr);
    ~TKNParcaListesi();

private:
    //void ListeGuncelle();
    //void Ara();
    Ui::TKNParcaListesi *ui;

    //TKNparcaBilgisiYoneticisi::Verilistesi liste;
};

#endif // TKNPARCALISTESI_H
