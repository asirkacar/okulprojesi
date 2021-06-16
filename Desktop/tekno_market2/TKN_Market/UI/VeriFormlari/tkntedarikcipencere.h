#ifndef TKNTEDARIKCIPENCERE_H
#define TKNTEDARIKCIPENCERE_H

#include <QDialog>
#include <Veri/tanimlar.h>

namespace Ui {
class TKNTedarikciPencere;
}

class TKNTedarikciPencere : public QDialog
{
    Q_OBJECT

public:
    explicit TKNTedarikciPencere(QWidget *parent = nullptr);
    ~TKNTedarikciPencere();



private slots:
    void on_btnYeniTedarikci_clicked();
    void tedarikciDuzelt(TKNTedarikciPtr tedarikci);

private:
    Ui::TKNTedarikciPencere *ui;

};

#endif // TKNTEDARIKCIPENCERE_H
