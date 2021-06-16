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

private slots:
    void on_pushButton_2_clicked();
    void Ara();

private:
    void ListeGuncelle();
    void aramaYap();

    Ui::TKNTumParcaListesi *ui;
    TKNparcaBilgisiYoneticisi::Verilistesi liste;
};

#endif // TKNTUMPARCALISTESI_H
