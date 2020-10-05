/********************************************************************************
** Form generated from reading UI file 'rfidmoottori.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RFIDMOOTTORI_H
#define UI_RFIDMOOTTORI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_RFIDMoottori
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *RFIDMoottori)
    {
        if (RFIDMoottori->objectName().isEmpty())
            RFIDMoottori->setObjectName(QString::fromUtf8("RFIDMoottori"));
        RFIDMoottori->resize(800, 600);
        label = new QLabel(RFIDMoottori);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 170, 801, 431));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label->setMouseTracking(false);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(RFIDMoottori);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 801, 291));
        QFont font1;
        font1.setPointSize(50);
        label_2->setFont(font1);
        label_2->setMouseTracking(false);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(RFIDMoottori);

        QMetaObject::connectSlotsByName(RFIDMoottori);
    } // setupUi

    void retranslateUi(QDialog *RFIDMoottori)
    {
        RFIDMoottori->setWindowTitle(QApplication::translate("RFIDMoottori", "BankSimul", nullptr));
        label->setText(QApplication::translate("RFIDMoottori", "Ole hyv\303\244 ja sy\303\266t\303\244 kortti", nullptr));
        label_2->setText(QApplication::translate("RFIDMoottori", "BankSimul", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RFIDMoottori: public Ui_RFIDMoottori {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RFIDMOOTTORI_H
