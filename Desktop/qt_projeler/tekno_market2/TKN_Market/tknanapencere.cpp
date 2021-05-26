#include "tknanapencere.h"
#include "ui_tknanapencere.h"

TKNAnaPencere::TKNAnaPencere(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TKNAnaPencere)
{
    ui->setupUi(this);
}

TKNAnaPencere::~TKNAnaPencere()
{
    delete ui;
}

