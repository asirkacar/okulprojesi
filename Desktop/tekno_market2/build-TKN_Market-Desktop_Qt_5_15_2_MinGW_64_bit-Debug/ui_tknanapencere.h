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
"ManjaroMix Style Sheet for QT Applications\n"
"Author: Jaime A. Quiroga P.\n"
"Company: GTRONICK\n"
"Last updated: 25/02/2020, 15:42.\n"
"Available at: https://github.com/GTRONICK/QSS/blob/master/ManjaroMix.qss\n"
"*/\n"
"QMainWindow {\n"
"	background-color:#151a1e;\n"
"}\n"
"QCalendar {\n"
"	background-color: #151a1e;\n"
"}\n"
"QTextEdit {\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"	background-color: #222b2e;\n"
"	color: #d3dae3;\n"
"}\n"
"QPlainTextEdit {\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"	background-color: #222b2e;\n"
"	color: #d3dae3;\n"
"}\n"
"QToolButton {\n"
"	border-style: solid;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(215, 215, 215), stop:1 rgb(222, 222, 222));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(217, 217, 217), stop:1 rgb(227, 227, 227));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0, y1:0.5, "
                        "x2:1, y2:0.5, stop:0 rgb(227, 227, 227), stop:1 rgb(217, 217, 217));\n"
"	border-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(215, 215, 215), stop:1 rgb(222, 222, 222));\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #d3dae3;\n"
"	padding: 2px;\n"
"	background-color: rgb(255,255,255);\n"
"}\n"
"QToolButton:hover{\n"
"	border-style: solid;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(195, 195, 195), stop:1 rgb(222, 222, 222));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(197, 197, 197), stop:1 rgb(227, 227, 227));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(227, 227, 227), stop:1 rgb(197, 197, 197));\n"
"	border-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(195, 195, 195), stop:1 rgb(222, 222, 222));\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: rgb(0,0,0);\n"
"	padding: 2px;\n"
""
                        "	background-color: rgb(255,255,255);\n"
"}\n"
"QToolButton:pressed{\n"
"	border-style: solid;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(215, 215, 215), stop:1 rgb(222, 222, 222));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(217, 217, 217), stop:1 rgb(227, 227, 227));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(227, 227, 227), stop:1 rgb(217, 217, 217));\n"
"	border-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(215, 215, 215), stop:1 rgb(222, 222, 222));\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: rgb(0,0,0);\n"
"	padding: 2px;\n"
"	background-color: rgb(142,142,142);\n"
"}\n"
"QPushButton{\n"
"	border-style: solid;\n"
"	border-color: #050a0e;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #d3dae3;\n"
"	padding: 2px;\n"
"	background-color: #151a1e;\n"
"}\n"
"QPushButton::default{\n"
"	border-style: solid;\n"
""
                        "	border-color: #050a0e;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #FFFFFF;\n"
"	padding: 2px;\n"
"	background-color: #151a1e;;\n"
"}\n"
"QPushButton:hover{\n"
"	border-style: solid;\n"
"	border-color: #050a0e;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #d3dae3;\n"
"	padding: 2px;\n"
"	background-color: #1c1f1f;\n"
"}\n"
"QPushButton:pressed{\n"
"	border-style: solid;\n"
"	border-color: #050a0e;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #d3dae3;\n"
"	padding: 2px;\n"
"	background-color: #2c2f2f;\n"
"}\n"
"QPushButton:disabled{\n"
"	border-style: solid;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(215, 215, 215), stop:1 rgb(222, 222, 222));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(217, 217, 217), stop:1 rgb(227, 227, 227));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(227, 227, 227), stop:1 rgb(217, 217, 217));\n"
"	b"
                        "order-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(215, 215, 215), stop:1 rgb(222, 222, 222));\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #808086;\n"
