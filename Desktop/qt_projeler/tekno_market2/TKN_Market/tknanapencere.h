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

    void on_actionEkran_Kart_triggered();

    void on_actionFare_triggered();

    void on_actionG_Kayna_triggered();

    void on_actionRam_triggered();

    void on_actionHardDisk_triggered();

    void on_actionKasa_triggered();

    void on_actionMonit_r_triggered();

    void on_actionKlavye_triggered();

    void on_actionAnakartlar_triggered();

    void on_action_lemciler_triggered();

    void on_actionEkran_Kartlar_triggered();

    void on_actionRamler_triggered();

    void on_actionHarddiskler_triggered();

    void on_actionKasalar_triggered();

    void on_actionG_Kaynaklar_triggered();

    void on_actionMonit_rler_triggered();

    void on_actionKlavyeler_triggered();

    void on_actionFareler_triggered();

private:
    Ui::TKNAnaPencere *ui;
};
#endif // TKNANAPENCERE_H
