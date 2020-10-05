#include "dllmysql.h"


/*DLLMySQL::DLLMySQL()
{



}*/

void DLLMySQL::rajapintafunktio(QString id)
{
    olioMoottori = new DLLMoottori;
    connect(olioMoottori, SIGNAL(saldoSignal(double, int, QString)), this, SLOT(saldoSlotti(double, int, QString)));
	connect(olioMoottori, SIGNAL(tiliMoottoriSignal(QString, int, int)), this, SLOT(tiliSlot(QString, int, int)));

	if (id == "0A0079E538")
		olioMoottori->tilitapahtumat("table32");
	else if (id == "0B0030522B")
		olioMoottori->tilitapahtumat("table33");
	else if (id == "0B00358EC0")
        olioMoottori->tilitapahtumat("table34");
	olioMoottori->updatePIN(id);
}

void DLLMySQL::update(int i, int j, QString tilitiedot)
{
	olioMoottori->saldo = saldo;
    olioMoottori->update(i, j, tilitiedot);
}

void DLLMySQL::update2()
{
	olioMoottori->update2();
}

void DLLMySQL::saldoSlotti(double saldo, int pin, QString tili)
{
    emit saldoSignal2(saldo, pin, tili);
}

void DLLMySQL::tiliSlot(QString array, int i, int j)
{
    emit tiliSignal(array, i, j);
}
