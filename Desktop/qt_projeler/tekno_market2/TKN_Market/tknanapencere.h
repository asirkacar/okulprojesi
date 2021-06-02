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

private slots:
    void on_actionYeni_Par_a_Giri_i_triggered();

    void on_actionMevcut_Par_alar_triggered();

    void on_actionAnakart_triggered();

    void on_actionT_m_Par_alar_triggered();

    void on_action_lemci_triggered();

private:
    Ui::TKNAnaPencere *ui;
};
#endif // TKNANAPENCERE_H
