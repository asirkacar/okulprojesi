/********************************************************************************
** Form generated from reading UI file 'tkntedarikcilistew.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TKNTEDARIKCILISTEW_H
#define UI_TKNTEDARIKCILISTEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TKNTedarikciListeW
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *leTedarikciDegeri;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbTedarikciIleBaslayan;
    QRadioButton *rbTedarikciIleBiten;
    QRadioButton *rbTedarikciIceren;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *leYetkiliKisiDegeri;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *rbYetkiliKisiIleBaslayan;
    QRadioButton *rbYetkiliKisilIleBiten;
    QRadioButton *rbYetkiliKisiIceren;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QCheckBox *cbYazarkenAra;
    QTableWidget *tableWidget;

    void setupUi(QWidget *TKNTedarikciListeW)
    {
        if (TKNTedarikciListeW->objectName().isEmpty())
            TKNTedarikciListeW->setObjectName(QString::fromUtf8("TKNTedarikciListeW"));
        TKNTedarikciListeW->resize(755, 553);
        verticalLayout_4 = new QVBoxLayout(TKNTedarikciListeW);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(TKNTedarikciListeW);
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

        leTedarikciDegeri = new QLineEdit(groupBox_2);
        leTedarikciDegeri->setObjectName(QString::fromUtf8("leTedarikciDegeri"));

        horizontalLayout_3->addWidget(leTedarikciDegeri);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rbTedarikciIleBaslayan = new QRadioButton(groupBox_3);
        rbTedarikciIleBaslayan->setObjectName(QString::fromUtf8("rbTedarikciIleBaslayan"));

        horizontalLayout->addWidget(rbTedarikciIleBaslayan);

        rbTedarikciIleBiten = new QRadioButton(groupBox_3);
        rbTedarikciIleBiten->setObjectName(QString::fromUtf8("rbTedarikciIleBiten"));

        horizontalLayout->addWidget(rbTedarikciIleBiten);

        rbTedarikciIceren = new QRadioButton(groupBox_3);
        rbTedarikciIceren->setObjectName(QString::fromUtf8("rbTedarikciIceren"));

        horizontalLayout->addWidget(rbTedarikciIceren);


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

        leYetkiliKisiDegeri = new QLineEdit(groupBox_4);
        leYetkiliKisiDegeri->setObjectName(QString::fromUtf8("leYetkiliKisiDegeri"));

        horizontalLayout_4->addWidget(leYetkiliKisiDegeri);


        verticalLayout_2->addLayout(horizontalLayout_4);

        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        rbYetkiliKisiIleBaslayan = new QRadioButton(groupBox_5);
        rbYetkiliKisiIleBaslayan->setObjectName(QString::fromUtf8("rbYetkiliKisiIleBaslayan"));

        horizontalLayout_6->addWidget(rbYetkiliKisiIleBaslayan);

        rbYetkiliKisilIleBiten = new QRadioButton(groupBox_5);
        rbYetkiliKisilIleBiten->setObjectName(QString::fromUtf8("rbYetkiliKisilIleBiten"));

        horizontalLayout_6->addWidget(rbYetkiliKisilIleBiten);

        rbYetkiliKisiIceren = new QRadioButton(groupBox_5);
        rbYetkiliKisiIceren->setObjectName(QString::fromUtf8("rbYetkiliKisiIceren"));

        horizontalLayout_6->addWidget(rbYetkiliKisiIceren);


        horizontalLayout_5->addLayout(horizontalLayout_6);


        verticalLayout_2->addWidget(groupBox_5);


        horizontalLayout_7->addWidget(groupBox_4);

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

        tableWidget = new QTableWidget(TKNTedarikciListeW);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_4->addWidget(tableWidget);

#if QT_CONFIG(shortcut)
        label->setBuddy(leTedarikciDegeri);
        label_2->setBuddy(leTedarikciDegeri);
#endif // QT_CONFIG(shortcut)

        retranslateUi(TKNTedarikciListeW);
        QObject::connect(cbYazarkenAra, SIGNAL(clicked(bool)), pushButton, SLOT(setDisabled(bool)));
        QObject::connect(leYetkiliKisiDegeri, SIGNAL(textChanged(QString)), TKNTedarikciListeW, SLOT(Ara()));
        QObject::connect(rbYetkiliKisiIceren, SIGNAL(clicked()), TKNTedarikciListeW, SLOT(Ara()));
        QObject::connect(rbYetkiliKisilIleBiten, SIGNAL(clicked()), TKNTedarikciListeW, SLOT(Ara()));
        QObject::connect(rbYetkiliKisiIleBaslayan, SIGNAL(clicked()), TKNTedarikciListeW, SLOT(Ara()));
        QObject::connect(rbTedarikciIceren, SIGNAL(clicked()), TKNTedarikciListeW, SLOT(Ara()));
        QObject::connect(rbTedarikciIleBiten, SIGNAL(clicked()), TKNTedarikciListeW, SLOT(Ara()));
        QObject::connect(rbTedarikciIleBaslayan, SIGNAL(clicked()), TKNTedarikciListeW, SLOT(Ara()));
        QObject::connect(leTedarikciDegeri, SIGNAL(textChanged(QString)), TKNTedarikciListeW, SLOT(Ara()));

        QMetaObject::connectSlotsByName(TKNTedarikciListeW);
    } // setupUi

    void retranslateUi(QWidget *TKNTedarikciListeW)
    {
        TKNTedarikciListeW->setWindowTitle(QCoreApplication::translate("TKNTedarikciListeW", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TKNTedarikciListeW", "Arama", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TKNTedarikciListeW", "Tedarik\303\247i Ara", nullptr));
        label->setText(QCoreApplication::translate("TKNTedarikciListeW", "De\304\237er", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("TKNTedarikciListeW", "Filtre T\303\274r\303\274", nullptr));
        rbTedarikciIleBaslayan->setText(QCoreApplication::translate("TKNTedarikciListeW", "\304\260le Ba\305\237layan", nullptr));
        rbTedarikciIleBiten->setText(QCoreApplication::translate("TKNTedarikciListeW", "\304\260le Biten", nullptr));
        rbTedarikciIceren->setText(QCoreApplication::translate("TKNTedarikciListeW", "\304\260\303\247eren", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("TKNTedarikciListeW", "Yetkili Ki\305\237i Ara", nullptr));
        label_2->setText(QCoreApplication::translate("TKNTedarikciListeW", "De\304\237er", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("TKNTedarikciListeW", "Filtre T\303\274r\303\274", nullptr));
        rbYetkiliKisiIleBaslayan->setText(QCoreApplication::translate("TKNTedarikciListeW", "\304\260le Ba\305\237layan", nullptr));
        rbYetkiliKisilIleBiten->setText(QCoreApplication::translate("TKNTedarikciListeW", "\304\260le Biten", nullptr));
        rbYetkiliKisiIceren->setText(QCoreApplication::translate("TKNTedarikciListeW", "\304\260\303\247eren", nullptr));
        pushButton->setText(QCoreApplication::translate("TKNTedarikciListeW", "Ara", nullptr));
        cbYazarkenAra->setText(QCoreApplication::translate("TKNTedarikciListeW", "Yazarken Ara", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TKNTedarikciListeW: public Ui_TKNTedarikciListeW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TKNTEDARIKCILISTEW_H
