#ifndef BANKSIMUL_H
#define BANKSIMUL_H

#include <QDebug>
#include <qtimer.h>
#include <QMainWindow>
#include "..\PinKoodi\pinkoodi.h"
#include "..\RFID\rfid.h"
#include "rahantalletus.h"
#include "rahansiirto.h"
#include "rahannosto.h"
#include "tilitapahtumat.h"
#include <QMouseEvent>
#include "..\DLLMySQL\dllmysql.h"
#include "QDate"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class BankSimul : public QMainWindow
{
	Q_OBJECT
		
	public:
		BankSimul(QWidget *parent = nullptr);
		~BankSimul();
		void kirjauduUlos();
		void update();
		
	protected:
		void mouseMoveEvent(QMouseEvent *);
		
	private:
		QString id;
		QString tilinumero;
		int pin;
		double saldo;
		short status = 0;
		QString taulu[4];
		int counter = 0;
		int tietojaAlussa;
		int tietojaLopussa;
		
		Ui::MainWindow *ui;
		RFID *objectRFID;
		PinKoodi *objectPinKoodi;
		QTimer *timer;
		QDate *date;
		
        RahanTalletus *objectRahanTalletus;
        RahanSiirto *objectRahanSiirto;
		RahanNosto *objectRahanNosto;
		DLLMySQL *objectDLLMySQL;
		Tilitapahtumat *objectTilitapahtumat;
		
	public slots:
        void siirtoSlotti(double SALDO, QString taulukko, int j);
        void TalletusSlotti(double saldoTalletus);
		void rahanNostoSlot(double SALDO, QString tilitiedot);
		
		void dllRfidSlot(QString ID);
		void dllPinKoodiSlot(bool PIN);
		void timerResetSlot();
		void timerActivated();
		void saldoSlotti2(double saldo, int pin, QString tili);
		void arraySlot (QString array, int i, int j);
		void returnSlot();
		
	private slots:
		void on_rahanTalletus_clicked();
		void on_tilisiirto_clicked();
		void on_kirjauduUlos_clicked();
		void on_rahanNosto_clicked();
		void on_tilitapahtumat_clicked();
		
	signals:
		void timerResetSignal();
};
#endif // BANKSIMUL_H
