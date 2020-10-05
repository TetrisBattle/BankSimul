#ifndef SQL_H
#define SQL_H

#include "sql_global.h"
#include "QObject"
#include "moottori.h"

class SQL_EXPORT Sql : public QObject
{
		Q_OBJECT
	public:
		void asdSql();
		
	private:
		moottori *m;
};

#endif // SQL_H