"	padding: 2px;\n"
"	background-color: rgb(142,142,142);\n"
"}\n"
"QLineEdit {\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"	background-color: #222b2e;\n"
"	color: #d3dae3;\n"
"}\n"
"QLabel {\n"
"	color: #d3dae3;\n"
"}\n"
"QLCDNumber {\n"
"	color: #4d9b87;\n"
"}\n"
"QProgressBar {\n"
"	text-align: center;\n"
"	color: #d3dae3;\n"
"	border-radius: 10px;\n"
"	border-color: transparent;\n"
"	border-style: solid;\n"
"	background-color: #52595d;\n"
"}\n"
"QProgressBar::chunk {\n"
"	background-color: #214037	;\n"
"	border-radius: 10px;\n"
"}\n"
"QMenuBar {\n"
"	background-color: #151a1e;\n"
"}\n"
"QMenuBar::item {\n"
"	color: #d3dae3;\n"
"  	spacing: 3px;\n"
"  	padding: 1px 4px;\n"
"	background-color: #151a1e;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"  	background-color: #252"
                        "a2e;\n"
"	color: #FFFFFF;\n"
"}\n"
"QMenu {\n"
"	background-color: #151a1e;\n"
"}\n"
"QMenu::item:selected {\n"
"	background-color: #252a2e;\n"
"	color: #FFFFFF;\n"
"}\n"
"QMenu::item {\n"
"	color: #d3dae3;\n"
"	background-color: #151a1e;\n"
"}\n"
"QTabWidget {\n"
"	color:rgb(0,0,0);\n"
"	background-color:#000000;\n"
"}\n"
"QTabWidget::pane {\n"
"		border-color: #050a0e;\n"
"		background-color: #1e282c;\n"
"		border-style: solid;\n"
"		border-width: 1px;\n"
"    	border-bottom-left-radius: 4px;\n"
"		border-bottom-right-radius: 4px;\n"
"}\n"
"QTabBar::tab:first {\n"
"	border-style: solid;\n"
"	border-left-width:1px;\n"
"	border-right-width:0px;\n"
"	border-top-width:1px;\n"
"	border-bottom-width:0px;\n"
"	border-top-color: #050a0e;\n"
"	border-left-color: #050a0e;\n"
"	border-bottom-color: #050a0e;\n"
"	border-top-left-radius: 4px;\n"
"	color: #d3dae3;\n"
"	padding: 3px;\n"
"	margin-left:0px;\n"
"	background-color: #151a1e;\n"
"}\n"
"QTabBar::tab:last {\n"
"	border-style: solid;\n"
"	border-top-width:1px;\n"
""
                        "	border-left-width:1px;\n"
"	border-right-width:1px;\n"
"	border-bottom-width:0px;\n"
"	border-color: #050a0e;\n"
"	border-top-right-radius: 4px;\n"
"	color: #d3dae3;\n"
"	padding: 3px;\n"
"	margin-left:0px;\n"
"	background-color: #151a1e;\n"
"}\n"
"QTabBar::tab {\n"
"	border-style: solid;\n"
"	border-top-width:1px;\n"
"	border-bottom-width:0px;\n"
"	border-left-width:1px;\n"
"	border-top-color: #050a0e;\n"
"	border-left-color: #050a0e;\n"
"	border-bottom-color: #050a0e;\n"
"	color: #d3dae3;\n"
"	padding: 3px;\n"
"	margin-left:0px;\n"
"	background-color: #151a1e;\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:last:selected, QTabBar::tab:hover {\n"
"  	border-style: solid;\n"
"  	border-left-width:1px;\n"
"	border-bottom-width:0px;\n"
"	border-right-color: transparent;\n"
"	border-top-color: #050a0e;\n"
"	border-left-color: #050a0e;\n"
"	border-bottom-color: #050a0e;\n"
"	color: #FFFFFF;\n"
"	padding: 3px;\n"
"	margin-left:0px;\n"
"	background-color: #1e282c;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:fi"
                        "rst:selected, QTabBar::tab:hover {\n"
"  	border-style: solid;\n"
"  	border-left-width:1px;\n"
"  	border-bottom-width:0px;\n"
"  	border-top-width:1px;\n"
"	border-right-color: transparent;\n"
"	border-top-color: #050a0e;\n"
"	border-left-color: #050a0e;\n"
"	border-bottom-color: #050a0e;\n"
"	color: #FFFFFF;\n"
"	padding: 3px;\n"
"	margin-left:0px;\n"
"	background-color: #1e282c;\n"
"}\n"
"\n"
"QCheckBox {\n"
"	color: #d3dae3;\n"
"	padding: 2px;\n"
"}\n"
"QCheckBox:disabled {\n"
"	color: #808086;\n"
"	padding: 2px;\n"
"}\n"
"\n"
"QCheckBox:hover {\n"
"	border-radius:4px;\n"
"	border-style:solid;\n"
"	padding-left: 1px;\n"
"	padding-right: 1px;\n"
"	padding-bottom: 1px;\n"
"	padding-top: 1px;\n"
"	border-width:1px;\n"
"	border-color: transparent;\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-width: 1px;\n"
"	border-color: #4fa08b;\n"
"	color: #000000;\n"
"	background-color: qradialgradient(cx:0.4, cy:0.4, radius: 1.5,fx:0, fy:0, stop:0"
                        " #1e282c, stop:0.3 #1e282c, stop:0.4 #4fa08b, stop:0.5 #1e282c, stop:1 #1e282c);\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-width: 1px;\n"
