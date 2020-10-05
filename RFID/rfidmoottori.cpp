#include "rfidmoottori.h"
#include "ui_rfidmoottori.h"

RFIDMoottori::RFIDMoottori(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::RFIDMoottori)
{
	ui->setupUi(this);
    ui->label_2->setText("Tervetuloa\nBankSimuliin!");
	
	// laitetaan kortinlukulaite päälle
	serial = new QSerialPort(this);
    serial->setPortName("com3");
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    // serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->setFlowControl(QSerialPort::HardwareControl);

    if (serial->open(QIODevice::ReadWrite))
    {
        //qDebug() << serial->portName();
		//qDebug() << "RFID OK!";
    }else {
		ui->label->setText("ERROR 404!");
        //qDebug() << "Onko RFID laite kiinni?";
    }
	
	connect(serial,SIGNAL(readyRead()),this,SLOT(rfidMoottoriSlot()));
}

RFIDMoottori::~RFIDMoottori()
{
	delete serial;
	serial = nullptr;
	
	delete ui;
	ui = nullptr;
}

void RFIDMoottori::reconnect()
{
	connect(serial,SIGNAL(readyRead()), 0, 0);
}

// tallennetaan kortin ID
void RFIDMoottori::rfidMoottoriSlot()
{
    char data[20];
    int bytesread;
    bytesread = serial->read(data,20);
	//qDebug() << bytesread; // 16
    data[bytesread] = '\0';
    if (bytesread>10)
    {
		//disconnect(serial,SIGNAL(readyRead()), 0, 0);
		
        for (int i=0;i<=9;i++)
        {
            cardSerialNumber = data;
        }
        cardSerialNumber.remove(0, 3);
        cardSerialNumber.chop(3);
    }
    else
        qDebug()<<"Virhe korttia luettaessa!";
	
	emit rfidMoottoriSignal(cardSerialNumber);
}
