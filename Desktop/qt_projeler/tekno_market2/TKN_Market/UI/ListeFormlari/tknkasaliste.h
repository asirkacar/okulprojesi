#ifndef TKNKASALISTE_H
#define TKNKASALISTE_H

#include <QDialog>
#include <Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.h>

namespace Ui {
class TKNKasaListe;
}

class TKNKasaListe : public QDialog
{
    Q_OBJECT

public:
    explicit TKNKasaListe(QWidget *parent = nullptr);
    ~TKNKasaListe();

private slots:
    void on_pushButton_clicked();
    void Ara();

private:
    void ListeGuncelle();
    void aramaYap();
    Ui::TKNKasaListe *ui;
    TKNparcaBilgisiYoneticisi::Verilistesi liste;
};

#endif // TKNKASALISTE_H
