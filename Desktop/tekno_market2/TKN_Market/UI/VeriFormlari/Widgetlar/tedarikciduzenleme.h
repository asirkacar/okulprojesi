#ifndef TEDARIKCIDUZENLEME_H
#define TEDARIKCIDUZENLEME_H

#include <QWidget>
#include <Veri/tanimlar.h>

namespace Ui {
class TedarikciDuzenleme;
}

class TedarikciDuzenleme : public QWidget
{
    Q_OBJECT

public:
    explicit TedarikciDuzenleme(QWidget *parent = nullptr);
    ~TedarikciDuzenleme();
    const TKNTedarikciPtr &getVeri() const;
    void setVeri(const TKNTedarikciPtr &newVeri);

signals:
    void kaydetKapat();
    void iptalKapat();

private slots:
    void on_btnKaydet_clicked();

    void on_btnIptal_clicked();

private:
    Ui::TedarikciDuzenleme *ui;
    TKNTedarikciPtr veri;
};

#endif // TEDARIKCIDUZENLEME_H
