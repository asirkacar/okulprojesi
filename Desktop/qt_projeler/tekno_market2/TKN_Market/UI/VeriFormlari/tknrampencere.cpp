#include "tknrampencere.h"
#include "ui_tknrampencere.h"

TKNRamPencere::TKNRamPencere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TKNRamPencere)
{
    ui->setupUi(this);
}

TKNRamPencere::~TKNRamPencere()
{
    delete ui;
}
