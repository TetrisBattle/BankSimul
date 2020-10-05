#include "rahansiirto.h"
#include "ui_rahansiirto.h"

RahanSiirto::RahanSiirto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RahanSiirto)
{
    ui->setupUi(this);
	msg = new QMessageBox(this);
    nappis = new Keyboard;
    numpad = new Numpad;
	
	QDoubleValidator *Validate = new QDoubleValidator(0,100000,2,this);
	Validate->setLocale(QLocale::German);
	
	ui->lineEdit->setMaxLength(18);
	ui->SiirtoEdit->setValidator(Validate);
	ui->viestiEdit->setMaxLength(50);

    //connectataan näppäimistöt
    connect(nappis, SIGNAL(nappisSignal(QString)), this, SLOT(kirjainVastaan(QString)));
    connect(nappis, SIGNAL(clearSignal()), this, SLOT(clearSlot()));
    connect(numpad, SIGNAL(numeroSignal(QString)), this, SLOT(numeroVastaan(QString)));
    connect(numpad, SIGNAL(clearNum()), this, SLOT(clearNum()));
}

RahanSiirto::~RahanSiirto()
{
    delete ui;
	ui = nullptr;
    delete nappis;
    nappis = nullptr;
    delete numpad;
    numpad = nullptr;
    delete msg;
	msg = nullptr;
}

void RahanSiirto::reset()
{
	ui->SiirtoEdit->setText("");
	ui->NimiEdit->setText("");
	ui->lineEdit->setText("FI");
	ui->viestiEdit->setText("");
}

void RahanSiirto::mouseMoveEvent(QMouseEvent *)
{
    emit timerResetSignal();
}


void RahanSiirto::on_jatkaButton_clicked()
{
	if(ui->NimiEdit->text() == "")
	{
		msg->setText("Anna enemmän tietoja");
		msg->show();
	}
	else if(ui->SiirtoEdit->text() == "")
	{
		msg->setText("Anna enemmän tietoja");
		msg->show();
	}
	else if(ui->lineEdit->text().size() < 18)
	{
		msg->setText("Anna enemmän tietoja");
		msg->show();
	}
	else
	{
		taulu[1] = ui->lineEdit->text();
		//rahaMaara = ui->SiirtoEdit->text().toDouble();
		taulu[3] = ui->SiirtoEdit->text().replace(",",".");
		rahaMaara = taulu[3].toDouble();
		taulu[3] = QString::number(rahaMaara);
		taulu[2] = ui->viestiEdit->text();
		taulu[0] = ui->NimiEdit->text();
		
		if(ui->viestiEdit->text() == "")
		{
			taulu[2] = "Tilisiirto";
		}
		QMessageBox::StandardButton reply = QMessageBox::question(this,"Huomautus",
		QString::number(rahaMaara) + QString(" € tilille ") + taulu[1], QMessageBox::Yes|QMessageBox::No);
	
		if(reply == QMessageBox::Yes)
		{
			if(saldoSiirto < rahaMaara){
				msg->setText("Rahat ei riitä"); 
				msg->show();
			}
			
			else{
				reset();
				saldoSiirto -= rahaMaara;
				for (int i=0; i<=3; i++){
					emit siirtoSignaali(saldoSiirto, taulu[i], i);
				}
			}
		}
	}
}

void RahanSiirto::on_palaaButton_clicked()
{
	reset();
    emit paluuSignal();
}

// slotit näppiksille ja poistoille

void RahanSiirto::kirjainVastaan(QString kirjain)
{
    if(nappisState == true)
    ui->NimiEdit->setText(ui->NimiEdit->text()+ kirjain);

    else if (nappisState == false)
        ui->viestiEdit->setText(ui->viestiEdit->text()+ kirjain);
}

void RahanSiirto::numeroVastaan(QString numero)
{
    if (numState == true)
    ui->SiirtoEdit->setText(ui->SiirtoEdit->text()+numero);
    else if (numState == false)
         ui->lineEdit->setText(ui->lineEdit->text()+numero);
}

void RahanSiirto::clearSlot()
{
    QString poisto;

    if(nappisState == true)
    {
         poisto = ui->NimiEdit->text();
         poisto.chop(1);
         ui->NimiEdit->setText(poisto);
    }

    else if (nappisState == false)
    {
        poisto = ui->viestiEdit->text();
        poisto.chop(1);
        ui->viestiEdit->setText(poisto);
    }
}

void RahanSiirto::clearNum()
{
    if(numState == true)
    {
        QString poisto = ui->SiirtoEdit->text();
        poisto.chop(1);
        ui->SiirtoEdit->setText(poisto);

    }
    else if (numState == false)
    {
        QString poisto = ui->lineEdit->text();
        poisto.chop(1);
        ui->lineEdit->setText(poisto);
    }

}

// pushbuttonit näppiksien aktivoinneille

void RahanSiirto::on_pushButton_clicked()
{
    numState = true;
    if(numpad->isHidden())
    numpad->show();
    else
    numpad->hide();
}
void RahanSiirto::on_pushButton_2_clicked()
{
    nappisState = true;
    if (nappis->isHidden())
    nappis->show();
    else
    nappis->hide();
}

void RahanSiirto::on_pushButton_3_clicked()
{
    numState = false;
    if (numpad->isHidden())
    numpad->show();
    else
    numpad->hide();
}

void RahanSiirto::on_pushButton_4_clicked()
{
    nappisState = false;
    if (nappis->isHidden())
    nappis->show();
    else
    nappis->hide();
}