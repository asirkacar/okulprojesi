#ifndef TKNISLEMCILISTE_H
#define TKNISLEMCILISTE_H

#include <QDialog>
#include <Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.h>

namespace Ui {
class TKNIslemciListe;
}

class TKNIslemciListe : public QDialog
{
    Q_OBJECT

public:
    explicit TKNIslemciListe(QWidget *parent = nullptr);
    ~TKNIslemciListe();

private slots:
    void on_pushButton_clicked();
    void Ara();

private:
    void ListeGuncelle();
    void aramaYap();
    Ui::TKNIslemciListe *ui;
    TKNparcaBilgisiYoneticisi::Verilistesi liste;
};

#endif // TKNISLEMCILISTE_H
