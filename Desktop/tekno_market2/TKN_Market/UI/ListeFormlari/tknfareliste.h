#ifndef TKNFARELISTE_H
#define TKNFARELISTE_H

#include <QDialog>
#include <Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.h>

namespace Ui {
class TKNFareListe;
}

class TKNFareListe : public QDialog
{
    Q_OBJECT

public:
    explicit TKNFareListe(QWidget *parent = nullptr);
    ~TKNFareListe();

    TKNparcaBilgisiYoneticisi::Verilistesi getListe() const;
    void setListe(const TKNparcaBilgisiYoneticisi::Verilistesi &value);

private slots:
    void on_pushButton_clicked();
    void Ara();

private:
    void ListeGuncelle();
    void aramaYap();
    Ui::TKNFareListe *ui;
    TKNparcaBilgisiYoneticisi::Verilistesi liste;

};

#endif // TKNFARELISTE_H
