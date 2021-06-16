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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TKNTumParcaListesi
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *leParcaAdDegeri;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbParcaAdiIleBaslayan;
    QRadioButton *rbParcaAdiIleBiten;
    QRadioButton *rbParcaAdiIceren;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *leParcaModelDegeri;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *rbParcaModelIleBaslayan;
    QRadioButton *rbParcaModelIleBiten;
    QRadioButton *rbParcaModelIceren;
    QCheckBox *cbYazarkenAra;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *TKNTumParcaListesi)
    {
        if (TKNTumParcaListesi->objectName().isEmpty())
            TKNTumParcaListesi->setObjectName(QString::fromUtf8("TKNTumParcaListesi"));
        TKNTumParcaListesi->resize(898, 666);
        verticalLayout_4 = new QVBoxLayout(TKNTumParcaListesi);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(TKNTumParcaListesi);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        leParcaAdDegeri = new QLineEdit(groupBox_2);
        leParcaAdDegeri->setObjectName(QString::fromUtf8("leParcaAdDegeri"));

        horizontalLayout_3->addWidget(leParcaAdDegeri);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rbParcaAdiIleBaslayan = new QRadioButton(groupBox_3);
        rbParcaAdiIleBaslayan->setObjectName(QString::fromUtf8("rbParcaAdiIleBaslayan"));

        horizontalLayout->addWidget(rbParcaAdiIleBaslayan);

        rbParcaAdiIleBiten = new QRadioButton(groupBox_3);
        rbParcaAdiIleBiten->setObjectName(QString::fromUtf8("rbParcaAdiIleBiten"));

        horizontalLayout->addWidget(rbParcaAdiIleBiten);

        rbParcaAdiIceren = new QRadioButton(groupBox_3);
        rbParcaAdiIceren->setObjectName(QString::fromUtf8("rbParcaAdiIceren"));

        horizontalLayout->addWidget(rbParcaAdiIceren);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox_3);


        horizontalLayout_8->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        leParcaModelDegeri = new QLineEdit(groupBox_4);
        leParcaModelDegeri->setObjectName(QString::fromUtf8("leParcaModelDegeri"));

        horizontalLayout_4->addWidget(leParcaModelDegeri);


        verticalLayout_3->addLayout(horizontalLayout_4);

        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        rbParcaModelIleBaslayan = new QRadioButton(groupBox_5);
        rbParcaModelIleBaslayan->setObjectName(QString::fromUtf8("rbParcaModelIleBaslayan"));

        horizontalLayout_7->addWidget(rbParcaModelIleBaslayan);

        rbParcaModelIleBiten = new QRadioButton(groupBox_5);
        rbParcaModelIleBiten->setObjectName(QString::fromUtf8("rbParcaModelIleBiten"));

        horizontalLayout_7->addWidget(rbParcaModelIleBiten);

        rbParcaModelIceren = new QRadioButton(groupBox_5);
        rbParcaModelIceren->setObjectName(QString::fromUtf8("rbParcaModelIceren"));

        horizontalLayout_7->addWidget(rbParcaModelIceren);


        horizontalLayout_5->addLayout(horizontalLayout_7);


        verticalLayout_3->addWidget(groupBox_5);


        horizontalLayout_8->addWidget(groupBox_4);


        verticalLayout_5->addLayout(horizontalLayout_8);

        cbYazarkenAra = new QCheckBox(groupBox);
        cbYazarkenAra->setObjectName(QString::fromUtf8("cbYazarkenAra"));

        verticalLayout_5->addWidget(cbYazarkenAra);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setAutoRepeatDelay(300);

        verticalLayout_5->addWidget(pushButton_2);


        verticalLayout_2->addWidget(groupBox);

        tableWidget = new QTableWidget(TKNTumParcaListesi);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);

        pushButton = new QPushButton(TKNTumParcaListesi);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);


        verticalLayout_4->addLayout(verticalLayout_2);


        retranslateUi(TKNTumParcaListesi);
        QObject::connect(pushButton, SIGNAL(clicked()), TKNTumParcaListesi, SLOT(accept()));
        QObject::connect(leParcaAdDegeri, SIGNAL(textChanged(QString)), TKNTumParcaListesi, SLOT(Ara()));
        QObject::connect(leParcaModelDegeri, SIGNAL(textChanged(QString)), TKNTumParcaListesi, SLOT(Ara()));
        QObject::connect(rbParcaModelIceren, SIGNAL(clicked()), TKNTumParcaListesi, SLOT(Ara()));
        QObject::connect(rbParcaModelIleBiten, SIGNAL(clicked()), TKNTumParcaListesi, SLOT(Ara()));
        QObject::connect(rbParcaModelIleBaslayan, SIGNAL(clicked()), TKNTumParcaListesi, SLOT(Ara()));
        QObject::connect(rbParcaAdiIceren, SIGNAL(clicked()), TKNTumParcaListesi, SLOT(Ara()));
        QObject::connect(rbParcaAdiIleBiten, SIGNAL(clicked()), TKNTumParcaListesi, SLOT(Ara()));
        QObject::connect(rbParcaAdiIleBaslayan, SIGNAL(clicked()), TKNTumParcaListesi, SLOT(Ara()));
        QObject::connect(cbYazarkenAra, SIGNAL(clicked(bool)), pushButton_2, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(TKNTumParcaListesi);
    } // setupUi

    void retranslateUi(QDialog *TKNTumParcaListesi)
    {
        TKNTumParcaListesi->setWindowTitle(QCoreApplication::translate("TKNTumParcaListesi", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TKNTumParcaListesi", "Arama", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TKNTumParcaListesi", "Par\303\247a Markas\304\261", nullptr));
        label->setText(QCoreApplication::translate("TKNTumParcaListesi", "De\304\237er", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("TKNTumParcaListesi", "Filtre T\303\274r\303\274", nullptr));
        rbParcaAdiIleBaslayan->setText(QCoreApplication::translate("TKNTumParcaListesi", "\304\260le Ba\305\237layan", nullptr));
        rbParcaAdiIleBiten->setText(QCoreApplication::translate("TKNTumParcaListesi", "\304\260le Biten", nullptr));
        rbParcaAdiIceren->setText(QCoreApplication::translate("TKNTumParcaListesi", "\304\260\303\247eren", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("TKNTumParcaListesi", "Par\303\247a Mdeli", nullptr));
        label_2->setText(QCoreApplication::translate("TKNTumParcaListesi", "De\304\237er", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("TKNTumParcaListesi", "Filtre T\303\274r\303\274", nullptr));
        rbParcaModelIleBaslayan->setText(QCoreApplication::translate("TKNTumParcaListesi", "\304\260le Ba\305\237layan", nullptr));
        rbParcaModelIleBiten->setText(QCoreApplication::translate("TKNTumParcaListesi", "\304\260le Biten", nullptr));
        rbParcaModelIceren->setText(QCoreApplication::translate("TKNTumParcaListesi", "\304\260\303\247eren", nullptr));
        cbYazarkenAra->setText(QCoreApplication::translate("TKNTumParcaListesi", "Yazarken Ara", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TKNTumParcaListesi", "Ara", nullptr));
        pushButton->setText(QCoreApplication::translate("TKNTumParcaListesi", "Kapat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TKNTumParcaListesi: public Ui_TKNTumParcaListesi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TKNTUMPARCALISTESI_H
