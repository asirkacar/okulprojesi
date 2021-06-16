/********************************************************************************
** Form generated from reading UI file 'tknmusteripencere.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TKNMUSTERIPENCERE_H
#define UI_TKNMUSTERIPENCERE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TKNMusteriPencere
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QPlainTextEdit *plainTextEdit;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *TKNMusteriPencere)
    {
        if (TKNMusteriPencere->objectName().isEmpty())
            TKNMusteriPencere->setObjectName(QString::fromUtf8("TKNMusteriPencere"));
        TKNMusteriPencere->resize(555, 404);
        verticalLayout_3 = new QVBoxLayout(TKNMusteriPencere);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(123);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(TKNMusteriPencere);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(TKNMusteriPencere);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(TKNMusteriPencere);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(37);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(TKNMusteriPencere);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        plainTextEdit = new QPlainTextEdit(TKNMusteriPencere);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        lineEdit_3 = new QLineEdit(TKNMusteriPencere);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(TKNMusteriPencere);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(TKNMusteriPencere);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(TKNMusteriPencere);
        QObject::connect(pushButton, SIGNAL(clicked()), TKNMusteriPencere, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), TKNMusteriPencere, SLOT(reject()));

        QMetaObject::connectSlotsByName(TKNMusteriPencere);
    } // setupUi

    void retranslateUi(QDialog *TKNMusteriPencere)
    {
        TKNMusteriPencere->setWindowTitle(QCoreApplication::translate("TKNMusteriPencere", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TKNMusteriPencere", "M\303\274\305\237teri Ad\304\261 Soyad\304\261", nullptr));
        label_2->setText(QCoreApplication::translate("TKNMusteriPencere", "M\303\274\305\237teri Adresi", nullptr));
        label_3->setText(QCoreApplication::translate("TKNMusteriPencere", "M\303\274\305\237teri Telefonu", nullptr));
        lineEdit_3->setInputMask(QCoreApplication::translate("TKNMusteriPencere", "\\0 (D99) 999 99 99", nullptr));
        pushButton->setText(QCoreApplication::translate("TKNMusteriPencere", "Kaydet", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TKNMusteriPencere", "\304\260ptal Et", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TKNMusteriPencere: public Ui_TKNMusteriPencere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TKNMUSTERIPENCERE_H
