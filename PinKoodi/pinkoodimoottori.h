#ifndef PINKOODIMOOTTORI_H
#define PINKOODIMOOTTORI_H

#include <QDialog>
#include <QDebug>
#include <QIntValidator>
#include <qtimer.h>
#include <QMouseEvent>

namespace Ui {
class PinKoodiMoottori;
}

class PinKoodiMoottori : public QDialog
{
	Q_OBJECT
		
	public:
		explicit PinKoodiMoottori(QWidget *parent = nullptr);
		~PinKoodiMoottori();
		int pinMotor;
		
	protected:
		void mouseMoveEvent(QMouseEvent *);
		
	private slots:
		void timerActivated();
		
		void on_ok_clicked();
		
		void on_pyyhi_clicked();
		
		void on_yksi_clicked();
		
		void on_kaksi_clicked();
		
		void on_kolme_clicked();
		
		void on_nelja_clicked();
		
		void on_viisi_clicked();
		
		void on_kuusi_clicked();
		
		void on_seitseman_clicked();
		
		void on_kahdeksan_clicked();
		
		void on_yhdeksan_clicked();
		
		void on_nolla_clicked();
		
	private:
		Ui::PinKoodiMoottori *ui;
		QTimer *pinTimer;
		int pinLineEdit;
		int counter;
		
	signals:
		void pinKoodiMoottoriSignal(bool);
};

#endif // PINKOODIMOOTTORI_H
