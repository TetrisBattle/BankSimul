#include "banksimul.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	a.setWindowIcon(QIcon("./kuvat/basi.png"));
	BankSimul objectBankSimul; // luodaan olio
	return a.exec();
}
