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
    QAction *actionToplu_Par_a_retimi;
    QAction *actionYeni_Tedarik_i_Tan_mlama;
    QAction *actionTedarik_iler;
    QAction *actionYeni_Fatura;
    QAction *actionFaturalar;
    QAction *actionYeni_Fatura_2;
    QAction *actionFaturalar_2;
    QAction *actionYeni_M_teri;
    QAction *actionM_teriler;
    QAction *actionAnakart;
    QAction *action_lemci;
    QAction *actionEkran_Kart;
    QAction *actionRam;
    QAction *actionHardDisk;
    QAction *actionKasa;
    QAction *actionG_Kayna;
    QAction *actionMonit_r;
    QAction *actionKlavye;
    QAction *actionFare;
    QAction *actionT_m_Par_alar;
    QAction *actionAnakartlar;
    QAction *action_lemciler;
    QAction *actionEkran_Kartlar;
    QAction *actionRamler;
    QAction *actionHarddiskler;
    QAction *actionKasalar;
    QAction *actionG_Kaynaklar;
    QAction *actionMonit_rler;
    QAction *actionKlavyeler;
    QAction *actionFareler;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuBilgisayar_Par_a_Bilgileri;
    QMenu *menu_retilen_Par_alar;
    QMenu *menuYeni_Par_a_Giri_i;
    QMenu *menuMevcut_Par_alar;
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
        TKNAnaPencere->setStyleSheet(QString::fromUtf8("/*\n"
"Ubuntu Style Sheet for QT Applications\n"
"Author: Jaime A. Quiroga P.\n"
"Company: GTRONICK\n"
"Last updated: 09/10/2019 (dd/mm/yyyy), 12:31.\n"
"Available at: https://github.com/GTRONICK/QSS/blob/master/Ubuntu.qss\n"
"*/\n"
"QMainWindow {\n"
"	background-color:#f0f0f0;\n"
"}\n"
"QCheckBox {\n"
"	padding:2px;\n"
"}\n"
"QCheckBox:hover {\n"
"	border:1px solid rgb(255,150,60);\n"
"	border-radius:4px;\n"
"	padding: 1px;\n"
"	background-color:qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(190, 90, 50, 50), stop:1 rgba(250, 130, 40, 50));\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"	border:1px solid rgb(246, 134, 86);\n"
"	border-radius:4px;\n"
"  	background-color:rgb(246, 134, 86)\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"	border-width:1px solid rgb(246, 134, 86);\n"
"	border-radius:4px;\n"
"  	background-color:rgb(255,255,255);\n"
"}\n"
"QColorDialog {\n"
"	background-color:#f0f0f0;\n"
"}\n"
"QComboBox {\n"
"	color:rgb(81,72,65);\n"
"	background: #ffffff;\n"
"}\n"
"QComboBox:ed"
                        "itable {\n"
"	selection-color:rgb(81,72,65);\n"
"	selection-background-color: #ffffff;\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"	selection-color: #ffffff;\n"
"	selection-background-color: rgb(246, 134, 86);\n"
"}\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"	color:  #1e1d23;	\n"
"}\n"
"QDateTimeEdit, QDateEdit, QDoubleSpinBox, QFontComboBox {\n"
"	color:rgb(81,72,65);\n"
"	background-color: #ffffff;\n"
"}\n"
"\n"
"QDialog {\n"
"	background-color:#f0f0f0;\n"
"}\n"
"\n"
"QLabel,QLineEdit {\n"
"	color:rgb(17,17,17);\n"
"}\n"
"QLineEdit {\n"
"	background-color:rgb(255,255,255);\n"
"	selection-background-color:rgb(236,116,64);\n"
"}\n"
"QMenuBar {\n"
"	color:rgb(223,219,210);\n"
"	background-color:rgb(65,64,59);\n"
"}\n"
"QMenuBar::item {\n"
"	padding-top:4px;\n"
"	padding-left:4px;\n"
"	padding-right:4px;\n"
"	color:rgb(223,219,210);\n"
"	background-color:rgb(65,64,59);\n"
"}\n"
"QMenuBar::item:selected {\n"
"	color:rgb(255,255,255);\n"
"	padding-top:2px;\n"
"	padding-left:2px;\n"
"	paddin"
                        "g-right:2px;\n"
"	border-top-width:2px;\n"
"	border-left-width:2px;\n"
"	border-right-width:2px;\n"
"	border-top-right-radius:4px;\n"
"	border-top-left-radius:4px;\n"
"	border-style:solid;\n"
"	background-color:rgb(65,64,59);\n"
"	border-top-color: rgb(47,47,44);\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(90, 87, 78, 255), stop:1 rgba(47,47,44, 255));\n"
"	border-left-color:  qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(90, 87, 78, 255), stop:1 rgba(47,47,44, 255));\n"
"}\n"
"QMenu {\n"
"	color:rgb(223,219,210);\n"
"	background-color:rgb(65,64,59);\n"
"}\n"
"QMenu::item {\n"
"	color:rgb(223,219,210);\n"
"	padding:4px 10px 4px 20px;\n"
"}\n"
"QMenu::item:selected {\n"
"	color:rgb(255,255,255);\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(225, 108, 54, 255), stop:1 rgba(246, 134, 86, 255));\n"
"	border-style:solid;\n"
"	border-width:3px;\n"
"	padding:4px 7px 4px 17px;\n"
"	border-bottom-color:qlineargra"
                        "dient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(175,85,48,255), stop:1 rgba(236,114,67, 255));\n"
"	border-top-color:qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(253,156,113,255), stop:1 rgba(205,90,46, 255));\n"
"	border-right-color:qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgba(253,156,113,255), stop:1 rgba(205,90,46, 255));\n"
"	border-left-color:qlineargradient(spread:pad, x1:1, y1:0.5, x2:0, y2:0.5, stop:0 rgba(253,156,113,255), stop:1 rgba(205,90,46, 255));\n"
"}\n"
"QPlainTextEdit {\n"
"	border-width: 1px solid transparent;\n"
"	color:rgb(17,17,17);\n"
"	selection-background-color:rgb(236,116,64);\n"
"}\n"
"QProgressBar {\n"
"	text-align: center;\n"
"	color: rgb(0, 0, 0);\n"
"	border: 1px inset rgb(150,150,150); \n"
"	border-radius: 10px;\n"
"	background-color:rgb(221,221,219);\n"
"}\n"
"QProgressBar::chunk:horizontal {\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(225, 108, 54, 255), stop:1 rgba(246, 134,"
                        " 86, 255));\n"
"	border:1px solid;\n"
"	border-radius:8px;\n"
"	border-bottom-color:qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(175,85,48,255), stop:1 rgba(236,114,67, 255));\n"
"	border-top-color:qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(253,156,113,255), stop:1 rgba(205,90,46, 255));\n"
"	border-right-color:qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgba(253,156,113,255), stop:1 rgba(205,90,46, 255));\n"
"	border-left-color:qlineargradient(spread:pad, x1:1, y1:0.5, x2:0, y2:0.5, stop:0 rgba(253,156,113,255), stop:1 rgba(205,90,46, 255));\n"
"}\n"
"QPushButton{\n"
"	color:rgb(17,17,17);\n"
"	border-width: 1px;\n"
"	border-radius: 6px;\n"
"	border-bottom-color: rgb(150,150,150);\n"
"	border-right-color: rgb(165,165,165);\n"
"	border-left-color: rgb(165,165,165);\n"
"	border-top-color: rgb(180,180,180);\n"
"	border-style: solid;\n"
"	padding: 4px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(220, "
                        "220, 220, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"QPushButton:hover{\n"
"	color:rgb(17,17,17);\n"
"	border-width: 1px;\n"
"	border-radius:6px;\n"
"	border-top-color: rgb(255,150,60);\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(200, 70, 20, 255), stop:1 rgba(255,150,60, 255));\n"
"	border-left-color:  qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(200, 70, 20, 255), stop:1 rgba(255,150,60, 255));\n"
"	border-bottom-color: rgb(200,70,20);\n"
"	border-style: solid;\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(220, 220, 220, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"QPushButton:default{\n"
"	color:rgb(17,17,17);\n"
"	border-width: 1px;\n"
"	border-radius:6px;\n"
"	border-top-color: rgb(255,150,60);\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(200, 70, 20, 255), stop:1 rgba(255,150,60, 255));\n"
"	border-left-color:  qlineargradi"
                        "ent(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(200, 70, 20, 255), stop:1 rgba(255,150,60, 255));\n"
"	border-bottom-color: rgb(200,70,20);\n"
"	border-style: solid;\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(220, 220, 220, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"QPushButton:pressed{\n"
"	color:rgb(17,17,17);\n"
"	border-width: 1px;\n"
"	border-radius: 6px;\n"
"	border-width: 1px;\n"
"	border-top-color: rgba(255,150,60,200);\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(200, 70, 20, 255), stop:1 rgba(255,150,60, 200));\n"
"	border-left-color:  qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 rgba(200, 70, 20, 255), stop:1 rgba(255,150,60, 200));\n"
"	border-bottom-color: rgba(200,70,20,200);\n"
"	border-style: solid;\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(220, 220, 220, 255), stop:1 rgba(255, 255, 255, 255));"
                        "\n"
"}\n"
"QPushButton:disabled{\n"
"	color:rgb(174,167,159);\n"
"	border-width: 1px;\n"
"	border-radius: 6px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(200, 200, 200, 255), stop:1 rgba(230, 230, 230, 255));\n"
"}\n"
"QRadioButton {\n"
"	padding: 1px;\n"
"}\n"
"QRadioButton::indicator:checked {\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-radius:5px;\n"
"	border-width: 1px;\n"
"	border-color: rgba(246, 134, 86, 255);\n"
"	color: #a9b7c6;\n"
"	background-color:rgba(246, 134, 86, 255);\n"
"}\n"
"QRadioButton::indicator:!checked {\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-radius:5px;\n"
"	border-width: 1px;\n"
"	border-color: rgb(246, 134, 86);\n"
"	color: #a9b7c6;\n"
"	background-color: transparent;\n"
"}\n"
"QScrollArea {\n"
"	color: white;\n"
"	background-color:#f0f0f0;\n"
"}\n"
"QSlider::groove {\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-color: rgb(207,207,207);\n"
"}\n"
"QSlider::"
                        "groove:horizontal {\n"
"	height: 5px;\n"
"	background: rgb(246, 134, 86);\n"
"}\n"
"QSlider::groove:vertical {\n"
"	width: 5px;\n"
"	background: rgb(246, 134, 86);\n"
"}\n"
"QSlider::handle:horizontal {\n"
"	background: rgb(253,253,253);\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-color: rgb(207,207,207);\n"
"	width: 12px;\n"
"	margin: -5px 0;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::handle:vertical {\n"
"	background: rgb(253,253,253);\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-color: rgb(207,207,207);\n"
"	height: 12px;\n"
"	margin: 0 -5px;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::add-page:horizontal, QSlider::add-page:vertical {\n"
" 	background: white;\n"
"}\n"
"QSlider::sub-page:horizontal, QSlider::sub-page:vertical {\n"
"	background: rgb(246, 134, 86);\n"
"}\n"
"QStatusBar, QSpinBox {\n"
"	color:rgb(81,72,65);\n"
"}\n"
"QSpinBox {\n"
"	background-color: #ffffff;\n"
"}\n"
"QScrollBar:horizontal {\n"
"	max-height: 20px;\n"
"	border: 1px transparent;\n"
"	margin: 0"
                        "px 20px 0px 20px;\n"
"}\n"
"QScrollBar::handle:horizontal {\n"
"	background: rgb(253,253,253);\n"
"	border: 1px solid rgb(207,207,207);\n"
"	border-radius: 7px;\n"
"	min-width: 25px;\n"
"}\n"
"QScrollBar::handle:horizontal:hover {\n"
"	background: rgb(253,253,253);\n"
"	border: 1px solid rgb(255,150,60);\n"
"	border-radius: 7px;\n"
"	min-width: 25px;\n"
"}\n"
"QScrollBar::add-line:horizontal {\n"
"  	border: 1px solid rgb(207,207,207);\n"
"  	border-top-right-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-bottom-right-radius: 7px;\n"
"  	background: rgb(255, 255, 255);\n"
"  	width: 20px;\n"
"  	subcontrol-position: right;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:horizontal:hover {\n"
"  	border: 1px solid rgb(255,150,60);\n"
"  	border-top-right-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-bottom-right-radius: 7px;\n"
"  	background: rgb(255, 255, 255);\n"
"  	width: 20px;\n"
"  	subcontrol-position: right;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"Q"
                        "ScrollBar::add-line:horizontal:pressed {\n"
"  	border: 1px solid grey;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-top-right-radius: 7px;\n"
"  	border-bottom-right-radius: 7px;\n"
"  	background: rgb(231,231,231);\n"
"  	width: 20px;\n"
"  	subcontrol-position: right;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:horizontal {\n"
"  	border: 1px solid rgb(207,207,207);\n"
"  	border-top-right-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-bottom-left-radius: 7px;\n"
"  	background: rgb(255, 255, 255);\n"
"  	width: 20px;\n"
"  	subcontrol-position: left;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:horizontal:hover {\n"
"  	border: 1px solid rgb(255,150,60);\n"
"  	border-top-right-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-bottom-left-radius: 7px;\n"
"  	background: rgb(255, 255, 255);\n"
"  	width: 20px;\n"
"  	subcontrol-position: left;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:horizontal:pressed {\n"
" "
                        " 	border: 1px solid grey;\n"
"  	border-top-right-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-bottom-left-radius: 7px;\n"
"  	background: rgb(231,231,231);\n"
"  	width: 20px;\n"
"  	subcontrol-position: left;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::left-arrow:horizontal {\n"
"  	border: 1px transparent grey;\n"
"  	border-top-left-radius: 3px;\n"
"  	border-bottom-left-radius: 3px;\n"
"  	width: 6px;\n"
"  	height: 6px;\n"
"  	background: rgb(230,230,230);\n"
"}\n"
"QScrollBar::right-arrow:horizontal {\n"
"	border: 1px transparent grey;\n"
"	border-top-right-radius: 3px;\n"
"	border-bottom-right-radius: 3px;\n"
"  	width: 6px;\n"
"  	height: 6px;\n"
" 	background: rgb(230,230,230);\n"
"}\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
" 	background: none;\n"
"} \n"
"QScrollBar:vertical {\n"
"	max-width: 20px;\n"
"	border: 1px transparent grey;\n"
"	margin: 20px 0px 20px 0px;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"	border: 1px solid;\n"
"	bord"
                        "er-color: rgb(207,207,207);\n"
"	border-bottom-right-radius: 7px;\n"
"	border-bottom-left-radius: 7px;\n"
"	border-top-left-radius: 7px;\n"
"	background: rgb(255, 255, 255);\n"
"  	height: 20px;\n"
"  	subcontrol-position: bottom;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:vertical:hover {\n"
"  	border: 1px solid;\n"
"  	border-color: rgb(255,150,60);\n"
"  	border-bottom-right-radius: 7px;\n"
"  	border-bottom-left-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	background: rgb(255, 255, 255);\n"
"  	height: 20px;\n"
"  	subcontrol-position: bottom;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:vertical:pressed {\n"
"  	border: 1px solid grey;\n"
"  	border-bottom-left-radius: 7px;\n"
"  	border-bottom-right-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	background: rgb(231,231,231);\n"
"  	height: 20px;\n"
"  	subcontrol-position: bottom;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"  	border: 1px solid rgb(207,207,"
                        "207);\n"
"  	border-top-right-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-bottom-left-radius: 7px;\n"
"  	background: rgb(255, 255, 255);\n"
"  	height: 20px;\n"
"  	subcontrol-position: top;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover {\n"
"  	border: 1px solid rgb(255,150,60);\n"
"  	border-top-right-radius: 7px;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-bottom-left-radius: 7px;\n"
"	background: rgb(255, 255, 255);\n"
"  	height: 20px;\n"
"  	subcontrol-position: top;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical:pressed {\n"
"  	border: 1px solid grey;\n"
"  	border-top-left-radius: 7px;\n"
"  	border-top-right-radius: 7px;\n"
"  	background: rgb(231,231,231);\n"
" 	height: 20px;\n"
"  	subcontrol-position: top;\n"
"  	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"	background: rgb(253,253,253);\n"
"	border: 1px solid rgb(207,207,207);\n"
"	border-radius: 7px;\n"
"	min-height: 25px;\n"
"}\n"
"Q"
                        "ScrollBar::handle:vertical:hover {\n"
"	background: rgb(253,253,253);\n"
"	border: 1px solid rgb(255,150,60);\n"
"	border-radius: 7px;\n"
"	min-height: 25px;\n"
"}\n"
"QScrollBar::up-arrow:vertical {\n"
"	border: 1px transparent grey;\n"
"  	border-top-left-radius: 3px;\n"
"	border-top-right-radius: 3px;\n"
"  	width: 6px;\n"
"  	height: 6px;\n"
"  	background: rgb(230,230,230);\n"
"}\n"
"QScrollBar::down-arrow:vertical {\n"
"  	border: 1px transparent grey;\n"
"  	border-bottom-left-radius: 3px;\n"
"  	border-bottom-right-radius: 3px;\n"
"  	width: 6px;\n"
"  	height: 6px;\n"
"  	background: rgb(230,230,230);\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"  	background: none;\n"
"}\n"
"QTabWidget {\n"
"	color:rgb(0,0,0);\n"
"	background-color:rgb(247,246,246);\n"
"}\n"
"QTabWidget::pane {\n"
"	border-color: rgb(180,180,180);\n"
"	background-color:rgb(247,246,246);\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"  	border-radius: 6px;\n"
"}\n"
"QTabBar::tab {\n"
"	padding-le"
                        "ft:4px;\n"
"	padding-right:4px;\n"
"	padding-bottom:2px;\n"
"	padding-top:2px;\n"
"	color:rgb(81,72,65);\n"
"  	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(221,218,217,255), stop:1 rgba(240,239,238,255));\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"  	border-top-right-radius:4px;\n"
"	border-top-left-radius:4px;\n"
"	border-top-color: rgb(180,180,180);\n"
"	border-left-color: rgb(180,180,180);\n"
"	border-right-color: rgb(180,180,180);\n"
"	border-bottom-color: transparent;\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:last:selected, QTabBar::tab:hover {\n"
"  	background-color:rgb(247,246,246);\n"
"  	margin-left: 0px;\n"
"  	margin-right: 1px;\n"
"}\n"
"QTabBar::tab:!selected {\n"
"	margin-top: 1px;\n"
"	margin-right: 1px;\n"
"}\n"
"QTextEdit {\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color:transparent;\n"
"	color:rgb(17,17,17);\n"
"	selection-background-color:rgb(236,116,64);\n"
"}\n"
"QTimeEdit, QToolBox, QToolBox::tab, QToolBox::tab:"
                        "selected {\n"
"	color:rgb(81,72,65);\n"
"	background-color: #ffffff;\n"
"}"));
        actionToplu_Par_a_retimi = new QAction(TKNAnaPencere);
        actionToplu_Par_a_retimi->setObjectName(QString::fromUtf8("actionToplu_Par_a_retimi"));
        actionYeni_Tedarik_i_Tan_mlama = new QAction(TKNAnaPencere);
        actionYeni_Tedarik_i_Tan_mlama->setObjectName(QString::fromUtf8("actionYeni_Tedarik_i_Tan_mlama"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resimler/client_tedarikci.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionYeni_Tedarik_i_Tan_mlama->setIcon(icon);
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
        actionYeni_M_teri->setIcon(icon);
        actionM_teriler = new QAction(TKNAnaPencere);
        actionM_teriler->setObjectName(QString::fromUtf8("actionM_teriler"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resimler/search_accounts.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionM_teriler->setIcon(icon1);
        actionAnakart = new QAction(TKNAnaPencere);
        actionAnakart->setObjectName(QString::fromUtf8("actionAnakart"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resimler/motherboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAnakart->setIcon(icon2);
        action_lemci = new QAction(TKNAnaPencere);
        action_lemci->setObjectName(QString::fromUtf8("action_lemci"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resimler/cpu.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_lemci->setIcon(icon3);
        actionEkran_Kart = new QAction(TKNAnaPencere);
        actionEkran_Kart->setObjectName(QString::fromUtf8("actionEkran_Kart"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resimler/ekrankart.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEkran_Kart->setIcon(icon4);
        actionRam = new QAction(TKNAnaPencere);
        actionRam->setObjectName(QString::fromUtf8("actionRam"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resimler/RAM.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRam->setIcon(icon5);
        actionHardDisk = new QAction(TKNAnaPencere);
        actionHardDisk->setObjectName(QString::fromUtf8("actionHardDisk"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resimler/hdd.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHardDisk->setIcon(icon6);
        actionKasa = new QAction(TKNAnaPencere);
        actionKasa->setObjectName(QString::fromUtf8("actionKasa"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resimler/Hardware-Central-Unit-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionKasa->setIcon(icon7);
        actionG_Kayna = new QAction(TKNAnaPencere);
        actionG_Kayna->setObjectName(QString::fromUtf8("actionG_Kayna"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resimler/power_supply.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionG_Kayna->setIcon(icon8);
        actionMonit_r = new QAction(TKNAnaPencere);
        actionMonit_r->setObjectName(QString::fromUtf8("actionMonit_r"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/resimler/monitor.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMonit_r->setIcon(icon9);
        actionKlavye = new QAction(TKNAnaPencere);
        actionKlavye->setObjectName(QString::fromUtf8("actionKlavye"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/resimler/keyboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionKlavye->setIcon(icon10);
        actionFare = new QAction(TKNAnaPencere);
        actionFare->setObjectName(QString::fromUtf8("actionFare"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/resimler/Mouse.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFare->setIcon(icon11);
        actionT_m_Par_alar = new QAction(TKNAnaPencere);
        actionT_m_Par_alar->setObjectName(QString::fromUtf8("actionT_m_Par_alar"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/resimler/box_search_tumparca.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionT_m_Par_alar->setIcon(icon12);
        actionAnakartlar = new QAction(TKNAnaPencere);
        actionAnakartlar->setObjectName(QString::fromUtf8("actionAnakartlar"));
        action_lemciler = new QAction(TKNAnaPencere);
        action_lemciler->setObjectName(QString::fromUtf8("action_lemciler"));
        actionEkran_Kartlar = new QAction(TKNAnaPencere);
        actionEkran_Kartlar->setObjectName(QString::fromUtf8("actionEkran_Kartlar"));
        actionRamler = new QAction(TKNAnaPencere);
        actionRamler->setObjectName(QString::fromUtf8("actionRamler"));
        actionHarddiskler = new QAction(TKNAnaPencere);
        actionHarddiskler->setObjectName(QString::fromUtf8("actionHarddiskler"));
        actionKasalar = new QAction(TKNAnaPencere);
        actionKasalar->setObjectName(QString::fromUtf8("actionKasalar"));
        actionG_Kaynaklar = new QAction(TKNAnaPencere);
        actionG_Kaynaklar->setObjectName(QString::fromUtf8("actionG_Kaynaklar"));
        actionMonit_rler = new QAction(TKNAnaPencere);
        actionMonit_rler->setObjectName(QString::fromUtf8("actionMonit_rler"));
        actionKlavyeler = new QAction(TKNAnaPencere);
        actionKlavyeler->setObjectName(QString::fromUtf8("actionKlavyeler"));
        actionFareler = new QAction(TKNAnaPencere);
        actionFareler->setObjectName(QString::fromUtf8("actionFareler"));
        centralwidget = new QWidget(TKNAnaPencere);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        TKNAnaPencere->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TKNAnaPencere);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuBilgisayar_Par_a_Bilgileri = new QMenu(menubar);
        menuBilgisayar_Par_a_Bilgileri->setObjectName(QString::fromUtf8("menuBilgisayar_Par_a_Bilgileri"));
        menu_retilen_Par_alar = new QMenu(menuBilgisayar_Par_a_Bilgileri);
        menu_retilen_Par_alar->setObjectName(QString::fromUtf8("menu_retilen_Par_alar"));
        menuYeni_Par_a_Giri_i = new QMenu(menuBilgisayar_Par_a_Bilgileri);
        menuYeni_Par_a_Giri_i->setObjectName(QString::fromUtf8("menuYeni_Par_a_Giri_i"));
        menuMevcut_Par_alar = new QMenu(menuBilgisayar_Par_a_Bilgileri);
        menuMevcut_Par_alar->setObjectName(QString::fromUtf8("menuMevcut_Par_alar"));
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
        menuBilgisayar_Par_a_Bilgileri->addAction(menuYeni_Par_a_Giri_i->menuAction());
        menuBilgisayar_Par_a_Bilgileri->addAction(menuMevcut_Par_alar->menuAction());
        menuBilgisayar_Par_a_Bilgileri->addSeparator();
        menuBilgisayar_Par_a_Bilgileri->addAction(menu_retilen_Par_alar->menuAction());
        menu_retilen_Par_alar->addAction(actionToplu_Par_a_retimi);
        menuYeni_Par_a_Giri_i->addAction(actionAnakart);
        menuYeni_Par_a_Giri_i->addAction(action_lemci);
        menuYeni_Par_a_Giri_i->addAction(actionEkran_Kart);
        menuYeni_Par_a_Giri_i->addAction(actionRam);
        menuYeni_Par_a_Giri_i->addAction(actionHardDisk);
        menuYeni_Par_a_Giri_i->addAction(actionKasa);
        menuYeni_Par_a_Giri_i->addAction(actionG_Kayna);
        menuYeni_Par_a_Giri_i->addAction(actionMonit_r);
        menuYeni_Par_a_Giri_i->addAction(actionKlavye);
        menuYeni_Par_a_Giri_i->addAction(actionFare);
        menuMevcut_Par_alar->addAction(actionT_m_Par_alar);
        menuMevcut_Par_alar->addAction(actionAnakartlar);
        menuMevcut_Par_alar->addAction(action_lemciler);
        menuMevcut_Par_alar->addAction(actionEkran_Kartlar);
        menuMevcut_Par_alar->addAction(actionRamler);
        menuMevcut_Par_alar->addAction(actionHarddiskler);
        menuMevcut_Par_alar->addAction(actionKasalar);
        menuMevcut_Par_alar->addAction(actionG_Kaynaklar);
        menuMevcut_Par_alar->addAction(actionMonit_rler);
        menuMevcut_Par_alar->addAction(actionKlavyeler);
        menuMevcut_Par_alar->addAction(actionFareler);
        menuTedarik_i_Tan_mlar->addAction(actionYeni_Tedarik_i_Tan_mlama);
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
        actionToplu_Par_a_retimi->setText(QCoreApplication::translate("TKNAnaPencere", "Toplu Par\303\247a \303\234retimi", nullptr));
        actionYeni_Tedarik_i_Tan_mlama->setText(QCoreApplication::translate("TKNAnaPencere", "Yeni Tedarik\303\247i Tan\304\261mlama", nullptr));
        actionTedarik_iler->setText(QCoreApplication::translate("TKNAnaPencere", "Tedarik\303\247iler", nullptr));
        actionYeni_Fatura->setText(QCoreApplication::translate("TKNAnaPencere", "Yeni Fatura", nullptr));
        actionFaturalar->setText(QCoreApplication::translate("TKNAnaPencere", "Faturalar", nullptr));
        actionYeni_Fatura_2->setText(QCoreApplication::translate("TKNAnaPencere", "Yeni Fatura", nullptr));
        actionFaturalar_2->setText(QCoreApplication::translate("TKNAnaPencere", "Faturalar", nullptr));
        actionYeni_M_teri->setText(QCoreApplication::translate("TKNAnaPencere", "Yeni M\303\274\305\237teri", nullptr));
        actionM_teriler->setText(QCoreApplication::translate("TKNAnaPencere", "M\303\274\305\237teriler", nullptr));
        actionAnakart->setText(QCoreApplication::translate("TKNAnaPencere", "Anakart", nullptr));
        action_lemci->setText(QCoreApplication::translate("TKNAnaPencere", "\304\260\305\237lemci", nullptr));
        actionEkran_Kart->setText(QCoreApplication::translate("TKNAnaPencere", "Ekran Kart\304\261", nullptr));
        actionRam->setText(QCoreApplication::translate("TKNAnaPencere", "Ram", nullptr));
        actionHardDisk->setText(QCoreApplication::translate("TKNAnaPencere", "HardDisk", nullptr));
        actionKasa->setText(QCoreApplication::translate("TKNAnaPencere", "Kasa", nullptr));
        actionG_Kayna->setText(QCoreApplication::translate("TKNAnaPencere", "G\303\274\303\247 Kayna\304\237\304\261", nullptr));
        actionMonit_r->setText(QCoreApplication::translate("TKNAnaPencere", "Monit\303\266r", nullptr));
        actionKlavye->setText(QCoreApplication::translate("TKNAnaPencere", "Klavye", nullptr));
        actionFare->setText(QCoreApplication::translate("TKNAnaPencere", "Fare", nullptr));
        actionT_m_Par_alar->setText(QCoreApplication::translate("TKNAnaPencere", "T\303\274m Par\303\247alar", nullptr));
        actionAnakartlar->setText(QCoreApplication::translate("TKNAnaPencere", "Anakartlar Liste", nullptr));
        action_lemciler->setText(QCoreApplication::translate("TKNAnaPencere", "\304\260\305\237lemciler Liste", nullptr));
        actionEkran_Kartlar->setText(QCoreApplication::translate("TKNAnaPencere", "Ekran Kartlar\304\261 Liste", nullptr));
        actionRamler->setText(QCoreApplication::translate("TKNAnaPencere", "Ramler Liste", nullptr));
        actionHarddiskler->setText(QCoreApplication::translate("TKNAnaPencere", "Harddiskler Liste", nullptr));
        actionKasalar->setText(QCoreApplication::translate("TKNAnaPencere", "Kasalar Liste", nullptr));
        actionG_Kaynaklar->setText(QCoreApplication::translate("TKNAnaPencere", "G\303\274\303\247 Kaynaklar\304\261 Liste", nullptr));
        actionMonit_rler->setText(QCoreApplication::translate("TKNAnaPencere", "Monit\303\266rler Liste", nullptr));
        actionKlavyeler->setText(QCoreApplication::translate("TKNAnaPencere", "Klavyeler Liste", nullptr));
        actionFareler->setText(QCoreApplication::translate("TKNAnaPencere", "Fareler Liste", nullptr));
        menuBilgisayar_Par_a_Bilgileri->setTitle(QCoreApplication::translate("TKNAnaPencere", "Bilgisayar Par\303\247a Bilgileri", nullptr));
        menu_retilen_Par_alar->setTitle(QCoreApplication::translate("TKNAnaPencere", "\303\234retilen Par\303\247alar", nullptr));
        menuYeni_Par_a_Giri_i->setTitle(QCoreApplication::translate("TKNAnaPencere", "Yeni Par\303\247a Giri\305\237i", nullptr));
        menuMevcut_Par_alar->setTitle(QCoreApplication::translate("TKNAnaPencere", "Mevcut Par\303\247alar", nullptr));
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
