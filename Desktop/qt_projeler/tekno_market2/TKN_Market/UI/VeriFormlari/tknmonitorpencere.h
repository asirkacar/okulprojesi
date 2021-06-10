#ifndef TKNMONITORPENCERE_H
#define TKNMONITORPENCERE_H

#include <QDialog>
#include <Veri/tanimlar.h>

namespace Ui {
class TKNMonitorPencere;
}

class TKNMonitorPencere : public QDialog
{
    Q_OBJECT

public:
    explicit TKNMonitorPencere(QWidget *parent = nullptr);
    ~TKNMonitorPencere();

    TKNParcaBilgileriPtr getVeri() const;
    void setVeri(const TKNParcaBilgileriPtr &value);

private:
    Ui::TKNMonitorPencere *ui;
    TKNParcaBilgileriPtr veri;
};

#endif // TKNMONITORPENCERE_H
