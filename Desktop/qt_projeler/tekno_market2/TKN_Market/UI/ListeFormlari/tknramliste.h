#ifndef TKNRAMLISTE_H
#define TKNRAMLISTE_H

#include <QDialog>
#include <Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.h>

namespace Ui {
class TKNRamListe;
}

class TKNRamListe : public QDialog
{
    Q_OBJECT

public:
    explicit TKNRamListe(QWidget *parent = nullptr);
    ~TKNRamListe();

private slots:
    void on_pushButton_clicked();
    void Ara();

private:
    void ListeGuncelle();
    void aramaYap();
    Ui::TKNRamListe *ui;
    TKNparcaBilgisiYoneticisi::Verilistesi liste;
};

#endif // TKNRAMLISTE_H
