/********************************************************************************
** Form generated from reading UI file 'tknfarepencere.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TKNFAREPENCERE_H
#define UI_TKNFAREPENCERE_H

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

class Ui_TKNFarePencere
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *TKNFarePencere)
    {
        if (TKNFarePencere->objectName().isEmpty())
            TKNFarePencere->setObjectName(QString::fromUtf8("TKNFarePencere"));
        TKNFarePencere->resize(400, 424);
        verticalLayout_3 = new QVBoxLayout(TKNFarePencere);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(55);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(TKNFarePencere);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(TKNFarePencere);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(TKNFarePencere);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(TKNFarePencere);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(TKNFarePencere);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(54);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit = new QLineEdit(TKNFarePencere);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(TKNFarePencere);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(TKNFarePencere);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(TKNFarePencere);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(TKNFarePencere);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout_2->addWidget(lineEdit_5);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(TKNFarePencere);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        radioButton = new QRadioButton(TKNFarePencere);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout->addWidget(radioButton);

        pushButton_2 = new QPushButton(TKNFarePencere);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(lineEdit);
        label_2->setBuddy(lineEdit_2);
        label_3->setBuddy(lineEdit_3);
        label_4->setBuddy(lineEdit_4);
        label_5->setBuddy(lineEdit_5);
#endif // QT_CONFIG(shortcut)

        retranslateUi(TKNFarePencere);
        QObject::connect(pushButton, SIGNAL(clicked()), TKNFarePencere, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), TKNFarePencere, SLOT(reject()));

        QMetaObject::connectSlotsByName(TKNFarePencere);
    } // setupUi

    void retranslateUi(QDialog *TKNFarePencere)
    {
        TKNFarePencere->setWindowTitle(QCoreApplication::translate("TKNFarePencere", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TKNFarePencere", "Marka", nullptr));
        label_2->setText(QCoreApplication::translate("TKNFarePencere", "Model", nullptr));
        label_3->setText(QCoreApplication::translate("TKNFarePencere", "Fare Tipi", nullptr));
        label_4->setText(QCoreApplication::translate("TKNFarePencere", "Dpi", nullptr));
        label_5->setText(QCoreApplication::translate("TKNFarePencere", "Ba\304\237lant\304\261 \303\226zellikleri", nullptr));
        pushButton->setText(QCoreApplication::translate("TKNFarePencere", "Kaydet", nullptr));
        radioButton->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("TKNFarePencere", "\304\260ptal Et", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TKNFarePencere: public Ui_TKNFarePencere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TKNFAREPENCERE_H
