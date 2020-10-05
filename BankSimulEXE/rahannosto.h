#ifndef RAHANNOSTO_H
#define RAHANNOSTO_H

#include <QDialog>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class RahanNosto;
}

class RahanNosto : public QDialog
{
		Q_OBJECT
		
	public:
		explicit RahanNosto(QWidget *parent = nullptr);
		~RahanNosto();
		double saldo;
		void reset();
		
	protected:
		void mouseMoveEvent(QMouseEvent *);
		
	private:
		Ui::RahanNosto *ui;
		QMessageBox *msgBox;
		QString tilitiedot;
		
	signals:
		void rahanNostoSignaali(double, QString);
		void returnSignal();
		void timerResetSignal();
	private slots:
		void on_peruutaButton_clicked();
		
		void on_ok_2_clicked();
		
		void on_pyyhi_2_clicked();
		
		void on_yksi_2_clicked();
		
		void on_kaksi_2_clicked();
		
		void on_kolme_2_clicked();
		
		void on_nelja_2_clicked();
		
		void on_viisi_2_clicked();
		
		void on_kuusi_2_clicked();
		
		void on_seitseman_2_clicked();
		
		void on_kahdeksan_2_clicked();
		
		void on_yhdeksan_2_clicked();
		
		void on_nolla_2_clicked();
};

#endif // RAHANNOSTO_H
