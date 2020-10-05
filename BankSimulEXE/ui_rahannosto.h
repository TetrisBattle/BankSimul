/********************************************************************************
** Form generated from reading UI file 'rahannosto.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAHANNOSTO_H
#define UI_RAHANNOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RahanNosto
{
public:
    QPushButton *peruutaButton;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *virheLabel;
    QPushButton *kuusi_2;
    QPushButton *kolme_2;
    QPushButton *ok_2;
    QPushButton *yhdeksan_2;
    QPushButton *kaksi_2;
    QPushButton *kahdeksan_2;
    QPushButton *nolla_2;
    QPushButton *viisi_2;
    QPushButton *yksi_2;
    QPushButton *nelja_2;
    QPushButton *seitseman_2;
    QPushButton *pyyhi_2;

    void setupUi(QDialog *RahanNosto)
    {
        if (RahanNosto->objectName().isEmpty())
            RahanNosto->setObjectName(QString::fromUtf8("RahanNosto"));
        RahanNosto->resize(800, 600);
        RahanNosto->setMinimumSize(QSize(0, 0));
        RahanNosto->setMouseTracking(true);
        peruutaButton = new QPushButton(RahanNosto);
        peruutaButton->setObjectName(QString::fromUtf8("peruutaButton"));
        peruutaButton->setGeometry(QRect(211, 495, 361, 49));
        QFont font;
        font.setPointSize(20);
        peruutaButton->setFont(font);
        peruutaButton->setMouseTracking(true);
        label = new QLabel(RahanNosto);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(212, 52, 351, 40));
        label->setFont(font);
        label->setMouseTracking(true);
        label->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(RahanNosto);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(213, 135, 351, 48));
        lineEdit_2->setFont(font);
        lineEdit_2->setMouseTracking(true);
        lineEdit_2->setAcceptDrops(true);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        virheLabel = new QLabel(RahanNosto);
        virheLabel->setObjectName(QString::fromUtf8("virheLabel"));
        virheLabel->setGeometry(QRect(213, 99, 351, 30));
        QFont font1;
        font1.setPointSize(15);
        virheLabel->setFont(font1);
        virheLabel->setMouseTracking(true);
        virheLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        virheLabel->setAlignment(Qt::AlignCenter);
        kuusi_2 = new QPushButton(RahanNosto);
        kuusi_2->setObjectName(QString::fromUtf8("kuusi_2"));
        kuusi_2->setGeometry(QRect(450, 265, 111, 69));
        QFont font2;
        font2.setPointSize(30);
        kuusi_2->setFont(font2);
        kuusi_2->setMouseTracking(true);
        kolme_2 = new QPushButton(RahanNosto);
        kolme_2->setObjectName(QString::fromUtf8("kolme_2"));
        kolme_2->setGeometry(QRect(450, 190, 111, 69));
        kolme_2->setFont(font2);
        kolme_2->setMouseTracking(true);
        ok_2 = new QPushButton(RahanNosto);
        ok_2->setObjectName(QString::fromUtf8("ok_2"));
        ok_2->setGeometry(QRect(450, 415, 111, 69));
        ok_2->setFont(font2);
        ok_2->setMouseTracking(true);
        yhdeksan_2 = new QPushButton(RahanNosto);
        yhdeksan_2->setObjectName(QString::fromUtf8("yhdeksan_2"));
        yhdeksan_2->setGeometry(QRect(450, 340, 111, 69));
        yhdeksan_2->setFont(font2);
        yhdeksan_2->setMouseTracking(true);
        kaksi_2 = new QPushButton(RahanNosto);
        kaksi_2->setObjectName(QString::fromUtf8("kaksi_2"));
        kaksi_2->setGeometry(QRect(330, 190, 111, 69));
        kaksi_2->setFont(font2);
        kaksi_2->setMouseTracking(true);
        kahdeksan_2 = new QPushButton(RahanNosto);
        kahdeksan_2->setObjectName(QString::fromUtf8("kahdeksan_2"));
        kahdeksan_2->setGeometry(QRect(330, 340, 111, 69));
        kahdeksan_2->setFont(font2);
        kahdeksan_2->setMouseTracking(true);
        nolla_2 = new QPushButton(RahanNosto);
        nolla_2->setObjectName(QString::fromUtf8("nolla_2"));
        nolla_2->setGeometry(QRect(330, 415, 111, 69));
        nolla_2->setFont(font2);
        nolla_2->setMouseTracking(true);
        viisi_2 = new QPushButton(RahanNosto);
        viisi_2->setObjectName(QString::fromUtf8("viisi_2"));
        viisi_2->setGeometry(QRect(330, 265, 111, 69));
        viisi_2->setFont(font2);
        viisi_2->setMouseTracking(true);
        yksi_2 = new QPushButton(RahanNosto);
        yksi_2->setObjectName(QString::fromUtf8("yksi_2"));
        yksi_2->setGeometry(QRect(215, 191, 111, 69));
        yksi_2->setFont(font2);
        yksi_2->setCursor(QCursor(Qt::ArrowCursor));
        yksi_2->setMouseTracking(true);
        nelja_2 = new QPushButton(RahanNosto);
        nelja_2->setObjectName(QString::fromUtf8("nelja_2"));
        nelja_2->setGeometry(QRect(215, 266, 111, 69));
        nelja_2->setFont(font2);
        nelja_2->setMouseTracking(true);
        nelja_2->setStyleSheet(QString::fromUtf8(""));
        seitseman_2 = new QPushButton(RahanNosto);
        seitseman_2->setObjectName(QString::fromUtf8("seitseman_2"));
        seitseman_2->setGeometry(QRect(215, 341, 111, 69));
        seitseman_2->setFont(font2);
        seitseman_2->setMouseTracking(true);
        pyyhi_2 = new QPushButton(RahanNosto);
        pyyhi_2->setObjectName(QString::fromUtf8("pyyhi_2"));
        pyyhi_2->setGeometry(QRect(215, 416, 111, 69));
        pyyhi_2->setFont(font2);
        pyyhi_2->setMouseTracking(true);

        retranslateUi(RahanNosto);

        QMetaObject::connectSlotsByName(RahanNosto);
    } // setupUi

    void retranslateUi(QDialog *RahanNosto)
    {
        RahanNosto->setWindowTitle(QApplication::translate("RahanNosto", "Rahan Nosto", nullptr));
        peruutaButton->setText(QApplication::translate("RahanNosto", "Peruuta", nullptr));
        label->setText(QApplication::translate("RahanNosto", "Nostettava raham\303\244\303\244r\303\244", nullptr));
        virheLabel->setText(QString());
        kuusi_2->setText(QApplication::translate("RahanNosto", "6", nullptr));
        kolme_2->setText(QApplication::translate("RahanNosto", "3", nullptr));
        ok_2->setText(QApplication::translate("RahanNosto", "OK", nullptr));
        yhdeksan_2->setText(QApplication::translate("RahanNosto", "9", nullptr));
        kaksi_2->setText(QApplication::translate("RahanNosto", "2", nullptr));
        kahdeksan_2->setText(QApplication::translate("RahanNosto", "8", nullptr));
        nolla_2->setText(QApplication::translate("RahanNosto", "0", nullptr));
        viisi_2->setText(QApplication::translate("RahanNosto", "5", nullptr));
        yksi_2->setText(QApplication::translate("RahanNosto", "1", nullptr));
        nelja_2->setText(QApplication::translate("RahanNosto", "4", nullptr));
        seitseman_2->setText(QApplication::translate("RahanNosto", "7", nullptr));
        pyyhi_2->setText(QApplication::translate("RahanNosto", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RahanNosto: public Ui_RahanNosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAHANNOSTO_H
