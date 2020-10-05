#include "pinkoodi.h"

void PinKoodi::pinKoodiFunktio(int pinFromMain)
{
	objectPinKoodiMoottori = new PinKoodiMoottori;
	objectPinKoodiMoottori->pinMotor = pinFromMain;;
	
	connect(objectPinKoodiMoottori, SIGNAL(pinKoodiMoottoriSignal(bool)), this, SLOT(pinKoodiSlot(bool)));
}

void PinKoodi::close()
{
	objectPinKoodiMoottori->close();
}

void PinKoodi::pinKoodiSlot(bool tarkistus)
{
	emit pinKoodiSignal(tarkistus);
}
