/********************************************************************************
** Form generated from reading UI file 'numpad.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMPAD_H
#define UI_NUMPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Numpad
{
public:
    QPushButton *two;
    QPushButton *three;
    QPushButton *six;
    QPushButton *four;
    QPushButton *one;
    QPushButton *five;
    QPushButton *nine;
    QPushButton *eight;
    QPushButton *clear;
    QPushButton *zero;
    QPushButton *seven;
    QPushButton *comma;
    QPushButton *pushButton;

    void setupUi(QDialog *Numpad)
    {
        if (Numpad->objectName().isEmpty())
            Numpad->setObjectName(QString::fromUtf8("Numpad"));
        Numpad->resize(187, 233);
        two = new QPushButton(Numpad);
        two->setObjectName(QString::fromUtf8("two"));
        two->setGeometry(QRect(70, 10, 51, 41));
        three = new QPushButton(Numpad);
        three->setObjectName(QString::fromUtf8("three"));
        three->setGeometry(QRect(130, 10, 51, 41));
        six = new QPushButton(Numpad);
        six->setObjectName(QString::fromUtf8("six"));
        six->setGeometry(QRect(130, 50, 51, 41));
        four = new QPushButton(Numpad);
        four->setObjectName(QString::fromUtf8("four"));
        four->setGeometry(QRect(10, 50, 51, 41));
        one = new QPushButton(Numpad);
        one->setObjectName(QString::fromUtf8("one"));
        one->setGeometry(QRect(10, 10, 51, 41));
        five = new QPushButton(Numpad);
        five->setObjectName(QString::fromUtf8("five"));
        five->setGeometry(QRect(70, 50, 51, 41));
        nine = new QPushButton(Numpad);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setGeometry(QRect(130, 90, 51, 41));
        eight = new QPushButton(Numpad);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setGeometry(QRect(70, 90, 51, 41));
        clear = new QPushButton(Numpad);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(130, 140, 51, 41));
        zero = new QPushButton(Numpad);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setGeometry(QRect(70, 140, 51, 41));
        seven = new QPushButton(Numpad);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setGeometry(QRect(10, 90, 51, 41));
        comma = new QPushButton(Numpad);
        comma->setObjectName(QString::fromUtf8("comma"));
        comma->setGeometry(QRect(10, 140, 51, 41));
        pushButton = new QPushButton(Numpad);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 190, 80, 41));

        retranslateUi(Numpad);

        QMetaObject::connectSlotsByName(Numpad);
    } // setupUi

    void retranslateUi(QDialog *Numpad)
    {
        Numpad->setWindowTitle(QApplication::translate("Numpad", "Numpad", nullptr));
        two->setText(QApplication::translate("Numpad", "2", nullptr));
        three->setText(QApplication::translate("Numpad", "3", nullptr));
        six->setText(QApplication::translate("Numpad", "6", nullptr));
        four->setText(QApplication::translate("Numpad", "4", nullptr));
        one->setText(QApplication::translate("Numpad", "1", nullptr));
        five->setText(QApplication::translate("Numpad", "5", nullptr));
        nine->setText(QApplication::translate("Numpad", "9", nullptr));
        eight->setText(QApplication::translate("Numpad", "8", nullptr));
        clear->setText(QApplication::translate("Numpad", "CLEAR", nullptr));
        zero->setText(QApplication::translate("Numpad", "0", nullptr));
        seven->setText(QApplication::translate("Numpad", "7", nullptr));
        comma->setText(QApplication::translate("Numpad", ",", nullptr));
        pushButton->setText(QApplication::translate("Numpad", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Numpad: public Ui_Numpad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMPAD_H
