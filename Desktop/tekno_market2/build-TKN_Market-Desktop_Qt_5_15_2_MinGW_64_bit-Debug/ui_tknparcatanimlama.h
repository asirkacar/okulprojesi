/********************************************************************************
** Form generated from reading UI file 'tknparcatanimlama.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TKNPARCATANIMLAMA_H
#define UI_TKNPARCATANIMLAMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TKNParcaTanimlama
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QLineEdit *parcaAdi;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TKNParcaTanimlama)
    {
        if (TKNParcaTanimlama->objectName().isEmpty())
            TKNParcaTanimlama->setObjectName(QString::fromUtf8("TKNParcaTanimlama"));
        TKNParcaTanimlama->resize(549, 414);
        verticalLayout_3 = new QVBoxLayout(TKNParcaTanimlama);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(TKNParcaTanimlama);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_2->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout_2->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(groupBox);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        verticalLayout_2->addWidget(radioButton_5);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton_6 = new QRadioButton(groupBox);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        verticalLayout->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(groupBox);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));

        verticalLayout->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(groupBox);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));

        verticalLayout->addWidget(radioButton_8);

        radioButton_9 = new QRadioButton(groupBox);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));

        verticalLayout->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(groupBox);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));

        verticalLayout->addWidget(radioButton_10);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addWidget(groupBox);

        parcaAdi = new QLineEdit(TKNParcaTanimlama);
        parcaAdi->setObjectName(QString::fromUtf8("parcaAdi"));

        verticalLayout_3->addWidget(parcaAdi);

        buttonBox = new QDialogButtonBox(TKNParcaTanimlama);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(TKNParcaTanimlama);
        QObject::connect(buttonBox, SIGNAL(accepted()), TKNParcaTanimlama, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TKNParcaTanimlama, SLOT(reject()));

        QMetaObject::connectSlotsByName(TKNParcaTanimlama);
    } // setupUi

    void retranslateUi(QDialog *TKNParcaTanimlama)
    {
        TKNParcaTanimlama->setWindowTitle(QCoreApplication::translate("TKNParcaTanimlama", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TKNParcaTanimlama", "Par\303\247a T\303\274r\303\274", nullptr));
        radioButton->setText(QCoreApplication::translate("TKNParcaTanimlama", "Anakart", nullptr));
        radioButton_2->setText(QCoreApplication::translate("TKNParcaTanimlama", "\304\260\305\237lemci", nullptr));
        radioButton_3->setText(QCoreApplication::translate("TKNParcaTanimlama", "Ekran Kart\304\261", nullptr));
        radioButton_4->setText(QCoreApplication::translate("TKNParcaTanimlama", "Ram", nullptr));
        radioButton_5->setText(QCoreApplication::translate("TKNParcaTanimlama", "Harddisk", nullptr));
        radioButton_6->setText(QCoreApplication::translate("TKNParcaTanimlama", "Kasa", nullptr));
        radioButton_7->setText(QCoreApplication::translate("TKNParcaTanimlama", "G\303\274\303\247 Kayna\304\237\304\261", nullptr));
        radioButton_8->setText(QCoreApplication::translate("TKNParcaTanimlama", "Monit\303\266r", nullptr));
        radioButton_9->setText(QCoreApplication::translate("TKNParcaTanimlama", "Klavye", nullptr));
        radioButton_10->setText(QCoreApplication::translate("TKNParcaTanimlama", "Fare", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TKNParcaTanimlama: public Ui_TKNParcaTanimlama {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TKNPARCATANIMLAMA_H
