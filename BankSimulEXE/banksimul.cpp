#include "banksimul.h"
#include "ui_BankSimul.h"

BankSimul::BankSimul(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	//this->resize(800, 600);
	//this->setMouseTracking(true);
	ui->centralwidget->setMouseTracking(true);
	
	qDebug() << "START";
	
	// luodaan oliot jotta voidaan käyttää niiden funktioita
	objectRFID = new RFID;
	objectPinKoodi = new PinKoodi;
	objectDLLMySQL = new DLLMySQL;
	timer = new QTimer(this);
	date = new QDate();
	
	objectRahanTalletus = new RahanTalletus;
	objectRahanSiirto = new RahanSiirto;
	objectRahanNosto = new RahanNosto;
	objectTilitapahtumat = new Tilitapahtumat;
	
	// connectataan muiden luokkien signaalit tämän luokan slottiin
	connect(objectRFID, SIGNAL(rfidSignal(QString)), this, SLOT(dllRfidSlot(QString)));
	connect(objectPinKoodi, SIGNAL(pinKoodiSignal(bool)), this, SLOT(dllPinKoodiSlot(bool)));
	connect(objectRahanSiirto, SIGNAL(siirtoSignaali(double, QString, int)), this, SLOT(siirtoSlotti(double, QString, int)));
	connect(objectRahanTalletus, SIGNAL(TalletusSignaali(double)), this, SLOT(TalletusSlotti(double)));
	connect(objectRahanNosto, SIGNAL(rahanNostoSignaali(double, QString)), this, SLOT(rahanNostoSlot(double, QString)));
	connect(objectDLLMySQL, SIGNAL(saldoSignal2(double, int, QString)), this, SLOT(saldoSlotti2(double, int, QString)));
	connect(objectDLLMySQL, SIGNAL(tiliSignal(QString, int, int)), this, SLOT(arraySlot(QString, int, int)));
	
	connect(objectRahanNosto, SIGNAL(returnSignal()), this, SLOT(returnSlot()));
	connect(objectRahanSiirto, SIGNAL(paluuSignal()), this, SLOT(returnSlot()));
	connect(objectRahanTalletus, SIGNAL(returnSignal()), this, SLOT(returnSlot()));
	connect(objectTilitapahtumat, SIGNAL(tilitapahtumatSignal()), this, SLOT(returnSlot()));
	
	// timer
	connect(this, SIGNAL(timerResetSignal()), this, SLOT(timerResetSlot()));
	connect(objectRahanSiirto, SIGNAL(timerResetSignal()), this, SLOT(timerResetSlot()));
	connect(objectRahanTalletus, SIGNAL(timerResetSignal()), this, SLOT(timerResetSlot()));
	connect(objectRahanNosto, SIGNAL(timerResetSignal()), this, SLOT(timerResetSlot()));
	connect(objectTilitapahtumat, SIGNAL(timerResetSignal()), this, SLOT(timerResetSlot()));
	connect(timer, SIGNAL(timeout()), this, SLOT(timerActivated()));
	
	// ohjelman käynnistys
    objectRFID->rfidFunktio2();
    objectRFID->rfidFunktio();
	
    //id = "0A0079E538";
	//objectDLLMySQL->rajapintafunktio(id);
	//objectPinKoodi->pinKoodiFunktio(1234);
    //this->show(); // menu valikko
}

// olioiden tuhoaminen
BankSimul::~BankSimul()
{
	update();
	
	delete objectRFID;
	objectRFID = nullptr;
	delete objectPinKoodi;
	objectPinKoodi = nullptr;
	delete objectRahanSiirto;
	objectRahanSiirto = nullptr;
	delete objectRahanTalletus;
	objectRahanTalletus = nullptr;
	delete objectRahanNosto;
	objectRahanNosto = nullptr;
	delete objectDLLMySQL;
	objectDLLMySQL = nullptr;
	delete objectTilitapahtumat;
	objectTilitapahtumat = nullptr;
	
	delete timer;
	timer = nullptr;
	delete date;
	date = nullptr;
	
	
	delete ui;
	ui = nullptr;
	
	qDebug() << "THE END";
}

//-------------------------- FUNKTIOT ALKAA TÄSTÄ -------------------------------//

// hiiren liikkuttelu resettää log out timerin
void BankSimul::mouseMoveEvent(QMouseEvent *)
{
	emit timerResetSignal();
}

void BankSimul::timerResetSlot()
{
	timer->start(30000);
}

void BankSimul::timerActivated()
{
    qDebug() << "30sec AFK";
    kirjauduUlos();
    timer->stop();
}

