/********************************************************************************
** Form generated from reading UI file 'tilitapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILITAPAHTUMAT_H
#define UI_TILITAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Tilitapahtumat
{
public:
    QPushButton *edellinenButton;
    QPushButton *seuraavaButton;
    QPushButton *palaaButton;
    QLabel *viiva;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Tilitapahtumat)
    {
        if (Tilitapahtumat->objectName().isEmpty())
            Tilitapahtumat->setObjectName(QString::fromUtf8("Tilitapahtumat"));
        Tilitapahtumat->resize(800, 600);
        Tilitapahtumat->setMouseTracking(true);
        edellinenButton = new QPushButton(Tilitapahtumat);
        edellinenButton->setObjectName(QString::fromUtf8("edellinenButton"));
        edellinenButton->setGeometry(QRect(0, 200, 100, 200));
        edellinenButton->setMouseTracking(true);
        seuraavaButton = new QPushButton(Tilitapahtumat);
        seuraavaButton->setObjectName(QString::fromUtf8("seuraavaButton"));
        seuraavaButton->setGeometry(QRect(700, 200, 100, 200));
        seuraavaButton->setMouseTracking(true);
        palaaButton = new QPushButton(Tilitapahtumat);
        palaaButton->setObjectName(QString::fromUtf8("palaaButton"));
        palaaButton->setGeometry(QRect(260, 490, 300, 100));
        palaaButton->setMouseTracking(true);
        viiva = new QLabel(Tilitapahtumat);
        viiva->setObjectName(QString::fromUtf8("viiva"));
        viiva->setGeometry(QRect(60, 10, 741, 71));
        viiva->setMouseTracking(true);
        label = new QLabel(Tilitapahtumat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(124, 21, 161, 450));
        QFont font;
        font.setPointSize(9);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font);
        label->setMouseTracking(true);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setMargin(0);
        label->setIndent(-1);
        label_2 = new QLabel(Tilitapahtumat);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(301, 21, 271, 450));
        label_2->setFont(font);
        label_2->setMouseTracking(true);
        label_2->setTextFormat(Qt::AutoText);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setMargin(0);
        label_2->setIndent(-1);
        label_3 = new QLabel(Tilitapahtumat);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(590, 21, 91, 450));
        label_3->setFont(font);
        label_3->setMouseTracking(true);
        label_3->setTextFormat(Qt::AutoText);
        label_3->setScaledContents(false);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setMargin(0);
        label_3->setIndent(-1);

        retranslateUi(Tilitapahtumat);

        QMetaObject::connectSlotsByName(Tilitapahtumat);
    } // setupUi

    void retranslateUi(QDialog *Tilitapahtumat)
    {
        Tilitapahtumat->setWindowTitle(QApplication::translate("Tilitapahtumat", "Tilitapahtumat", nullptr));
        edellinenButton->setText(QApplication::translate("Tilitapahtumat", "Edellinen", nullptr));
        seuraavaButton->setText(QApplication::translate("Tilitapahtumat", "Seuraava", nullptr));
        palaaButton->setText(QApplication::translate("Tilitapahtumat", "Palaa", nullptr));
        viiva->setText(QApplication::translate("Tilitapahtumat", "                  __________________________________________________________________________________________________________", nullptr));
        label->setText(QApplication::translate("Tilitapahtumat", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("Tilitapahtumat", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("Tilitapahtumat", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tilitapahtumat: public Ui_Tilitapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILITAPAHTUMAT_H
