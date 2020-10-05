/********************************************************************************
** Form generated from reading UI file 'rahantalletus.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAHANTALLETUS_H
#define UI_RAHANTALLETUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_RahanTalletus
{
public:
    QSpinBox *seteli10;
    QSpinBox *seteli20;
    QSpinBox *seteli50;
    QPushButton *pushButton;
    QSpinBox *seteli100;
    QLabel *label;
    QPushButton *peruutaButton;

    void setupUi(QDialog *RahanTalletus)
    {
        if (RahanTalletus->objectName().isEmpty())
            RahanTalletus->setObjectName(QString::fromUtf8("RahanTalletus"));
        RahanTalletus->resize(800, 600);
        RahanTalletus->setMouseTracking(true);
        seteli10 = new QSpinBox(RahanTalletus);
        seteli10->setObjectName(QString::fromUtf8("seteli10"));
        seteli10->setGeometry(QRect(50, 30, 330, 150));
        QFont font;
        font.setPointSize(20);
        seteli10->setFont(font);
        seteli10->setMouseTracking(true);
        seteli10->setAutoFillBackground(false);
        seteli10->setStyleSheet(QString::fromUtf8("border-image: url(:/kuvat/10e.jpg);"));
        seteli20 = new QSpinBox(RahanTalletus);
        seteli20->setObjectName(QString::fromUtf8("seteli20"));
        seteli20->setGeometry(QRect(420, 30, 330, 150));
        seteli20->setFont(font);
        seteli20->setMouseTracking(true);
        seteli20->setStyleSheet(QString::fromUtf8("border-image: url(:/kuvat/20e.jpg)"));
        seteli50 = new QSpinBox(RahanTalletus);
        seteli50->setObjectName(QString::fromUtf8("seteli50"));
        seteli50->setGeometry(QRect(50, 220, 330, 151));
        seteli50->setFont(font);
        seteli50->setMouseTracking(true);
        seteli50->setStyleSheet(QString::fromUtf8("border-image: url(:/kuvat/50e.png);"));
        pushButton = new QPushButton(RahanTalletus);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 410, 150, 150));
        pushButton->setFont(font);
        pushButton->setMouseTracking(true);
        seteli100 = new QSpinBox(RahanTalletus);
        seteli100->setObjectName(QString::fromUtf8("seteli100"));
        seteli100->setGeometry(QRect(420, 220, 330, 150));
        seteli100->setFont(font);
        seteli100->setMouseTracking(true);
        seteli100->setStyleSheet(QString::fromUtf8("border-image: url(:/kuvat/100e.png);"));
        label = new QLabel(RahanTalletus);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(450, 410, 300, 150));
        QFont font1;
        font1.setPointSize(30);
        label->setFont(font1);
        label->setMouseTracking(true);
        label->setAlignment(Qt::AlignCenter);
        peruutaButton = new QPushButton(RahanTalletus);
        peruutaButton->setObjectName(QString::fromUtf8("peruutaButton"));
        peruutaButton->setGeometry(QRect(200, 410, 150, 150));
        peruutaButton->setFont(font);
        peruutaButton->setMouseTracking(true);

        retranslateUi(RahanTalletus);

        QMetaObject::connectSlotsByName(RahanTalletus);
    } // setupUi

    void retranslateUi(QDialog *RahanTalletus)
    {
        RahanTalletus->setWindowTitle(QApplication::translate("RahanTalletus", "Rahan talletus", nullptr));
        pushButton->setText(QApplication::translate("RahanTalletus", "Talleta", nullptr));
        label->setText(QApplication::translate("RahanTalletus", "0 \342\202\254", nullptr));
        peruutaButton->setText(QApplication::translate("RahanTalletus", "Peruuta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RahanTalletus: public Ui_RahanTalletus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAHANTALLETUS_H
