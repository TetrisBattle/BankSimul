#ifndef MOOTTORI_H
#define MOOTTORI_H

#include <QObject>
#include <QtSql>
#include <QSqlDatabase>
//#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
//#include <QTableView>
#include <ctime>

class moottori : public QObject
{
		Q_OBJECT
	public:
		explicit moottori(QObject *parent = nullptr);
		void addTable();
		bool connectMySQL();
		void getValuesFromModel(QSqlTableModel *model, QString table);
		void setValuesToTable(QSqlTableModel *model);
		
	signals:
		
};

#endif // MOOTTORI_H
