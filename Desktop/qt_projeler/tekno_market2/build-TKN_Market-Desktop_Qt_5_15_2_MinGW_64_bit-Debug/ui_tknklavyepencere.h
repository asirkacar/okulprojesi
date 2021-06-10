/********************************************************************************
** Form generated from reading UI file 'tknklavyepencere.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TKNKLAVYEPENCERE_H
#define UI_TKNKLAVYEPENCERE_H

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

class Ui_TKNKlavyePencere
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
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *TKNKlavyePencere)
    {
        if (TKNKlavyePencere->objectName().isEmpty())
            TKNKlavyePencere->setObjectName(QString::fromUtf8("TKNKlavyePencere"));
        TKNKlavyePencere->resize(486, 306);
        verticalLayout_3 = new QVBoxLayout(TKNKlavyePencere);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(39);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(TKNKlavyePencere);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(TKNKlavyePencere);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(TKNKlavyePencere);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(TKNKlavyePencere);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(TKNKlavyePencere);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(33);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit = new QLineEdit(TKNKlavyePencere);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(TKNKlavyePencere);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(TKNKlavyePencere);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(TKNKlavyePencere);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(TKNKlavyePencere);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout_2->addWidget(lineEdit_5);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(TKNKlavyePencere);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        radioButton = new QRadioButton(TKNKlavyePencere);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout_2->addWidget(radioButton);

        pushButton_2 = new QPushButton(TKNKlavyePencere);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

#if QT_CONFIG(shortcut)
        label->setBuddy(lineEdit);
        label_2->setBuddy(lineEdit_2);
        label_3->setBuddy(lineEdit_3);
        label_4->setBuddy(lineEdit_4);
        label_5->setBuddy(lineEdit_5);
#endif // QT_CONFIG(shortcut)

        retranslateUi(TKNKlavyePencere);
        QObject::connect(pushButton, SIGNAL(clicked()), TKNKlavyePencere, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), TKNKlavyePencere, SLOT(reject()));

        QMetaObject::connectSlotsByName(TKNKlavyePencere);
    } // setupUi

    void retranslateUi(QDialog *TKNKlavyePencere)
    {
        TKNKlavyePencere->setWindowTitle(QCoreApplication::translate("TKNKlavyePencere", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TKNKlavyePencere", "Marka", nullptr));
        label_2->setText(QCoreApplication::translate("TKNKlavyePencere", "Model", nullptr));
        label_3->setText(QCoreApplication::translate("TKNKlavyePencere", "Klavye D\303\274zeni", nullptr));
        label_4->setText(QCoreApplication::translate("TKNKlavyePencere", "klavye Ba\304\237lant\304\261s\304\261", nullptr));
        label_5->setText(QCoreApplication::translate("TKNKlavyePencere", "Ba\304\237lant\304\261 \303\226zellikleri", nullptr));
        pushButton->setText(QCoreApplication::translate("TKNKlavyePencere", "Kaydet", nullptr));
        radioButton->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("TKNKlavyePencere", "\304\260ptal et", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TKNKlavyePencere: public Ui_TKNKlavyePencere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TKNKLAVYEPENCERE_H
