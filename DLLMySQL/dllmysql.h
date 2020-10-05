#ifndef DLLMYSQL_H
#define DLLMYSQL_H

#include "dllmoottori.h"
#include "dllmysql_global.h"

class DLLMYSQLSHARED_EXPORT DLLMySQL : public QObject
{
    Q_OBJECT
public:
    //DLLMySQL();
    void rajapintafunktio(QString id);
    void update(int i, int j, QString tilitiedot);
	void update2();
	double saldo;
signals:
    void saldoSignal2(double saldoSql, int pinSql, QString tili);
	void tiliSignal(QString, int, int);

public slots:
    void saldoSlotti(double saldo, int pin, QString tili);
	void tiliSlot (QString array, int i, int j);


private:
    DLLMoottori *olioMoottori;
};

#endif // DLLMYSQL_H
