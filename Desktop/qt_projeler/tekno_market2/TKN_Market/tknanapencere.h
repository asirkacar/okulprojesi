#ifndef TKNANAPENCERE_H
#define TKNANAPENCERE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TKNAnaPencere; }
QT_END_NAMESPACE

class TKNAnaPencere : public QMainWindow
{
    Q_OBJECT

public:
    TKNAnaPencere(QWidget *parent = nullptr);
    ~TKNAnaPencere();

private:
    Ui::TKNAnaPencere *ui;
};
#endif // TKNANAPENCERE_H
