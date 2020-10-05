#ifndef DLLMOOTTORI_H
#define DLLMOOTTORI_H

#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QObject>
#include <QDebug>

class DLLMoottori : public QObject
{
    Q_OBJECT
public:
    explicit DLLMoottori(QObject *parent = nullptr);
    bool connectMySQL();
    void updatePIN(QString id);
	void tilitapahtumat(QString table);
    double saldo;
	QString ID;
	QString tilinumero;
    void update(int i, int j, QString tilitiedot);
	void update2();
	QString table;
	bool once;
	int rowCount = 0;
	int rowCountBeginning;
	QString array[100][6];
	QString riviTieto;

signals:
    void saldoSignal(double, int, QString);
	void tiliMoottoriSignal(QString, int, int);
private:
    int sqlpin;

};

#endif // DLLMOOTTORI_H
