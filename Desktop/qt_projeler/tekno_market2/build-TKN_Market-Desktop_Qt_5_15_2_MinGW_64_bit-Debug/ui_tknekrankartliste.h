/********************************************************************************
** Form generated from reading UI file 'tknekrankartliste.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TKNEKRANKARTLISTE_H
#define UI_TKNEKRANKARTLISTE_H

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

class Ui_TKNEkranKartListe
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *leParcaMarkaDegeri;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbParcaMarkaIleBaslayan;
    QRadioButton *rbParcaMarkaIleBiten;
    QRadioButton *rbParcaMarkaIceren;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *leParcaModelDegeri;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *rbParcaModelIleBaslayan;
    QRadioButton *rbParcaModelIleBiten;
    QRadioButton *rbParcaModelIceren;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_2;
    QCheckBox *cbYazarkenAra;
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *TKNEkranKartListe)
    {
        if (TKNEkranKartListe->objectName().isEmpty())
            TKNEkranKartListe->setObjectName(QString::fromUtf8("TKNEkranKartListe"));
        TKNEkranKartListe->resize(840, 549);
        verticalLayout_4 = new QVBoxLayout(TKNEkranKartListe);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(TKNEkranKartListe);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_7 = new QHBoxLayout(groupBox);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        leParcaMarkaDegeri = new QLineEdit(groupBox_2);
        leParcaMarkaDegeri->setObjectName(QString::fromUtf8("leParcaMarkaDegeri"));

        horizontalLayout_3->addWidget(leParcaMarkaDegeri);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rbParcaMarkaIleBaslayan = new QRadioButton(groupBox_3);
        rbParcaMarkaIleBaslayan->setObjectName(QString::fromUtf8("rbParcaMarkaIleBaslayan"));

        horizontalLayout->addWidget(rbParcaMarkaIleBaslayan);

        rbParcaMarkaIleBiten = new QRadioButton(groupBox_3);
        rbParcaMarkaIleBiten->setObjectName(QString::fromUtf8("rbParcaMarkaIleBiten"));

        horizontalLayout->addWidget(rbParcaMarkaIleBiten);

        rbParcaMarkaIceren = new QRadioButton(groupBox_3);
        rbParcaMarkaIceren->setObjectName(QString::fromUtf8("rbParcaMarkaIceren"));

        horizontalLayout->addWidget(rbParcaMarkaIceren);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox_3);


        horizontalLayout_7->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        leParcaModelDegeri = new QLineEdit(groupBox_4);
        leParcaModelDegeri->setObjectName(QString::fromUtf8("leParcaModelDegeri"));

        horizontalLayout_4->addWidget(leParcaModelDegeri);


        verticalLayout_2->addLayout(horizontalLayout_4);

        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        rbParcaModelIleBaslayan = new QRadioButton(groupBox_5);
        rbParcaModelIleBaslayan->setObjectName(QString::fromUtf8("rbParcaModelIleBaslayan"));

        horizontalLayout_6->addWidget(rbParcaModelIleBaslayan);

        rbParcaModelIleBiten = new QRadioButton(groupBox_5);
        rbParcaModelIleBiten->setObjectName(QString::fromUtf8("rbParcaModelIleBiten"));

        horizontalLayout_6->addWidget(rbParcaModelIleBiten);

        rbParcaModelIceren = new QRadioButton(groupBox_5);
        rbParcaModelIceren->setObjectName(QString::fromUtf8("rbParcaModelIceren"));

        horizontalLayout_6->addWidget(rbParcaModelIceren);


        horizontalLayout_5->addLayout(horizontalLayout_6);


        verticalLayout_2->addWidget(groupBox_5);


        horizontalLayout_7->addWidget(groupBox_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_3->addWidget(pushButton_2);

        cbYazarkenAra = new QCheckBox(groupBox);
        cbYazarkenAra->setObjectName(QString::fromUtf8("cbYazarkenAra"));

        verticalLayout_3->addWidget(cbYazarkenAra);


        horizontalLayout_7->addLayout(verticalLayout_3);


        verticalLayout_4->addWidget(groupBox);

        tableWidget = new QTableWidget(TKNEkranKartListe);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_4->addWidget(tableWidget);

        pushButton = new QPushButton(TKNEkranKartListe);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_4->addWidget(pushButton);

#if QT_CONFIG(shortcut)
        label->setBuddy(leParcaMarkaDegeri);
        label_2->setBuddy(leParcaMarkaDegeri);
#endif // QT_CONFIG(shortcut)

        retranslateUi(TKNEkranKartListe);
        QObject::connect(cbYazarkenAra, SIGNAL(clicked(bool)), pushButton_2, SLOT(setDisabled(bool)));
        QObject::connect(rbParcaModelIceren, SIGNAL(clicked()), TKNEkranKartListe, SLOT(Ara()));
        QObject::connect(rbParcaModelIleBiten, SIGNAL(clicked()), TKNEkranKartListe, SLOT(Ara()));
        QObject::connect(rbParcaModelIleBaslayan, SIGNAL(clicked()), TKNEkranKartListe, SLOT(Ara()));
        QObject::connect(leParcaModelDegeri, SIGNAL(textChanged(QString)), TKNEkranKartListe, SLOT(Ara()));
        QObject::connect(leParcaMarkaDegeri, SIGNAL(textChanged(QString)), TKNEkranKartListe, SLOT(Ara()));
        QObject::connect(rbParcaMarkaIceren, SIGNAL(clicked()), TKNEkranKartListe, SLOT(Ara()));
        QObject::connect(rbParcaMarkaIleBiten, SIGNAL(clicked()), TKNEkranKartListe, SLOT(Ara()));
        QObject::connect(rbParcaMarkaIleBaslayan, SIGNAL(clicked()), TKNEkranKartListe, SLOT(Ara()));
        QObject::connect(pushButton, SIGNAL(clicked()), TKNEkranKartListe, SLOT(accept()));

        QMetaObject::connectSlotsByName(TKNEkranKartListe);
    } // setupUi

    void retranslateUi(QDialog *TKNEkranKartListe)
    {
        TKNEkranKartListe->setWindowTitle(QCoreApplication::translate("TKNEkranKartListe", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TKNEkranKartListe", "Arama", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TKNEkranKartListe", "Par\303\247a Markas\304\261", nullptr));
        label->setText(QCoreApplication::translate("TKNEkranKartListe", "De\304\237er", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("TKNEkranKartListe", "Filtre T\303\274r\303\274", nullptr));
        rbParcaMarkaIleBaslayan->setText(QCoreApplication::translate("TKNEkranKartListe", "\304\260le Ba\305\237layan", nullptr));
        rbParcaMarkaIleBiten->setText(QCoreApplication::translate("TKNEkranKartListe", "\304\260le Biten", nullptr));
        rbParcaMarkaIceren->setText(QCoreApplication::translate("TKNEkranKartListe", "\304\260\303\247eren", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("TKNEkranKartListe", "Par\303\247a Modeli", nullptr));
        label_2->setText(QCoreApplication::translate("TKNEkranKartListe", "De\304\237er", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("TKNEkranKartListe", "Filtre T\303\274r\303\274", nullptr));
        rbParcaModelIleBaslayan->setText(QCoreApplication::translate("TKNEkranKartListe", "\304\260le Ba\305\237layan", nullptr));
        rbParcaModelIleBiten->setText(QCoreApplication::translate("TKNEkranKartListe", "\304\260le Biten", nullptr));
        rbParcaModelIceren->setText(QCoreApplication::translate("TKNEkranKartListe", "\304\260\303\247eren", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TKNEkranKartListe", "Ara", nullptr));
        cbYazarkenAra->setText(QCoreApplication::translate("TKNEkranKartListe", "Yazarken Ara", nullptr));
        pushButton->setText(QCoreApplication::translate("TKNEkranKartListe", "Kapat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TKNEkranKartListe: public Ui_TKNEkranKartListe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TKNEKRANKARTLISTE_H
