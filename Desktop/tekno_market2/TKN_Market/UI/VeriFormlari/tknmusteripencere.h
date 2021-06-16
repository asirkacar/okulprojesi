#ifndef TKNMUSTERIPENCERE_H
#define TKNMUSTERIPENCERE_H

#include <QDialog>
#include <Veri/tanimlar.h>

namespace Ui {
class TKNMusteriPencere;
}

class TKNMusteriPencere : public QDialog
{
    Q_OBJECT

public:
    explicit TKNMusteriPencere(QWidget *parent = nullptr);
    ~TKNMusteriPencere();

    const TKNMusteriBilgileriPtr &getVeri() const;
    void setVeri(const TKNMusteriBilgileriPtr &newVeri);

private:
    Ui::TKNMusteriPencere *ui;
    TKNMusteriBilgileriPtr veri;
};

#endif // TKNMUSTERIPENCERE_H