"	border-color: #4fa08b;\n"
"	color: #000000;\n"
"}\n"
"QRadioButton {\n"
"	color: #d3dae3;\n"
"	padding: 1px;\n"
"}\n"
"QRadioButton::indicator:checked {\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-radius:5px;\n"
"	border-width: 1px;\n"
"	border-color: #4fa08b;\n"
"	color: #a9b7c6;\n"
"	background-color: qradialgradient(cx:0.5, cy:0.5, radius:0.4,fx:0.5, fy:0.5, stop:0 #4fa08b, stop:1 #1e282c);\n"
"}\n"
"QRadioButton::indicator:!checked {\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-radius:5px;\n"
"	border-width: 1px;\n"
"	border-color: #4fa08b;\n"
"	color: #a9b7c6;\n"
"	background-color: transparent;\n"
"}\n"
"QStatusBar {\n"
"	color:#027f7f;\n"
"}\n"
"QSpinBox {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1p"
                        "x;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QDoubleSpinBox {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QTimeEdit {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QDateTimeEdit {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QDateEdit {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QFontComboBox {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QComboBox {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"\n"
"QDial {\n"
"	backgroun"
                        "d: #16a085;\n"
"}\n"
"\n"
"QToolBox {\n"
"	color: #a9b7c6;\n"
"	background-color: #222b2e;\n"
"}\n"
"QToolBox::tab {\n"
"	color: #a9b7c6;\n"
"	background-color:#222b2e;\n"
"}\n"
"QToolBox::tab:selected {\n"
"	color: #FFFFFF;\n"
"	background-color:#222b2e;\n"
"}\n"
"QScrollArea {\n"
"	color: #FFFFFF;\n"
"	background-color:#222b2e;\n"
"}\n"
"QSlider::groove:horizontal {\n"
"	height: 5px;\n"
"	background-color: #52595d;\n"
"}\n"
"QSlider::groove:vertical {\n"
"	width: 5px;\n"
"	background-color: #52595d;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"	background: #1a2224;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-color: rgb(207,207,207);\n"
"	width: 12px;\n"
"	margin: -5px 0;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::handle:vertical {\n"
"	background: #1a2224;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-color: rgb(207,207,207);\n"
"	height: 12px;\n"
"	margin: 0 -5px;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"    background: #52595d;\n"
"}\n"
"QSlider"
                        "::add-page:vertical {\n"
"    background: #52595d;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"    background-color: #15433a;\n"
"}\n"
"QSlider::sub-page:vertical {\n"
"    background-color: #15433a;\n"
"}\n"
"QScrollBar:horizontal {\n"
"	max-height: 10px;\n"
"	border: 1px transparent grey;\n"
"	margin: 0px 20px 0px 20px;\n"
"	background: transparent;\n"
"}\n"
"QScrollBar:vertical {\n"
"	max-width: 10px;\n"
"	border: 1px transparent grey;\n"
"	margin: 20px 0px 20px 0px;\n"
"	background: transparent;\n"
"}\n"
"QScrollBar::handle:horizontal {\n"
"	background: #52595d;\n"
"	border-style: transparent;\n"
"	border-radius: 4px;\n"
"	min-width: 25px;\n"
"}\n"
"QScrollBar::handle:horizontal:hover {\n"
"	background: #58a492;\n"
"	border-style: transparent;\n"
"	border-radius: 4px;\n"
"	min-width: 25px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"	background: #52595d;\n"
"	border-style: transparent;\n"
"	border-radius: 4px;\n"
"	min-height: 25px;\n"
"}\n"
"QScrollBar::handle:vertical:hover {\n"
"	background: #58a492;\n"
""
                        "	border-style: transparent;\n"
