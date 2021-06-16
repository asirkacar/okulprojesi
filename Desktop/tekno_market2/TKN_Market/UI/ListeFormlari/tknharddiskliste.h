#ifndef TKNHARDDISKLISTE_H
#define TKNHARDDISKLISTE_H

#include <QDialog>
#include <Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.h>

namespace Ui {
class TKNHarddiskListe;
}

class TKNHarddiskListe : public QDialog
{
    Q_OBJECT

public:
    explicit TKNHarddiskListe(QWidget *parent = nullptr);
    ~TKNHarddiskListe();

private slots:
    void on_pushButton_clicked();
    void Ara();

private:
    void ListeGuncelle();
    void aramaYap();
    Ui::TKNHarddiskListe *ui;
    TKNparcaBilgisiYoneticisi::Verilistesi liste;
};

#endif // TKNHARDDISKLISTE_H
