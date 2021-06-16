#ifndef TKNANAKARTPENCERE_H
#define TKNANAKARTPENCERE_H

#include <QDialog>
#include <Veri/tanimlar.h>

namespace Ui {
class TKNAnakartPencere;
}

class TKNAnakartPencere : public QDialog
{
    Q_OBJECT

public:
    explicit TKNAnakartPencere(QWidget *parent = nullptr);
    ~TKNAnakartPencere();

    const TKNParcaBilgileriPtr getVeri() const;
    void setVeri(const TKNParcaBilgileriPtr &value);

private:
    Ui::TKNAnakartPencere *ui;
    TKNParcaBilgileriPtr veri;
};

#endif // TKNANAKARTPENCERE_H
