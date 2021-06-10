/********************************************************************************
** Form generated from reading UI file 'tknharddiskpencere.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TKNHARDDISKPENCERE_H
#define UI_TKNHARDDISKPENCERE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TKNHarddiskPencere
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *TKNHarddiskPencere)
    {
        if (TKNHarddiskPencere->objectName().isEmpty())
            TKNHarddiskPencere->setObjectName(QString::fromUtf8("TKNHarddiskPencere"));
        TKNHarddiskPencere->resize(630, 458);
        verticalLayout_3 = new QVBoxLayout(TKNHarddiskPencere);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(TKNHarddiskPencere);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(TKNHarddiskPencere);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(TKNHarddiskPencere);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(TKNHarddiskPencere);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(TKNHarddiskPencere);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(TKNHarddiskPencere);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(51);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit = new QLineEdit(TKNHarddiskPencere);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(TKNHarddiskPencere);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(TKNHarddiskPencere);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(TKNHarddiskPencere);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(TKNHarddiskPencere);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout_2->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(TKNHarddiskPencere);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        verticalLayout_2->addWidget(lineEdit_6);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(TKNHarddiskPencere);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        radioButton = new QRadioButton(TKNHarddiskPencere);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout_2->addWidget(radioButton);

        pushButton_2 = new QPushButton(TKNHarddiskPencere);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

#if QT_CONFIG(shortcut)
        label->setBuddy(lineEdit);
        label_2->setBuddy(lineEdit_2);
        label_3->setBuddy(lineEdit_3);
        label_4->setBuddy(lineEdit_4);
        label_5->setBuddy(lineEdit_5);
        label_6->setBuddy(lineEdit_6);
#endif // QT_CONFIG(shortcut)

        retranslateUi(TKNHarddiskPencere);
        QObject::connect(pushButton, SIGNAL(clicked()), TKNHarddiskPencere, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), TKNHarddiskPencere, SLOT(reject()));

        QMetaObject::connectSlotsByName(TKNHarddiskPencere);
    } // setupUi

    void retranslateUi(QDialog *TKNHarddiskPencere)
    {
        TKNHarddiskPencere->setWindowTitle(QCoreApplication::translate("TKNHarddiskPencere", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TKNHarddiskPencere", "Marka", nullptr));
        label_2->setText(QCoreApplication::translate("TKNHarddiskPencere", "Model", nullptr));
        label_3->setText(QCoreApplication::translate("TKNHarddiskPencere", "Disk Kapasitesi", nullptr));
        label_4->setText(QCoreApplication::translate("TKNHarddiskPencere", "D\303\266n\303\274\305\237 H\304\261z\304\261", nullptr));
        label_5->setText(QCoreApplication::translate("TKNHarddiskPencere", "\303\226n Bellek", nullptr));
        label_6->setText(QCoreApplication::translate("TKNHarddiskPencere", "Boyut", nullptr));
        pushButton->setText(QCoreApplication::translate("TKNHarddiskPencere", "Kaydet", nullptr));
        radioButton->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("TKNHarddiskPencere", "\304\260ptal Et", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TKNHarddiskPencere: public Ui_TKNHarddiskPencere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TKNHARDDISKPENCERE_H
