/********************************************************************************
** Form generated from reading UI file 'tedarikciduzenleme.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEDARIKCIDUZENLEME_H
#define UI_TEDARIKCIDUZENLEME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TedarikciDuzenleme
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leTedarikciAdi;
    QLabel *label_2;
    QPlainTextEdit *pteTedarikciAdresi;
    QLabel *label_3;
    QLineEdit *leTedarikciTelefonu;
    QLabel *label_4;
    QLineEdit *leTedarikciYetkiliKisi;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnKaydet;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnIptal;

    void setupUi(QWidget *TedarikciDuzenleme)
    {
        if (TedarikciDuzenleme->objectName().isEmpty())
            TedarikciDuzenleme->setObjectName(QString::fromUtf8("TedarikciDuzenleme"));
        TedarikciDuzenleme->resize(606, 538);
        verticalLayout = new QVBoxLayout(TedarikciDuzenleme);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(TedarikciDuzenleme);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leTedarikciAdi = new QLineEdit(TedarikciDuzenleme);
        leTedarikciAdi->setObjectName(QString::fromUtf8("leTedarikciAdi"));

        gridLayout->addWidget(leTedarikciAdi, 0, 1, 1, 1);

        label_2 = new QLabel(TedarikciDuzenleme);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pteTedarikciAdresi = new QPlainTextEdit(TedarikciDuzenleme);
        pteTedarikciAdresi->setObjectName(QString::fromUtf8("pteTedarikciAdresi"));

        gridLayout->addWidget(pteTedarikciAdresi, 1, 1, 1, 1);

        label_3 = new QLabel(TedarikciDuzenleme);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        leTedarikciTelefonu = new QLineEdit(TedarikciDuzenleme);
        leTedarikciTelefonu->setObjectName(QString::fromUtf8("leTedarikciTelefonu"));

        gridLayout->addWidget(leTedarikciTelefonu, 2, 1, 1, 1);

        label_4 = new QLabel(TedarikciDuzenleme);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        leTedarikciYetkiliKisi = new QLineEdit(TedarikciDuzenleme);
        leTedarikciYetkiliKisi->setObjectName(QString::fromUtf8("leTedarikciYetkiliKisi"));

        gridLayout->addWidget(leTedarikciYetkiliKisi, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnKaydet = new QPushButton(TedarikciDuzenleme);
        btnKaydet->setObjectName(QString::fromUtf8("btnKaydet"));

        horizontalLayout->addWidget(btnKaydet);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnIptal = new QPushButton(TedarikciDuzenleme);
        btnIptal->setObjectName(QString::fromUtf8("btnIptal"));

        horizontalLayout->addWidget(btnIptal);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TedarikciDuzenleme);

        QMetaObject::connectSlotsByName(TedarikciDuzenleme);
    } // setupUi

    void retranslateUi(QWidget *TedarikciDuzenleme)
    {
        TedarikciDuzenleme->setWindowTitle(QCoreApplication::translate("TedarikciDuzenleme", "Form", nullptr));
        label->setText(QCoreApplication::translate("TedarikciDuzenleme", "Tedarik\303\247i Ad\304\261", nullptr));
        label_2->setText(QCoreApplication::translate("TedarikciDuzenleme", "Tedarik\303\247i Adresi", nullptr));
        label_3->setText(QCoreApplication::translate("TedarikciDuzenleme", "Tedarik\303\247i Telefonu", nullptr));
        leTedarikciTelefonu->setInputMask(QCoreApplication::translate("TedarikciDuzenleme", "\\0(D99) 999 99 99", nullptr));
        label_4->setText(QCoreApplication::translate("TedarikciDuzenleme", "Tedarik\303\247i Yetkili Ki\305\237isi", nullptr));
        btnKaydet->setText(QCoreApplication::translate("TedarikciDuzenleme", "Kaydet", nullptr));
        btnIptal->setText(QCoreApplication::translate("TedarikciDuzenleme", "\304\260ptal Et", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TedarikciDuzenleme: public Ui_TedarikciDuzenleme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEDARIKCIDUZENLEME_H
