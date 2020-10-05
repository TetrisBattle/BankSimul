#ifndef MYSQL_H
#define MYSQL_H

#include "dllmoottori.h"

DLLMoottori::DLLMoottori(QObject *parent) : QObject(parent)
{
    connectMySQL();
}

void DLLMoottori::updatePIN(QString id) {
	ID = id;
    QSqlTableModel model;
    model.setTable("kortti");
    model.select();

    if (id == "0A0079E538") {
		table = "table32";
        sqlpin = model.data(model.index(0,1)).toInt();
        saldo = model.data(model.index(0,2)).toDouble();
		tilinumero = "FI92 8566 0159 2140 09";
    }
    else if (id == "0B0030522B") {
		table = "table33";
        sqlpin = model.data(model.index(1,1)).toInt();
        saldo = model.data(model.index(1,2)).toDouble();
		tilinumero = "FI92 8566 0159 2140 10";
    }
    else if (id == "0B00358EC0") {
		table = "table34";
        sqlpin = model.data(model.index(2,1)).toInt();
        saldo = model.data(model.index(2,2)).toDouble();
		tilinumero = "FI92 8566 0159 2140 11";
    }
    else {
        qDebug() << "väärä kortti bro";
        sqlpin = 0;
    }

	emit saldoSignal(saldo, sqlpin, tilinumero);
}

void DLLMoottori::tilitapahtumat(QString table){
	QSqlTableModel model;
	model.setTable(table);
    model.select();
	
	rowCountBeginning = model.rowCount();
	
	for (int i=0; i<model.rowCount(); i++){
		for (int j=0; j<model.columnCount(); j++){
			 array[i][j] = model.data(model.index(i,j)).toString();
			 //qDebug() << i << " " << array[i][j];
			 emit tiliMoottoriSignal(array[i][j], i, j);
		}
    }
}

void DLLMoottori::update(int i, int j, QString tilitiedot)
{
	QSqlTableModel model;
	
	if (once){
		model.setTable("kortti");
		model.select();
		
		if (ID == "0A0079E538") {
			model.setData(model.index(0, 2), saldo);
		}
		else if (ID == "0B0030522B") {
			model.setData(model.index(1, 2), saldo);
		}
		else if (ID == "0B00358EC0") {
			model.setData(model.index(2, 2), saldo);
		}
		model.submitAll();
		once = false;
	}
	
	array[i][j] = tilitiedot;
	rowCount++;
	
	/*model.setTable(table);
	model.select();
	//qDebug() << i<<" "<<j<<" "<<tilitiedot; // toimii
	
	if (i != newRow){
		qDebug() << "new row";
		newRow = i;
		//model.insertRows(newRow,1);
		model.insertRow(newRow);
	}
	
	model.setData(model.index(i, j), tilitiedot);
	if (j == 5)
		model.submitAll();
	//qDebug() << model.data(model.index(i, j)).toString(); // kussee*/
}

void DLLMoottori::update2()
{
	rowCount /= 6;
	QSqlTableModel model;
	model.setTable(table);
	model.select();
	
	//qDebug() << rowCount;
	//qDebug() << rowCountBeginning;
	
	//add all the new rows
	for (int i=0; i<rowCount; i++) {
		if (i >= rowCountBeginning){
			//qDebug() << "new row";
			model.insertRow(0);
			
			model.setData(model.index(0,0), array[i][0]);
			model.setData(model.index(0,1), array[i][1]);
			model.setData(model.index(0,2), array[i][2]);
			model.setData(model.index(0,3), array[i][3]);
			model.setData(model.index(0,4), array[i][4]);
			model.setData(model.index(0,5), array[i][5]);
			model.submitAll();
		}
		else{
			model.setData(model.index(i,0), array[i][0]);
			model.setData(model.index(i,1), array[i][1]);
			model.setData(model.index(i,2), array[i][2]);
			model.setData(model.index(i,3), array[i][3]);
			model.setData(model.index(i,4), array[i][4]);
			model.setData(model.index(i,5), array[i][5]);
			model.submitAll();
		}
	}
}

bool DLLMoottori::connectMySQL(){
	once = true;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("mysli.oamk.fi");
    db.setDatabaseName("opisk_t9ngtr00");
    db.setUserName("t9ngtr00");
    db.setPassword("p8NxpSMuB8ETeqN4");

    if (db.open()) {
        qDebug() << "Connected to the database!";
        return true;
    }
    else{
        qDebug() << "Connection to the database failed!!";
        return false;
    }
}
#endif // MYSQL_H


