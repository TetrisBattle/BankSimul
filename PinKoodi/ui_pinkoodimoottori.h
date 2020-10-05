/********************************************************************************
** Form generated from reading UI file 'pinkoodimoottori.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINKOODIMOOTTORI_H
#define UI_PINKOODIMOOTTORI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PinKoodiMoottori
{
public:
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *nelja;
    QPushButton *yksi;
    QPushButton *seitseman;
    QPushButton *pyyhi;
    QPushButton *kaksi;
    QPushButton *viisi;
    QPushButton *kahdeksan;
    QPushButton *nolla;
    QPushButton *yhdeksan;
    QPushButton *kolme;
    QPushButton *kuusi;
    QPushButton *ok;

    void setupUi(QDialog *PinKoodiMoottori)
    {
        if (PinKoodiMoottori->objectName().isEmpty())
            PinKoodiMoottori->setObjectName(QString::fromUtf8("PinKoodiMoottori"));
        PinKoodiMoottori->resize(800, 600);
        PinKoodiMoottori->setMouseTracking(true);
        label_2 = new QLabel(PinKoodiMoottori);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(231, 137, 351, 40));
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);
        label_2->setMouseTracking(true);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(PinKoodiMoottori);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(231, 71, 353, 60));
        QFont font1;
        font1.setPointSize(30);
        label->setFont(font1);
        label->setMouseTracking(true);
        label->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(PinKoodiMoottori);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(231, 183, 351, 48));
        lineEdit->setFont(font);
        lineEdit->setMouseTracking(true);
        lineEdit->setAcceptDrops(true);
        lineEdit->setAlignment(Qt::AlignCenter);
        nelja = new QPushButton(PinKoodiMoottori);
        nelja->setObjectName(QString::fromUtf8("nelja"));
        nelja->setGeometry(QRect(233, 314, 111, 69));
        nelja->setFont(font1);
        nelja->setMouseTracking(true);
        nelja->setStyleSheet(QString::fromUtf8(""));
        yksi = new QPushButton(PinKoodiMoottori);
        yksi->setObjectName(QString::fromUtf8("yksi"));
        yksi->setGeometry(QRect(233, 239, 111, 69));
        yksi->setFont(font1);
        yksi->setCursor(QCursor(Qt::ArrowCursor));
        yksi->setMouseTracking(true);
        seitseman = new QPushButton(PinKoodiMoottori);
        seitseman->setObjectName(QString::fromUtf8("seitseman"));
        seitseman->setGeometry(QRect(233, 389, 111, 69));
        seitseman->setFont(font1);
        seitseman->setMouseTracking(true);
        pyyhi = new QPushButton(PinKoodiMoottori);
        pyyhi->setObjectName(QString::fromUtf8("pyyhi"));
        pyyhi->setGeometry(QRect(233, 464, 111, 69));
        pyyhi->setFont(font1);
        pyyhi->setMouseTracking(true);
        kaksi = new QPushButton(PinKoodiMoottori);
        kaksi->setObjectName(QString::fromUtf8("kaksi"));
        kaksi->setGeometry(QRect(350, 240, 111, 69));
        kaksi->setFont(font1);
        kaksi->setMouseTracking(true);
        viisi = new QPushButton(PinKoodiMoottori);
        viisi->setObjectName(QString::fromUtf8("viisi"));
        viisi->setGeometry(QRect(350, 315, 111, 69));
        viisi->setFont(font1);
        viisi->setMouseTracking(true);
        kahdeksan = new QPushButton(PinKoodiMoottori);
        kahdeksan->setObjectName(QString::fromUtf8("kahdeksan"));
        kahdeksan->setGeometry(QRect(350, 390, 111, 69));
        kahdeksan->setFont(font1);
        kahdeksan->setMouseTracking(true);
        nolla = new QPushButton(PinKoodiMoottori);
        nolla->setObjectName(QString::fromUtf8("nolla"));
        nolla->setGeometry(QRect(350, 465, 111, 69));
        nolla->setFont(font1);
        nolla->setMouseTracking(true);
        yhdeksan = new QPushButton(PinKoodiMoottori);
        yhdeksan->setObjectName(QString::fromUtf8("yhdeksan"));
        yhdeksan->setGeometry(QRect(471, 391, 111, 69));
        yhdeksan->setFont(font1);
        yhdeksan->setMouseTracking(true);
        kolme = new QPushButton(PinKoodiMoottori);
        kolme->setObjectName(QString::fromUtf8("kolme"));
        kolme->setGeometry(QRect(471, 241, 111, 69));
        kolme->setFont(font1);
        kolme->setMouseTracking(true);
        kuusi = new QPushButton(PinKoodiMoottori);
        kuusi->setObjectName(QString::fromUtf8("kuusi"));
        kuusi->setGeometry(QRect(471, 316, 111, 69));
        kuusi->setFont(font1);
        kuusi->setMouseTracking(true);
        ok = new QPushButton(PinKoodiMoottori);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(471, 466, 111, 69));
        ok->setFont(font1);
        ok->setMouseTracking(true);

        retranslateUi(PinKoodiMoottori);

        QMetaObject::connectSlotsByName(PinKoodiMoottori);
    } // setupUi

    void retranslateUi(QDialog *PinKoodiMoottori)
    {
        PinKoodiMoottori->setWindowTitle(QApplication::translate("PinKoodiMoottori", "BankSimul", nullptr));
        label_2->setText(QString());
        label->setText(QApplication::translate("PinKoodiMoottori", "Sy\303\266t\303\244 PIN koodi", nullptr));
        nelja->setText(QApplication::translate("PinKoodiMoottori", "4", nullptr));
        yksi->setText(QApplication::translate("PinKoodiMoottori", "1", nullptr));
        seitseman->setText(QApplication::translate("PinKoodiMoottori", "7", nullptr));
        pyyhi->setText(QApplication::translate("PinKoodiMoottori", "C", nullptr));
        kaksi->setText(QApplication::translate("PinKoodiMoottori", "2", nullptr));
        viisi->setText(QApplication::translate("PinKoodiMoottori", "5", nullptr));
        kahdeksan->setText(QApplication::translate("PinKoodiMoottori", "8", nullptr));
        nolla->setText(QApplication::translate("PinKoodiMoottori", "0", nullptr));
        yhdeksan->setText(QApplication::translate("PinKoodiMoottori", "9", nullptr));
        kolme->setText(QApplication::translate("PinKoodiMoottori", "3", nullptr));
        kuusi->setText(QApplication::translate("PinKoodiMoottori", "6", nullptr));
        ok->setText(QApplication::translate("PinKoodiMoottori", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PinKoodiMoottori: public Ui_PinKoodiMoottori {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINKOODIMOOTTORI_H
