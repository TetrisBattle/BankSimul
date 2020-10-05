#ifndef PINKOODI_H
#define PINKOODI_H

#include "PinKoodi_global.h"
#include "pinkoodimoottori.h"

class PINKOODI_EXPORT PinKoodi : public QObject
{
	Q_OBJECT
	
	public:
		void pinKoodiFunktio(int pinFromMain);
		void close();
		
	private:
		PinKoodiMoottori *objectPinKoodiMoottori;
		bool tarkistus;
		
	signals:
		void pinKoodiSignal(bool);
		
	public slots:
		void pinKoodiSlot(bool tarkistus);
};

#endif // PINKOODI_H
