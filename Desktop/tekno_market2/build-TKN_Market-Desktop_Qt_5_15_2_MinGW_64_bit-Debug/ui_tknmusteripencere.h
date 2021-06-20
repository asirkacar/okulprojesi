/********************************************************************************
** Form generated from reading UI file 'tknmusteripencere.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TKNMUSTERIPENCERE_H
#define UI_TKNMUSTERIPENCERE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TKNMusteriPencere
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QPlainTextEdit *plainTextEdit;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *TKNMusteriPencere)
    {
        if (TKNMusteriPencere->objectName().isEmpty())
            TKNMusteriPencere->setObjectName(QString::fromUtf8("TKNMusteriPencere"));
        TKNMusteriPencere->resize(555, 404);
        TKNMusteriPencere->setStyleSheet(QString::fromUtf8("/*\n"
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
        verticalLayout_3 = new QVBoxLayout(TKNMusteriPencere);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(123);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(TKNMusteriPencere);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(TKNMusteriPencere);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(TKNMusteriPencere);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(37);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(TKNMusteriPencere);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        plainTextEdit = new QPlainTextEdit(TKNMusteriPencere);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        lineEdit_3 = new QLineEdit(TKNMusteriPencere);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(TKNMusteriPencere);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resimler/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(TKNMusteriPencere);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resimler/dialog-close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(TKNMusteriPencere);
        QObject::connect(pushButton, SIGNAL(clicked()), TKNMusteriPencere, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), TKNMusteriPencere, SLOT(reject()));

        QMetaObject::connectSlotsByName(TKNMusteriPencere);
    } // setupUi

    void retranslateUi(QDialog *TKNMusteriPencere)
    {
        TKNMusteriPencere->setWindowTitle(QCoreApplication::translate("TKNMusteriPencere", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TKNMusteriPencere", "M\303\274\305\237teri Ad\304\261 Soyad\304\261", nullptr));
        label_2->setText(QCoreApplication::translate("TKNMusteriPencere", "M\303\274\305\237teri Adresi", nullptr));
        label_3->setText(QCoreApplication::translate("TKNMusteriPencere", "M\303\274\305\237teri Telefonu", nullptr));
        lineEdit_3->setInputMask(QCoreApplication::translate("TKNMusteriPencere", "\\0 (D99) 999 99 99", nullptr));
        pushButton->setText(QCoreApplication::translate("TKNMusteriPencere", "Kaydet", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TKNMusteriPencere", "\304\260ptal Et", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TKNMusteriPencere: public Ui_TKNMusteriPencere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TKNMUSTERIPENCERE_H
