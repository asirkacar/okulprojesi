#ifndef TKNEKRANKARTIPENCERE_H
#define TKNEKRANKARTIPENCERE_H

#include <QDialog>
#include <Veri/tanimlar.h>

namespace Ui {
class TKNEkranKartiPencere;
}

class TKNEkranKartiPencere : public QDialog
{
    Q_OBJECT

public:
    explicit TKNEkranKartiPencere(QWidget *parent = nullptr);
    ~TKNEkranKartiPencere();

    const TKNParcaBilgileriPtr getVeri() const;
    void setVeri(const TKNParcaBilgileriPtr &value);

private:
    Ui::TKNEkranKartiPencere *ui;
    TKNParcaBilgileriPtr veri;
};

#endif // TKNEKRANKARTIPENCERE_H
