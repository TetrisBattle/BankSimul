#ifndef RFID_H
#define RFID_H

#include "RFID_global.h"
#include "rfidmoottori.h"

class RFID_EXPORT RFID : public QObject
{
	Q_OBJECT
		
	public:
		void rfidFunktio();
		void rfidFunktio2();
		void close();
		
	private:
		RFIDMoottori *objectRFIDMoottori;
		QString kortinNumero;
		
	signals:
		void rfidSignal(QString);
		
	public slots:
		void rfidSlot(QString kortinNumero);
};

#endif // RFID_H
