/********************************************************************************
** Form generated from reading UI file 'tkntumparcalistesi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TKNTUMPARCALISTESI_H
#define UI_TKNTUMPARCALISTESI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TKNTumParcaListesi
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *TKNTumParcaListesi)
    {
        if (TKNTumParcaListesi->objectName().isEmpty())
            TKNTumParcaListesi->setObjectName(QString::fromUtf8("TKNTumParcaListesi"));
        TKNTumParcaListesi->resize(601, 443);
        tableWidget = new QTableWidget(TKNTumParcaListesi);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(40, 160, 531, 192));
        pushButton = new QPushButton(TKNTumParcaListesi);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(380, 390, 93, 28));

        retranslateUi(TKNTumParcaListesi);
        QObject::connect(pushButton, SIGNAL(clicked()), TKNTumParcaListesi, SLOT(accept()));

        QMetaObject::connectSlotsByName(TKNTumParcaListesi);
    } // setupUi

    void retranslateUi(QDialog *TKNTumParcaListesi)
    {
        TKNTumParcaListesi->setWindowTitle(QCoreApplication::translate("TKNTumParcaListesi", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("TKNTumParcaListesi", "Kapat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TKNTumParcaListesi: public Ui_TKNTumParcaListesi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TKNTUMPARCALISTESI_H
