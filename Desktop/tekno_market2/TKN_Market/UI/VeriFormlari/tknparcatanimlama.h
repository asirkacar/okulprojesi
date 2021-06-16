#ifndef TKNPARCATANIMLAMA_H
#define TKNPARCATANIMLAMA_H

#include <QDialog>
#include <Veri/tanimlar.h>

namespace Ui {
class TKNParcaTanimlama;
}

class TKNParcaTanimlama : public QDialog
{
    Q_OBJECT

public:
    explicit TKNParcaTanimlama(QWidget *parent = nullptr);
    ~TKNParcaTanimlama();
/*
    TKNParcaBilgileriPtr getVeri() const;
    void setVeri(const TKNParcaBilgileriPtr &value);*/

private:
    Ui::TKNParcaTanimlama *ui;

};

#endif // TKNPARCATANIMLAMA_H
