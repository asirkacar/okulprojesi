#ifndef TKNGUCKAYNAKLISTE_H
#define TKNGUCKAYNAKLISTE_H

#include <QDialog>
#include <Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.h>

namespace Ui {
class TKNGucKaynakListe;
}

class TKNGucKaynakListe : public QDialog
{
    Q_OBJECT

public:
    explicit TKNGucKaynakListe(QWidget *parent = nullptr);
    ~TKNGucKaynakListe();

private slots:
    void on_pushButton_clicked();
    void Ara();

private:
    void ListeGuncelle();
    void aramaYap();
    Ui::TKNGucKaynakListe *ui;
    TKNparcaBilgisiYoneticisi::Verilistesi liste;
};

#endif // TKNGUCKAYNAKLISTE_H
