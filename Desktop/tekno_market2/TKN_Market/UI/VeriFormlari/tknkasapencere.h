#ifndef TKNKASAPENCERE_H
#define TKNKASAPENCERE_H

#include <QDialog>
#include <Veri/tanimlar.h>

namespace Ui {
class TKNKasaPencere;
}

class TKNKasaPencere : public QDialog
{
    Q_OBJECT

public:
    explicit TKNKasaPencere(QWidget *parent = nullptr);
    ~TKNKasaPencere();

    const TKNParcaBilgileriPtr getVeri() const;
    void setVeri(const TKNParcaBilgileriPtr &value);

private:
    Ui::TKNKasaPencere *ui;
    TKNParcaBilgileriPtr veri;
};

#endif // TKNKASAPENCERE_H
