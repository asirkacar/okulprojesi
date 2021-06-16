#ifndef TKNFAREPENCERE_H
#define TKNFAREPENCERE_H

#include <QDialog>
#include <Veri/tanimlar.h>

namespace Ui {
class TKNFarePencere;
}

class TKNFarePencere : public QDialog
{
    Q_OBJECT

public:
    explicit TKNFarePencere(QWidget *parent = nullptr);
    ~TKNFarePencere();

    const TKNParcaBilgileriPtr getVeri() const;
    void setVeri(const TKNParcaBilgileriPtr &value);

private:
    Ui::TKNFarePencere *ui;
    TKNParcaBilgileriPtr veri;
};

#endif // TKNFAREPENCERE_H
