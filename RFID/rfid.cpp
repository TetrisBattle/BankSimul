#include "rfid.h"

void RFID::rfidFunktio()
{
	objectRFIDMoottori->show();
	
	connect(objectRFIDMoottori, SIGNAL(rfidMoottoriSignal(QString)), this, SLOT(rfidSlot(QString)));
}

void RFID::rfidFunktio2()
{
	objectRFIDMoottori = new RFIDMoottori;
}

void RFID::close()
{
	objectRFIDMoottori->close();
}

void RFID::rfidSlot(QString kortinNumero)
{
	emit rfidSignal(kortinNumero);
}
