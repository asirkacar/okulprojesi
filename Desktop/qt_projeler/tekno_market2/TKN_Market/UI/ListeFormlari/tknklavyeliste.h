#ifndef TKNKLAVYELISTE_H
#define TKNKLAVYELISTE_H

#include <QDialog>
#include <Veri/VeriYoneticileri/tknparcabilgisiyoneticisi.h>

namespace Ui {
class TKNKlavyeListe;
}

class TKNKlavyeListe : public QDialog
{
    Q_OBJECT

public:
    explicit TKNKlavyeListe(QWidget *parent = nullptr);
    ~TKNKlavyeListe();

private slots:
    void on_pushButton_clicked();
    void Ara();

private:
    void ListeGuncelle();
    void aramaYap();
    Ui::TKNKlavyeListe *ui;
    TKNparcaBilgisiYoneticisi::Verilistesi liste;
};

#endif // TKNKLAVYELISTE_H
