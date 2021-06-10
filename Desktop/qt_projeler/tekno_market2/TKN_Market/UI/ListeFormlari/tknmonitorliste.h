#ifndef TKNMONITORLISTE_H
#define TKNMONITORLISTE_H

#include <QDialog>
#include <Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.h>

namespace Ui {
class TKNMonitorListe;
}

class TKNMonitorListe : public QDialog
{
    Q_OBJECT

public:
    explicit TKNMonitorListe(QWidget *parent = nullptr);
    ~TKNMonitorListe();

private slots:
    void on_pushButton_clicked();
    void Ara();

private:
    void ListeGuncelle();
    void aramaYap();
    Ui::TKNMonitorListe *ui;
    TKNparcaBilgisiYoneticisi::Verilistesi liste;
};

#endif // TKNMONITORLISTE_H
