#ifndef TKNRAMPENCERE_H
#define TKNRAMPENCERE_H

#include <QDialog>
#include <Veri/tanimlar.h>

namespace Ui {
class TKNRamPencere;
}

class TKNRamPencere : public QDialog
{
    Q_OBJECT

public:
    explicit TKNRamPencere(QWidget *parent = nullptr);
    ~TKNRamPencere();

    TKNParcaBilgileriPtr getVeri() const;
    void setVeri(const TKNParcaBilgileriPtr &value);

private:
    Ui::TKNRamPencere *ui;
    TKNParcaBilgileriPtr veri;
};

#endif // TKNRAMPENCERE_H
