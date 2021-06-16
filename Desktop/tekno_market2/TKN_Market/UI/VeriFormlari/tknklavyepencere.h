#ifndef TKNKLAVYEPENCERE_H
#define TKNKLAVYEPENCERE_H

#include <QDialog>
#include <Veri/tanimlar.h>

namespace Ui {
class TKNKlavyePencere;
}

class TKNKlavyePencere : public QDialog
{
    Q_OBJECT

public:
    explicit TKNKlavyePencere(QWidget *parent = nullptr);
    ~TKNKlavyePencere();

    const TKNParcaBilgileriPtr getVeri() const;
    void setVeri(const TKNParcaBilgileriPtr &value);

private:
    Ui::TKNKlavyePencere *ui;
    TKNParcaBilgileriPtr veri;
};

#endif // TKNKLAVYEPENCERE_H
