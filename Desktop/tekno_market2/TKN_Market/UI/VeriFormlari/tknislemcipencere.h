#ifndef TKNISLEMCIPENCERE_H
#define TKNISLEMCIPENCERE_H

#include <QDialog>
#include <Veri/tanimlar.h>

namespace Ui {
class TKNIslemciPencere;
}

class TKNIslemciPencere : public QDialog
{
    Q_OBJECT

public:
    explicit TKNIslemciPencere(QWidget *parent = nullptr);
    ~TKNIslemciPencere();

    const TKNParcaBilgileriPtr getVeri() const;
    void setVeri(const TKNParcaBilgileriPtr &value);

private:
    Ui::TKNIslemciPencere *ui;
    TKNParcaBilgileriPtr veri;
};

#endif // TKNISLEMCIPENCERE_H
