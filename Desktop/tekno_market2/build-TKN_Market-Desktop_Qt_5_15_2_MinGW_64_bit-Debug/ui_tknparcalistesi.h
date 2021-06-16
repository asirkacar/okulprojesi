/********************************************************************************
** Form generated from reading UI file 'tknparcalistesi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TKNPARCALISTESI_H
#define UI_TKNPARCALISTESI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TKNParcaListesi
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *TKNParcaListesi)
    {
        if (TKNParcaListesi->objectName().isEmpty())
            TKNParcaListesi->setObjectName(QString::fromUtf8("TKNParcaListesi"));
        TKNParcaListesi->resize(874, 501);
        groupBox = new QGroupBox(TKNParcaListesi);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 30, 511, 191));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 140, 93, 28));
        tableWidget = new QTableWidget(TKNParcaListesi);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(80, 240, 681, 192));
        pushButton = new QPushButton(TKNParcaListesi);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(500, 450, 93, 28));

        retranslateUi(TKNParcaListesi);
        QObject::connect(pushButton, SIGNAL(clicked()), TKNParcaListesi, SLOT(accept()));

        QMetaObject::connectSlotsByName(TKNParcaListesi);
    } // setupUi

    void retranslateUi(QDialog *TKNParcaListesi)
    {
        TKNParcaListesi->setWindowTitle(QCoreApplication::translate("TKNParcaListesi", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TKNParcaListesi", "Arama", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TKNParcaListesi", "Ara", nullptr));
        pushButton->setText(QCoreApplication::translate("TKNParcaListesi", "Kapat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TKNParcaListesi: public Ui_TKNParcaListesi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TKNPARCALISTESI_H