// sulkee nykyisen ikkunan ja aukaisee kortinlukuikkunan
void BankSimul::kirjauduUlos()
{
	if (status == 1) objectPinKoodi->close();
	else if (status == 2) this->close();
	else if (status == 3) {
		objectRahanNosto->close();
		objectRahanNosto->reset();
	}
	else if (status == 4) {
		objectRahanSiirto->close();
		objectRahanSiirto->reset();
	}
	else if (status == 5) {
		objectRahanTalletus->close();
		objectRahanTalletus->reset();
	}
	else if (status == 6) {
		objectTilitapahtumat->close();
		objectTilitapahtumat->reset();
	}
	else qDebug() << "status not identified!";
	
	timer->stop();
	update();
	
	status = 0;
	objectRFID->rfidFunktio();
}

void BankSimul::update(){
	objectDLLMySQL->saldo = saldo;
	
	counter=0;
	// lasketaan tilitapahtumien määrä
	while (objectTilitapahtumat->tilitiedot[counter][0].size() >= 1){
		counter++;
	}
	
	// päivitetään tiedot tietokantaan
    for (int i=0; i<counter; i++) {
        for (int j = 0; j < 6; j++) {
            objectDLLMySQL->update(i, j, objectTilitapahtumat->tilitiedot[i][j]);
        }
    }
	objectDLLMySQL->update2();
}

// Slotit ominaisuuksille jotta päästään takaisin päänäkymään
void BankSimul::siirtoSlotti(double SALDO, QString taulukko, int j)
{
	status = 2;
	taulu[j] = taulukko;
	
	if (j == 3){
		int i = 0;
		while (true){
			if (objectTilitapahtumat->tilitiedot[i][0].size() <= 1){
				for (; i>0; i--){
					objectTilitapahtumat->tilitiedot[i][0] = objectTilitapahtumat->tilitiedot[i-1][0];
					objectTilitapahtumat->tilitiedot[i][1] = objectTilitapahtumat->tilitiedot[i-1][1];
					objectTilitapahtumat->tilitiedot[i][2] = objectTilitapahtumat->tilitiedot[i-1][2];
					objectTilitapahtumat->tilitiedot[i][3] = objectTilitapahtumat->tilitiedot[i-1][3];
					objectTilitapahtumat->tilitiedot[i][4] = objectTilitapahtumat->tilitiedot[i-1][4];
					objectTilitapahtumat->tilitiedot[i][5] = objectTilitapahtumat->tilitiedot[i-1][5];
				}
				objectTilitapahtumat->tilitiedot[i][0] = taulu[0];
				objectTilitapahtumat->tilitiedot[i][1] = date->currentDate().toString("dd.MM.yyyy");
				objectTilitapahtumat->tilitiedot[i][2] = taulu[1];
				objectTilitapahtumat->tilitiedot[i][3] = "";
				objectTilitapahtumat->tilitiedot[i][4] = taulu[2];
				objectTilitapahtumat->tilitiedot[i][5] = "-"+taulu[3]+"e";
				break;
			}
			else {
				i++;
			}
		}
	}
	
	saldo = SALDO;
	ui->saldoLabel->setText(QString::number(saldo) + QString(" €"));
	this->show();
	objectRahanSiirto->close();
}

void BankSimul::TalletusSlotti(double saldoTalletus)
{
	status = 2;
	QString saldoMuutos = QString::number(saldoTalletus-saldo);
	
	int i = 0;
	while (true){
		if (objectTilitapahtumat->tilitiedot[i][0].size() <= 1){
		   for (; i>0; i--){
		
			   objectTilitapahtumat->tilitiedot[i][0] = objectTilitapahtumat->tilitiedot[i-1][0];
			   objectTilitapahtumat->tilitiedot[i][1] = objectTilitapahtumat->tilitiedot[i-1][1];
			   objectTilitapahtumat->tilitiedot[i][2] = objectTilitapahtumat->tilitiedot[i-1][2];
			   objectTilitapahtumat->tilitiedot[i][3] = objectTilitapahtumat->tilitiedot[i-1][3];
			   objectTilitapahtumat->tilitiedot[i][4] = objectTilitapahtumat->tilitiedot[i-1][4];
			   objectTilitapahtumat->tilitiedot[i][5] = objectTilitapahtumat->tilitiedot[i-1][5];
		   }
		   objectTilitapahtumat->tilitiedot[i][0] = "BankSimul";
		   objectTilitapahtumat->tilitiedot[i][1] = date->currentDate().toString("dd.MM.yyyy");
		   objectTilitapahtumat->tilitiedot[i][2] = tilinumero;
		   objectTilitapahtumat->tilitiedot[i][3] = "";
		   objectTilitapahtumat->tilitiedot[i][4] = "Rahan talletus";
		   objectTilitapahtumat->tilitiedot[i][5] = "+"+saldoMuutos+"e";
		   break;
		}
		else {
		   i++;
		   //qDebug() << i;
		}
	}
	   
	saldo = saldoTalletus;
	ui->saldoLabel->setText(QString::number(saldo) + QString(" €"));
	this->show();
	objectRahanTalletus->close();
}

