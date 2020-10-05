/********************************************************************************
** Form generated from reading UI file 'rahansiirto.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAHANSIIRTO_H
#define UI_RAHANSIIRTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RahanSiirto
{
public:
    QPushButton *palaaButton;
    QPushButton *jatkaButton;
    QLabel *label;
    QLineEdit *SiirtoEdit;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *NimiEdit;
    QLabel *viestiLabel;
    QLineEdit *viestiEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *RahanSiirto)
    {
        if (RahanSiirto->objectName().isEmpty())
            RahanSiirto->setObjectName(QString::fromUtf8("RahanSiirto"));
        RahanSiirto->resize(800, 600);
        QFont font;
        font.setPointSize(20);
        RahanSiirto->setFont(font);
        RahanSiirto->setMouseTracking(true);
        palaaButton = new QPushButton(RahanSiirto);
        palaaButton->setObjectName(QString::fromUtf8("palaaButton"));
        palaaButton->setGeometry(QRect(430, 470, 300, 100));
        palaaButton->setMouseTracking(true);
        jatkaButton = new QPushButton(RahanSiirto);
        jatkaButton->setObjectName(QString::fromUtf8("jatkaButton"));
        jatkaButton->setGeometry(QRect(50, 470, 300, 100));
        jatkaButton->setMouseTracking(true);
        label = new QLabel(RahanSiirto);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 40, 291, 70));
        label->setMouseTracking(true);
        SiirtoEdit = new QLineEdit(RahanSiirto);
        SiirtoEdit->setObjectName(QString::fromUtf8("SiirtoEdit"));
        SiirtoEdit->setGeometry(QRect(380, 40, 300, 70));
        SiirtoEdit->setMouseTracking(true);
        lineEdit = new QLineEdit(RahanSiirto);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(380, 250, 300, 70));
        lineEdit->setMouseTracking(true);
        label_3 = new QLabel(RahanSiirto);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 250, 161, 70));
        label_3->setMouseTracking(true);
        label_2 = new QLabel(RahanSiirto);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 150, 271, 70));
        label_2->setMouseTracking(true);
        NimiEdit = new QLineEdit(RahanSiirto);
        NimiEdit->setObjectName(QString::fromUtf8("NimiEdit"));
        NimiEdit->setGeometry(QRect(380, 140, 300, 70));
        NimiEdit->setMouseTracking(true);
        viestiLabel = new QLabel(RahanSiirto);
        viestiLabel->setObjectName(QString::fromUtf8("viestiLabel"));
        viestiLabel->setGeometry(QRect(280, 360, 101, 70));
        viestiLabel->setMouseTracking(true);
        viestiEdit = new QLineEdit(RahanSiirto);
        viestiEdit->setObjectName(QString::fromUtf8("viestiEdit"));
        viestiEdit->setGeometry(QRect(380, 360, 300, 70));
        viestiEdit->setMouseTracking(true);
        pushButton = new QPushButton(RahanSiirto);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(700, 40, 80, 71));
        pushButton_2 = new QPushButton(RahanSiirto);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(700, 140, 80, 71));
        pushButton_3 = new QPushButton(RahanSiirto);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(700, 250, 80, 71));
        pushButton_4 = new QPushButton(RahanSiirto);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(700, 360, 80, 71));

        retranslateUi(RahanSiirto);

        QMetaObject::connectSlotsByName(RahanSiirto);
    } // setupUi

    void retranslateUi(QDialog *RahanSiirto)
    {
        RahanSiirto->setWindowTitle(QApplication::translate("RahanSiirto", "Tilisiirto", nullptr));
        palaaButton->setText(QApplication::translate("RahanSiirto", "Peruuta", nullptr));
        jatkaButton->setText(QApplication::translate("RahanSiirto", "Jatka", nullptr));
        label->setText(QApplication::translate("RahanSiirto", "Siirrett\303\244v\303\244 raham\303\244\303\244r\303\244:", nullptr));
        SiirtoEdit->setText(QString());
        SiirtoEdit->setPlaceholderText(QApplication::translate("RahanSiirto", "00,00", nullptr));
        lineEdit->setText(QApplication::translate("RahanSiirto", "FI", nullptr));
        label_3->setText(QApplication::translate("RahanSiirto", "Tilinumero:", nullptr));
        label_2->setText(QApplication::translate("RahanSiirto", "Vastaanottajan nimi:", nullptr));
        viestiLabel->setText(QApplication::translate("RahanSiirto", "Viesti:", nullptr));
        pushButton->setText(QApplication::translate("RahanSiirto", "Num", nullptr));
        pushButton_2->setText(QApplication::translate("RahanSiirto", "Keys", nullptr));
        pushButton_3->setText(QApplication::translate("RahanSiirto", "Num", nullptr));
        pushButton_4->setText(QApplication::translate("RahanSiirto", "Keys", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RahanSiirto: public Ui_RahanSiirto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAHANSIIRTO_H
