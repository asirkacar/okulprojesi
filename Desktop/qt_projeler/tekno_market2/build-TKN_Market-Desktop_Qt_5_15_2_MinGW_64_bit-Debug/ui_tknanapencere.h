/********************************************************************************
** Form generated from reading UI file 'tknanapencere.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TKNANAPENCERE_H
#define UI_TKNANAPENCERE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TKNAnaPencere
{
public:
    QAction *actionYeni_Par_a_Giri_i;
    QAction *actionMevcut_Par_alar;
    QAction *actionToplu_Par_a_retimi;
    QAction *actionYeni_Tedarik_i_Tan_mlama;
    QAction *actionTedarik_iler;
    QAction *actionYeni_Fatura;
    QAction *actionFaturalar;
    QAction *actionYeni_Fatura_2;
    QAction *actionFaturalar_2;
    QAction *actionYeni_M_teri;
    QAction *actionM_teriler;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuBilgisayar_Par_a_Bilgileri;
    QMenu *menu_retilen_Par_alar;
    QMenu *menuTedarik_i_Tan_mlar;
    QMenu *menuFatura;
    QMenu *menuAl_Faturas;
    QMenu *menuSat_Faturas;
    QMenu *menuM_teri_Tan_mlar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TKNAnaPencere)
    {
        if (TKNAnaPencere->objectName().isEmpty())
            TKNAnaPencere->setObjectName(QString::fromUtf8("TKNAnaPencere"));
        TKNAnaPencere->resize(800, 600);
        actionYeni_Par_a_Giri_i = new QAction(TKNAnaPencere);
        actionYeni_Par_a_Giri_i->setObjectName(QString::fromUtf8("actionYeni_Par_a_Giri_i"));
        actionMevcut_Par_alar = new QAction(TKNAnaPencere);
        actionMevcut_Par_alar->setObjectName(QString::fromUtf8("actionMevcut_Par_alar"));
        actionToplu_Par_a_retimi = new QAction(TKNAnaPencere);
        actionToplu_Par_a_retimi->setObjectName(QString::fromUtf8("actionToplu_Par_a_retimi"));
        actionYeni_Tedarik_i_Tan_mlama = new QAction(TKNAnaPencere);
        actionYeni_Tedarik_i_Tan_mlama->setObjectName(QString::fromUtf8("actionYeni_Tedarik_i_Tan_mlama"));
        actionTedarik_iler = new QAction(TKNAnaPencere);
        actionTedarik_iler->setObjectName(QString::fromUtf8("actionTedarik_iler"));
        actionYeni_Fatura = new QAction(TKNAnaPencere);
        actionYeni_Fatura->setObjectName(QString::fromUtf8("actionYeni_Fatura"));
        actionFaturalar = new QAction(TKNAnaPencere);
        actionFaturalar->setObjectName(QString::fromUtf8("actionFaturalar"));
        actionYeni_Fatura_2 = new QAction(TKNAnaPencere);
        actionYeni_Fatura_2->setObjectName(QString::fromUtf8("actionYeni_Fatura_2"));
        actionFaturalar_2 = new QAction(TKNAnaPencere);
        actionFaturalar_2->setObjectName(QString::fromUtf8("actionFaturalar_2"));
        actionYeni_M_teri = new QAction(TKNAnaPencere);
        actionYeni_M_teri->setObjectName(QString::fromUtf8("actionYeni_M_teri"));
        actionM_teriler = new QAction(TKNAnaPencere);
        actionM_teriler->setObjectName(QString::fromUtf8("actionM_teriler"));
        centralwidget = new QWidget(TKNAnaPencere);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        TKNAnaPencere->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TKNAnaPencere);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuBilgisayar_Par_a_Bilgileri = new QMenu(menubar);
        menuBilgisayar_Par_a_Bilgileri->setObjectName(QString::fromUtf8("menuBilgisayar_Par_a_Bilgileri"));
        menu_retilen_Par_alar = new QMenu(menuBilgisayar_Par_a_Bilgileri);
        menu_retilen_Par_alar->setObjectName(QString::fromUtf8("menu_retilen_Par_alar"));
        menuTedarik_i_Tan_mlar = new QMenu(menubar);
        menuTedarik_i_Tan_mlar->setObjectName(QString::fromUtf8("menuTedarik_i_Tan_mlar"));
        menuFatura = new QMenu(menubar);
        menuFatura->setObjectName(QString::fromUtf8("menuFatura"));
        menuAl_Faturas = new QMenu(menuFatura);
        menuAl_Faturas->setObjectName(QString::fromUtf8("menuAl_Faturas"));
        menuSat_Faturas = new QMenu(menuFatura);
        menuSat_Faturas->setObjectName(QString::fromUtf8("menuSat_Faturas"));
        menuM_teri_Tan_mlar = new QMenu(menubar);
        menuM_teri_Tan_mlar->setObjectName(QString::fromUtf8("menuM_teri_Tan_mlar"));
        TKNAnaPencere->setMenuBar(menubar);
        statusbar = new QStatusBar(TKNAnaPencere);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TKNAnaPencere->setStatusBar(statusbar);

        menubar->addAction(menuBilgisayar_Par_a_Bilgileri->menuAction());
        menubar->addAction(menuTedarik_i_Tan_mlar->menuAction());
        menubar->addAction(menuFatura->menuAction());
        menubar->addAction(menuM_teri_Tan_mlar->menuAction());
        menuBilgisayar_Par_a_Bilgileri->addAction(actionYeni_Par_a_Giri_i);
        menuBilgisayar_Par_a_Bilgileri->addAction(actionMevcut_Par_alar);
        menuBilgisayar_Par_a_Bilgileri->addSeparator();
        menuBilgisayar_Par_a_Bilgileri->addAction(menu_retilen_Par_alar->menuAction());
        menu_retilen_Par_alar->addAction(actionToplu_Par_a_retimi);
        menuTedarik_i_Tan_mlar->addAction(actionYeni_Tedarik_i_Tan_mlama);
        menuTedarik_i_Tan_mlar->addAction(actionTedarik_iler);
        menuFatura->addAction(menuAl_Faturas->menuAction());
        menuFatura->addAction(menuSat_Faturas->menuAction());
        menuAl_Faturas->addAction(actionYeni_Fatura);
        menuAl_Faturas->addAction(actionFaturalar);
        menuSat_Faturas->addAction(actionYeni_Fatura_2);
        menuSat_Faturas->addAction(actionFaturalar_2);
        menuM_teri_Tan_mlar->addAction(actionYeni_M_teri);
        menuM_teri_Tan_mlar->addAction(actionM_teriler);

        retranslateUi(TKNAnaPencere);

        QMetaObject::connectSlotsByName(TKNAnaPencere);
    } // setupUi

    void retranslateUi(QMainWindow *TKNAnaPencere)
    {
        TKNAnaPencere->setWindowTitle(QCoreApplication::translate("TKNAnaPencere", "TKNAnaPencere", nullptr));
        actionYeni_Par_a_Giri_i->setText(QCoreApplication::translate("TKNAnaPencere", "Yeni Par\303\247a Giri\305\237i", nullptr));
        actionMevcut_Par_alar->setText(QCoreApplication::translate("TKNAnaPencere", "Mevcut Par\303\247alar", nullptr));
        actionToplu_Par_a_retimi->setText(QCoreApplication::translate("TKNAnaPencere", "Toplu Par\303\247a \303\234retimi", nullptr));
        actionYeni_Tedarik_i_Tan_mlama->setText(QCoreApplication::translate("TKNAnaPencere", "Yeni Tedarik\303\247i Tan\304\261mlama", nullptr));
        actionTedarik_iler->setText(QCoreApplication::translate("TKNAnaPencere", "Tedarik\303\247iler", nullptr));
        actionYeni_Fatura->setText(QCoreApplication::translate("TKNAnaPencere", "Yeni Fatura", nullptr));
        actionFaturalar->setText(QCoreApplication::translate("TKNAnaPencere", "Faturalar", nullptr));
        actionYeni_Fatura_2->setText(QCoreApplication::translate("TKNAnaPencere", "Yeni Fatura", nullptr));
        actionFaturalar_2->setText(QCoreApplication::translate("TKNAnaPencere", "Faturalar", nullptr));
        actionYeni_M_teri->setText(QCoreApplication::translate("TKNAnaPencere", "Yeni M\303\274\305\237teri", nullptr));
        actionM_teriler->setText(QCoreApplication::translate("TKNAnaPencere", "M\303\274\305\237teriler", nullptr));
        menuBilgisayar_Par_a_Bilgileri->setTitle(QCoreApplication::translate("TKNAnaPencere", "Bilgisayar Par\303\247a Bilgileri", nullptr));
        menu_retilen_Par_alar->setTitle(QCoreApplication::translate("TKNAnaPencere", "\303\234retilen Par\303\247alar", nullptr));
        menuTedarik_i_Tan_mlar->setTitle(QCoreApplication::translate("TKNAnaPencere", "Tedarik\303\247i Tan\304\261mlar\304\261", nullptr));
        menuFatura->setTitle(QCoreApplication::translate("TKNAnaPencere", "Fatura", nullptr));
        menuAl_Faturas->setTitle(QCoreApplication::translate("TKNAnaPencere", "Al\304\261\305\237 Faturas\304\261", nullptr));
        menuSat_Faturas->setTitle(QCoreApplication::translate("TKNAnaPencere", "Sat\304\261\305\237 Faturas\304\261", nullptr));
        menuM_teri_Tan_mlar->setTitle(QCoreApplication::translate("TKNAnaPencere", "M\303\274\305\237teri Tan\304\261mlar\304\261", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TKNAnaPencere: public Ui_TKNAnaPencere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TKNANAPENCERE_H
