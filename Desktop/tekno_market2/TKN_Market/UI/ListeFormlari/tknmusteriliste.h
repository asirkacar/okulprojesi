#ifndef TKNMUSTERILISTE_H
#define TKNMUSTERILISTE_H

#include <QDialog>
#include <Veri/VeriYoneticileri/tknmusteribilgileriyoneticisi.h>

namespace Ui {
class TKNMusteriListe;
}

class TKNMusteriListe : public QDialog
{
    Q_OBJECT

public:
    explicit TKNMusteriListe(QWidget *parent = nullptr);
    ~TKNMusteriListe();
private slots:
    void Ara();
    void on_pushButton_clicked();

private:
    void ListeGuncelle();
    void aramaYap();
    Ui::TKNMusteriListe *ui;

    TKNMusteriBilgileriYoneticisi::Verilistesi liste;
};

#endif // TKNMUSTERILISTE_H
