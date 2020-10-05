#ifndef RFIDMOOTTORI_H
#define RFIDMOOTTORI_H

#include <QDialog>
#include <QSerialPort>
#include <QDebug>

namespace Ui {
class RFIDMoottori;
}

class RFIDMoottori : public QDialog
{
	Q_OBJECT
		
	public:
		explicit RFIDMoottori(QWidget *parent = nullptr);
		~RFIDMoottori();
		QString cardSerialNumber;
		void reconnect();
		
	private:
		Ui::RFIDMoottori *ui;
		QSerialPort *serial;
		
	signals:
		void rfidMoottoriSignal(QString);
		
	public slots:
		void rfidMoottoriSlot();
};

#endif // RFIDMOOTTORI_H
