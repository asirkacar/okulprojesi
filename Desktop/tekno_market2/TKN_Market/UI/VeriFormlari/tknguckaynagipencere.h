#ifndef TKNGUCKAYNAGIPENCERE_H
#define TKNGUCKAYNAGIPENCERE_H

#include <QDialog>
#include <Veri/tanimlar.h>

namespace Ui {
class TKNGucKaynagiPencere;
}

class TKNGucKaynagiPencere : public QDialog
{
    Q_OBJECT

public:
    explicit TKNGucKaynagiPencere(QWidget *parent = nullptr);
    ~TKNGucKaynagiPencere();

    const TKNParcaBilgileriPtr getVeri() const;
    void setVeri(const TKNParcaBilgileriPtr &value);

private:
    Ui::TKNGucKaynagiPencere *ui;
    TKNParcaBilgileriPtr veri;
};

#endif // TKNGUCKAYNAGIPENCERE_H
