#ifndef TKNHARDDISKPENCERE_H
#define TKNHARDDISKPENCERE_H

#include <QDialog>
#include <Veri/tanimlar.h>

namespace Ui {
class TKNHarddiskPencere;
}

class TKNHarddiskPencere : public QDialog
{
    Q_OBJECT

public:
    explicit TKNHarddiskPencere(QWidget *parent = nullptr);
    ~TKNHarddiskPencere();

    const TKNParcaBilgileriPtr getVeri() const;
    void setVeri(const TKNParcaBilgileriPtr &value);

private:
    Ui::TKNHarddiskPencere *ui;
    TKNParcaBilgileriPtr veri;
};

#endif // TKNHARDDISKPENCERE_H