void BankSimul::rahanNostoSlot(double SALDO, QString tilitiedot)
{
	status = 2;
	int i = 0;
	while (true){
		if (objectTilitapahtumat->tilitiedot[i][0].size() <= 1){
			for (; i>0; i--){
				objectTilitapahtumat->tilitiedot[i][0] = objectTilitapahtumat->tilitiedot[i-1][0];
				objectTilitapahtumat->tilitiedot[i][1] = objectTilitapahtumat->tilitiedot[i-1][1];
				objectTilitapahtumat->tilitiedot[i][2] = objectTilitapahtumat->tilitiedot[i-1][2];
				objectTilitapahtumat->tilitiedot[i][3] = objectTilitapahtumat->tilitiedot[i-1][3];
				objectTilitapahtumat->tilitiedot[i][4] = objectTilitapahtumat->tilitiedot[i-1][4];
				objectTilitapahtumat->tilitiedot[i][5] = objectTilitapahtumat->tilitiedot[i-1][5];
			}
			objectTilitapahtumat->tilitiedot[i][0] = "BankSimul";
			objectTilitapahtumat->tilitiedot[i][1] = date->currentDate().toString("dd.MM.yyyy");
			objectTilitapahtumat->tilitiedot[i][2] = tilinumero;
			objectTilitapahtumat->tilitiedot[i][3] = "";
			objectTilitapahtumat->tilitiedot[i][4] = "Rahan nosto";
			objectTilitapahtumat->tilitiedot[i][5] = "-"+tilitiedot+"e";
			break;
		}
		else {
			i++;
		}
	}
	
	saldo = SALDO;
	ui->saldoLabel->setText(QString::number(saldo) + QString(" €"));
	this->show();
	objectRahanNosto->close();
}

void BankSimul::returnSlot(){
	//qDebug() << "status: "<<status;
	this->show();
	if (status == 3) objectRahanNosto->close();
	else if (status == 4) objectRahanSiirto->close();
	else if (status == 5) objectRahanTalletus->close();
	else if (status == 6) objectTilitapahtumat->close();
	
	status = 2;
}

//-------------------------- DLL SLOTIT ALKAA TÄSTÄ -------------------------------//

// kortti on syötetty
// aukaistaan pinKoodi-ikkuna
void BankSimul::dllRfidSlot(QString ID)
{
	if (status == 0){
		status = 1;
		id = ID;
		// sql search pin by id
		//pin = sqlPin
		qDebug() << "ID =" << ID;
		//qDebug() << "PIN =" << PIN;
		
		objectDLLMySQL->rajapintafunktio(id);
	}
}

// oikea pin koodi on annettu
// aukaistaan menu valikko
void BankSimul::dllPinKoodiSlot(bool PIN)
{
	if (!PIN) kirjauduUlos();
	else {
		status = 2;
		this->show();
		objectPinKoodi->close();
		timer->start(30000);
	}
}

void BankSimul::saldoSlotti2(double saldoSql, int pinSql, QString tili)
{
	saldo = saldoSql;
	pin = pinSql;
	tilinumero = tili;
	
	ui->saldoLabel->setText(QString::number(saldo) + QString(" €"));
	
	objectPinKoodi->pinKoodiFunktio(pin);
	objectRFID->close();
}

void BankSimul::arraySlot(QString array, int i, int j){
	objectTilitapahtumat->tilitiedot[i][j] = array;
}

// ---------------------Nappien toiminnallisuudet löytyvät tästä----------------------------//
void BankSimul::on_kirjauduUlos_clicked()
{
    kirjauduUlos();
}

void BankSimul::on_rahanTalletus_clicked()
{
	status = 5;
	objectRahanTalletus->saldoTalletus = saldo;
    objectRahanTalletus->show();
    this->close();
}

void BankSimul::on_tilisiirto_clicked()
{
	status = 4;
	objectRahanSiirto->saldoSiirto = saldo;
    objectRahanSiirto->show();
    this->close();
}

void BankSimul::on_rahanNosto_clicked()
{
	status = 3;
	objectRahanNosto->saldo = saldo;
    objectRahanNosto->show();
	this->close();
}

void BankSimul::on_tilitapahtumat_clicked()
{
	status = 6;
	objectTilitapahtumat->alustus();
    objectTilitapahtumat->show();
	this->close();
}
