/********************************************************************************
** Form generated from reading UI file 'BankSimul.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANKSIMUL_H
#define UI_BANKSIMUL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *tilitapahtumat;
    QPushButton *kirjauduUlos;
    QPushButton *tilisiirto;
    QPushButton *rahanNosto;
    QLabel *saldoLabel;
    QPushButton *rahanTalletus;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMouseTracking(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tilitapahtumat = new QPushButton(centralwidget);
        tilitapahtumat->setObjectName(QString::fromUtf8("tilitapahtumat"));
        tilitapahtumat->setGeometry(QRect(20, 200, 370, 150));
        QFont font;
        font.setPointSize(20);
        tilitapahtumat->setFont(font);
        tilitapahtumat->setMouseTracking(true);
        kirjauduUlos = new QPushButton(centralwidget);
        kirjauduUlos->setObjectName(QString::fromUtf8("kirjauduUlos"));
        kirjauduUlos->setGeometry(QRect(410, 30, 370, 150));
        kirjauduUlos->setSizeIncrement(QSize(0, 0));
        kirjauduUlos->setFont(font);
        kirjauduUlos->setMouseTracking(true);
        kirjauduUlos->setStyleSheet(QString::fromUtf8(""));
        tilisiirto = new QPushButton(centralwidget);
        tilisiirto->setObjectName(QString::fromUtf8("tilisiirto"));
        tilisiirto->setGeometry(QRect(20, 370, 370, 150));
        tilisiirto->setFont(font);
        tilisiirto->setMouseTracking(true);
        rahanNosto = new QPushButton(centralwidget);
        rahanNosto->setObjectName(QString::fromUtf8("rahanNosto"));
        rahanNosto->setGeometry(QRect(410, 200, 370, 150));
        rahanNosto->setFont(font);
        rahanNosto->setMouseTracking(true);
        saldoLabel = new QLabel(centralwidget);
        saldoLabel->setObjectName(QString::fromUtf8("saldoLabel"));
        saldoLabel->setGeometry(QRect(20, 30, 370, 150));
        QFont font1;
        font1.setPointSize(25);
        saldoLabel->setFont(font1);
        saldoLabel->setMouseTracking(true);
        saldoLabel->setAlignment(Qt::AlignCenter);
        rahanTalletus = new QPushButton(centralwidget);
        rahanTalletus->setObjectName(QString::fromUtf8("rahanTalletus"));
        rahanTalletus->setGeometry(QRect(410, 370, 370, 150));
        rahanTalletus->setFont(font);
        rahanTalletus->setMouseTracking(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BankSimul", nullptr));
        tilitapahtumat->setText(QApplication::translate("MainWindow", "Tilitapahtumat", nullptr));
        kirjauduUlos->setText(QApplication::translate("MainWindow", "Kirjaudu ulos", nullptr));
        tilisiirto->setText(QApplication::translate("MainWindow", "Tilisiirto", nullptr));
        rahanNosto->setText(QApplication::translate("MainWindow", "Rahan nosto", nullptr));
        saldoLabel->setText(QApplication::translate("MainWindow", "Saldo", nullptr));
        rahanTalletus->setText(QApplication::translate("MainWindow", "Rahan talletus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANKSIMUL_H
