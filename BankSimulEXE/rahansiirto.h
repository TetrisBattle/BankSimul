#ifndef RAHANSIIRTO_H
#define RAHANSIIRTO_H

#include <QDialog>
#include <QMessageBox>
#include <QDebug>
#include "keyboard.h"
#include "numpad.h"
#include <QDoubleValidator>

namespace Ui {
class RahanSiirto;
}

class RahanSiirto : public QDialog
{
    Q_OBJECT

public:
    explicit RahanSiirto(QWidget *parent = nullptr);
    ~RahanSiirto();
	double saldoSiirto;
	void reset();
		
protected:
	void mouseMoveEvent(QMouseEvent *);

private:
    Ui::RahanSiirto *ui;
    QMessageBox *msg;
    Keyboard *nappis;
    Numpad *numpad;


    double rahaMaara;
    bool nappisState;
    bool numState;
	QString taulu[4];

signals:
    void siirtoSignaali(double, QString, int);
	void paluuSignal();
	void timerResetSignal();

public slots:
    void kirjainVastaan(QString kirjain);
    void numeroVastaan(QString numero);
    void clearSlot();
    void clearNum();

private slots:
    void on_jatkaButton_clicked();
    void on_palaaButton_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
};

#endif // RAHANSIIRTO_H
