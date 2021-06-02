#ifndef TKNRAMPENCERE_H
#define TKNRAMPENCERE_H

#include <QDialog>

namespace Ui {
class TKNRamPencere;
}

class TKNRamPencere : public QDialog
{
    Q_OBJECT

public:
    explicit TKNRamPencere(QWidget *parent = nullptr);
    ~TKNRamPencere();

private:
    Ui::TKNRamPencere *ui;
};

#endif // TKNRAMPENCERE_H
