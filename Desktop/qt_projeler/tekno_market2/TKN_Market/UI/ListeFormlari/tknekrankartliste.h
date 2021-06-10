#ifndef TKNEKRANKARTLISTE_H
#define TKNEKRANKARTLISTE_H

#include <QDialog>
#include <Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.h>

namespace Ui {
class TKNEkranKartListe;
}

class TKNEkranKartListe : public QDialog
{
    Q_OBJECT

public:
    explicit TKNEkranKartListe(QWidget *parent = nullptr);
    ~TKNEkranKartListe();

    TKNparcaBilgisiYoneticisi::Verilistesi getListe() const;
    void setListe(const TKNparcaBilgisiYoneticisi::Verilistesi &value);

private slots:
    void on_pushButton_2_clicked();
    void Ara();

private:
    void ListeGuncelle();
    void aramaYap();
    Ui::TKNEkranKartListe *ui;
    TKNparcaBilgisiYoneticisi::Verilistesi liste;
};

#endif // TKNEKRANKARTLISTE_H
