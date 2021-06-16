/********************************************************************************
** Form generated from reading UI file 'tkntedarikcipencere.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TKNTEDARIKCIPENCERE_H
#define UI_TKNTEDARIKCIPENCERE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TKNTedarikciPencere
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabTedarikciIslemleri;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *btnYeniTedarikci;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *TKNTedarikciPencere)
    {
        if (TKNTedarikciPencere->objectName().isEmpty())
            TKNTedarikciPencere->setObjectName(QString::fromUtf8("TKNTedarikciPencere"));
        TKNTedarikciPencere->resize(777, 572);
        horizontalLayout = new QHBoxLayout(TKNTedarikciPencere);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabTedarikciIslemleri = new QTabWidget(TKNTedarikciPencere);
        tabTedarikciIslemleri->setObjectName(QString::fromUtf8("tabTedarikciIslemleri"));
        tabTedarikciIslemleri->setTabPosition(QTabWidget::South);
        tabTedarikciIslemleri->setElideMode(Qt::ElideLeft);
        tabTedarikciIslemleri->setUsesScrollButtons(false);
        tabTedarikciIslemleri->setDocumentMode(true);
        tabTedarikciIslemleri->setTabsClosable(false);

        horizontalLayout->addWidget(tabTedarikciIslemleri);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(TKNTedarikciPencere);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        btnYeniTedarikci = new QPushButton(TKNTedarikciPencere);
        btnYeniTedarikci->setObjectName(QString::fromUtf8("btnYeniTedarikci"));

        verticalLayout->addWidget(btnYeniTedarikci);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(TKNTedarikciPencere);
        QObject::connect(pushButton, SIGNAL(clicked()), TKNTedarikciPencere, SLOT(accept()));

        QMetaObject::connectSlotsByName(TKNTedarikciPencere);
    } // setupUi

    void retranslateUi(QDialog *TKNTedarikciPencere)
    {
        TKNTedarikciPencere->setWindowTitle(QCoreApplication::translate("TKNTedarikciPencere", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("TKNTedarikciPencere", "Kapat", nullptr));
        btnYeniTedarikci->setText(QCoreApplication::translate("TKNTedarikciPencere", "Yeni Tedarik\303\247i", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TKNTedarikciPencere: public Ui_TKNTedarikciPencere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TKNTEDARIKCIPENCERE_H
