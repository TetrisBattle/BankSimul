#ifndef TILITAPAHTUMAT_H
#define TILITAPAHTUMAT_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class Tilitapahtumat;
}

class Tilitapahtumat : public QDialog
{
		Q_OBJECT
		
	public:
		explicit Tilitapahtumat(QWidget *parent = nullptr);
		~Tilitapahtumat();
		void alustus();
		QString tilitiedot[100][6];
		void reset();
	
	protected:
		void mouseMoveEvent(QMouseEvent *);
		
	private slots:
		void on_seuraavaButton_clicked();
		
		void on_edellinenButton_clicked();
		
		void on_palaaButton_clicked();
		
	private:
		Ui::Tilitapahtumat *ui;
		QString txt[3];
		int sivu = 0;
		
	signals:
		void tilitapahtumatSignal();
		void timerResetSignal();
};

#endif // TILITAPAHTUMAT_H
