/********************************************************************************
** Form generated from reading UI file 'tknrampencere.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TKNRAMPENCERE_H
#define UI_TKNRAMPENCERE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TKNRamPencere
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *TKNRamPencere)
    {
        if (TKNRamPencere->objectName().isEmpty())
            TKNRamPencere->setObjectName(QString::fromUtf8("TKNRamPencere"));
        TKNRamPencere->resize(577, 299);
        TKNRamPencere->setMaximumSize(QSize(600, 350));
        verticalLayout_3 = new QVBoxLayout(TKNRamPencere);
        verticalLayout_3->setSpacing(7);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(TKNRamPencere);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(TKNRamPencere);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(TKNRamPencere);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(TKNRamPencere);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(47);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(TKNRamPencere);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(TKNRamPencere);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(TKNRamPencere);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(TKNRamPencere);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(TKNRamPencere);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(TKNRamPencere);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(TKNRamPencere);

        QMetaObject::connectSlotsByName(TKNRamPencere);
    } // setupUi

    void retranslateUi(QDialog *TKNRamPencere)
    {
        TKNRamPencere->setWindowTitle(QCoreApplication::translate("TKNRamPencere", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TKNRamPencere", "Ram Tipi", nullptr));
        label_2->setText(QCoreApplication::translate("TKNRamPencere", "Haf\304\261za Bus H\304\261z\304\261", nullptr));
        label_3->setText(QCoreApplication::translate("TKNRamPencere", "Ram Kapasitesi", nullptr));
        label_4->setText(QCoreApplication::translate("TKNRamPencere", "Gecikme S\303\274resi", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TKNRamPencere", "Kaydet", nullptr));
        pushButton->setText(QCoreApplication::translate("TKNRamPencere", "\304\260ptal Et", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TKNRamPencere: public Ui_TKNRamPencere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TKNRAMPENCERE_H
