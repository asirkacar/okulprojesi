#ifndef TKNANAKARTLISTE_H
#define TKNANAKARTLISTE_H

#include <QDialog>
#include <Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.h>



namespace Ui {
class TKNAnakartListe;
}

class TKNAnakartListe : public QDialog
{
    Q_OBJECT

public:
    explicit TKNAnakartListe(QWidget *parent = nullptr);
    ~TKNAnakartListe();

private slots:
    void on_pushButton_clicked();
    void Ara();

private:
    void ListeGuncelle();
    void aramaYap();
    Ui::TKNAnakartListe *ui;
    TKNparcaBilgisiYoneticisi::Verilistesi liste;
};

#endif // TKNANAKARTLISTE_H
