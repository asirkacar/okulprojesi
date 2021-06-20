/********************************************************************************
** Form generated from reading UI file 'tknmusteriliste.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TKNMUSTERILISTE_H
#define UI_TKNMUSTERILISTE_H

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

class Ui_TKNMusteriListe
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *leMusteriAdDegeri;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbMusteriAdIleBaslayan;
    QRadioButton *rbMusteriAdIleBiten;
    QRadioButton *rbMusteriAdIceren;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QCheckBox *cbYazarkenAra;
    QTableWidget *tableWidget;
    QPushButton *pushButton_2;

    void setupUi(QDialog *TKNMusteriListe)
    {
        if (TKNMusteriListe->objectName().isEmpty())
            TKNMusteriListe->setObjectName(QString::fromUtf8("TKNMusteriListe"));
        TKNMusteriListe->resize(755, 469);
        verticalLayout_4 = new QVBoxLayout(TKNMusteriListe);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(TKNMusteriListe);
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

        leMusteriAdDegeri = new QLineEdit(groupBox_2);
        leMusteriAdDegeri->setObjectName(QString::fromUtf8("leMusteriAdDegeri"));

        horizontalLayout_3->addWidget(leMusteriAdDegeri);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rbMusteriAdIleBaslayan = new QRadioButton(groupBox_4);
        rbMusteriAdIleBaslayan->setObjectName(QString::fromUtf8("rbMusteriAdIleBaslayan"));

        horizontalLayout->addWidget(rbMusteriAdIleBaslayan);

        rbMusteriAdIleBiten = new QRadioButton(groupBox_4);
        rbMusteriAdIleBiten->setObjectName(QString::fromUtf8("rbMusteriAdIleBiten"));

        horizontalLayout->addWidget(rbMusteriAdIleBiten);

        rbMusteriAdIceren = new QRadioButton(groupBox_4);
        rbMusteriAdIceren->setObjectName(QString::fromUtf8("rbMusteriAdIceren"));

        horizontalLayout->addWidget(rbMusteriAdIceren);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox_4);


        horizontalLayout_7->addWidget(groupBox_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        cbYazarkenAra = new QCheckBox(groupBox);
        cbYazarkenAra->setObjectName(QString::fromUtf8("cbYazarkenAra"));

        verticalLayout_3->addWidget(cbYazarkenAra);


        horizontalLayout_7->addLayout(verticalLayout_3);


        verticalLayout_4->addWidget(groupBox);

        tableWidget = new QTableWidget(TKNMusteriListe);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_4->addWidget(tableWidget);

        pushButton_2 = new QPushButton(TKNMusteriListe);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);

#if QT_CONFIG(shortcut)
        label->setBuddy(leMusteriAdDegeri);
#endif // QT_CONFIG(shortcut)

        retranslateUi(TKNMusteriListe);
        QObject::connect(cbYazarkenAra, SIGNAL(clicked(bool)), pushButton, SLOT(setDisabled(bool)));
        QObject::connect(rbMusteriAdIceren, SIGNAL(clicked()), TKNMusteriListe, SLOT(Ara()));
        QObject::connect(rbMusteriAdIleBiten, SIGNAL(clicked()), TKNMusteriListe, SLOT(Ara()));
        QObject::connect(rbMusteriAdIleBaslayan, SIGNAL(clicked()), TKNMusteriListe, SLOT(Ara()));
        QObject::connect(leMusteriAdDegeri, SIGNAL(textChanged(QString)), TKNMusteriListe, SLOT(Ara()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), TKNMusteriListe, SLOT(accept()));
        QObject::connect(pushButton, SIGNAL(clicked()), TKNMusteriListe, SLOT(Ara()));

        QMetaObject::connectSlotsByName(TKNMusteriListe);
    } // setupUi

    void retranslateUi(QDialog *TKNMusteriListe)
    {
        TKNMusteriListe->setWindowTitle(QCoreApplication::translate("TKNMusteriListe", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TKNMusteriListe", "Arama", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TKNMusteriListe", "M\303\274\305\237teri Ad\304\261", nullptr));
        label->setText(QCoreApplication::translate("TKNMusteriListe", "De\304\237er", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("TKNMusteriListe", "Filtre T\303\274r\303\274", nullptr));
        rbMusteriAdIleBaslayan->setText(QCoreApplication::translate("TKNMusteriListe", "\304\260le Ba\305\237layan", nullptr));
        rbMusteriAdIleBiten->setText(QCoreApplication::translate("TKNMusteriListe", "\304\260le Biten", nullptr));
        rbMusteriAdIceren->setText(QCoreApplication::translate("TKNMusteriListe", "\304\260\303\247eren", nullptr));
        pushButton->setText(QCoreApplication::translate("TKNMusteriListe", "Ara", nullptr));
        cbYazarkenAra->setText(QCoreApplication::translate("TKNMusteriListe", "Yazarken Ara", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TKNMusteriListe", "Kapat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TKNMusteriListe: public Ui_TKNMusteriListe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TKNMUSTERILISTE_H