"	border-radius: 4px;\n"
"	min-height: 25px;\n"
"}\n"
"QScrollBar::add-line:horizontal {\n"
"   border: 2px transparent grey;\n"
"   border-top-right-radius: 4px;\n"
"   border-bottom-right-radius: 4px;\n"
"   background: #15433a;\n"
"   width: 20px;\n"
"   subcontrol-position: right;\n"
"   subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:horizontal:pressed {\n"
"   border: 2px transparent grey;\n"
"   border-top-right-radius: 4px;\n"
"   border-bottom-right-radius: 4px;\n"
"   background: rgb(181,181,181);\n"
"   width: 20px;\n"
"   subcontrol-position: right;\n"
"   subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"   border: 2px transparent grey;\n"
"   border-bottom-left-radius: 4px;\n"
"   border-bottom-right-radius: 4px;\n"
"   background: #15433a;\n"
"   height: 20px;\n"
"   subcontrol-position: bottom;\n"
"   subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:vertical:pressed {\n"
"   border: 2px transparent grey;\n"
"   border-bott"
                        "om-left-radius: 4px;\n"
"   border-bottom-right-radius: 4px;\n"
"   background: rgb(181,181,181);\n"
"   height: 20px;\n"
"   subcontrol-position: bottom;\n"
"   subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:horizontal {\n"
"   border: 2px transparent grey;\n"
"   border-top-left-radius: 4px;\n"
"   border-bottom-left-radius: 4px;\n"
"   background: #15433a;\n"
"   width: 20px;\n"
"   subcontrol-position: left;\n"
"   subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:horizontal:pressed {\n"
"   border: 2px transparent grey;\n"
"   border-top-left-radius: 4px;\n"
"   border-bottom-left-radius: 4px;\n"
"   background: rgb(181,181,181);\n"
"   width: 20px;\n"
"   subcontrol-position: left;\n"
"   subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"   border: 2px transparent grey;\n"
"   border-top-left-radius: 4px;\n"
"   border-top-right-radius: 4px;\n"
"   background: #15433a;\n"
"   height: 20px;\n"
"   subcontrol-position: top;\n"
"   subcontrol-origin: margin;\n"
"}\n"
""
                        "QScrollBar::sub-line:vertical:pressed {\n"
"   border: 2px transparent grey;\n"
"   border-top-left-radius: 4px;\n"
"   border-top-right-radius: 4px;\n"
"   background: rgb(181,181,181);\n"
"   height: 20px;\n"
"   subcontrol-position: top;\n"
"   subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
"   background: none;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"   background: none;\n"
"}"));
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
        actionAnakart = new QAction(TKNAnaPencere);
        actionAnakart->setObjectName(QString::fromUtf8("actionAnakart"));
        action_lemci = new QAction(TKNAnaPencere);
        action_lemci->setObjectName(QString::fromUtf8("action_lemci"));
        actionEkran_Kart = new QAction(TKNAnaPencere);
        actionEkran_Kart->setObjectName(QString::fromUtf8("actionEkran_Kart"));
        actionRam = new QAction(TKNAnaPencere);
        actionRam->setObjectName(QString::fromUtf8("actionRam"));
        actionHardDisk = new QAction(TKNAnaPencere);
        actionHardDisk->setObjectName(QString::fromUtf8("actionHardDisk"));
        actionKasa = new QAction(TKNAnaPencere);
        actionKasa->setObjectName(QString::fromUtf8("actionKasa"));
        actionG_Kayna = new QAction(TKNAnaPencere);
        actionG_Kayna->setObjectName(QString::fromUtf8("actionG_Kayna"));
        actionMonit_r = new QAction(TKNAnaPencere);
        actionMonit_r->setObjectName(QString::fromUtf8("actionMonit_r"));
        actionKlavye = new QAction(TKNAnaPencere);
        actionKlavye->setObjectName(QString::fromUtf8("actionKlavye"));
        actionFare = new QAction(TKNAnaPencere);
        actionFare->setObjectName(QString::fromUtf8("actionFare"));
        actionT_m_Par_alar = new QAction(TKNAnaPencere);
        actionT_m_Par_alar->setObjectName(QString::fromUtf8("actionT_m_Par_alar"));
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
        menubar->setGeometry(QRect(0, 0, 800, 23));
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
