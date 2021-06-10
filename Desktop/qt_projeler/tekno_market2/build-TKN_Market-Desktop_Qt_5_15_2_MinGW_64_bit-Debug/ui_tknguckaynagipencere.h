/********************************************************************************
** Form generated from reading UI file 'tknguckaynagipencere.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TKNGUCKAYNAGIPENCERE_H
#define UI_TKNGUCKAYNAGIPENCERE_H

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

class Ui_TKNGucKaynagiPencere
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *TKNGucKaynagiPencere)
    {
        if (TKNGucKaynagiPencere->objectName().isEmpty())
            TKNGucKaynagiPencere->setObjectName(QString::fromUtf8("TKNGucKaynagiPencere"));
        TKNGucKaynagiPencere->resize(472, 303);
        verticalLayout_3 = new QVBoxLayout(TKNGucKaynagiPencere);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(TKNGucKaynagiPencere);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(TKNGucKaynagiPencere);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(TKNGucKaynagiPencere);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(TKNGucKaynagiPencere);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(41);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit = new QLineEdit(TKNGucKaynagiPencere);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(TKNGucKaynagiPencere);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(TKNGucKaynagiPencere);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(TKNGucKaynagiPencere);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(TKNGucKaynagiPencere);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        radioButton = new QRadioButton(TKNGucKaynagiPencere);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout_2->addWidget(radioButton);

        pushButton_2 = new QPushButton(TKNGucKaynagiPencere);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

#if QT_CONFIG(shortcut)
        label->setBuddy(lineEdit);
        label_2->setBuddy(lineEdit_2);
        label_3->setBuddy(lineEdit_3);
        label_4->setBuddy(lineEdit_4);
#endif // QT_CONFIG(shortcut)

        retranslateUi(TKNGucKaynagiPencere);
        QObject::connect(pushButton, SIGNAL(clicked()), TKNGucKaynagiPencere, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), TKNGucKaynagiPencere, SLOT(reject()));

        QMetaObject::connectSlotsByName(TKNGucKaynagiPencere);
    } // setupUi

    void retranslateUi(QDialog *TKNGucKaynagiPencere)
    {
        TKNGucKaynagiPencere->setWindowTitle(QCoreApplication::translate("TKNGucKaynagiPencere", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TKNGucKaynagiPencere", "Marka", nullptr));
        label_2->setText(QCoreApplication::translate("TKNGucKaynagiPencere", "Model", nullptr));
        label_3->setText(QCoreApplication::translate("TKNGucKaynagiPencere", "G\303\274\303\247 De\304\237eri", nullptr));
        label_4->setText(QCoreApplication::translate("TKNGucKaynagiPencere", "Fan Boyutu", nullptr));
        pushButton->setText(QCoreApplication::translate("TKNGucKaynagiPencere", "Kaydet", nullptr));
        radioButton->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("TKNGucKaynagiPencere", "\304\260ptal Et", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TKNGucKaynagiPencere: public Ui_TKNGucKaynagiPencere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TKNGUCKAYNAGIPENCERE_H
