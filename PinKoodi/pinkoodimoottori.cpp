#include "pinkoodimoottori.h"
#include "ui_pinkoodimoottori.h"

PinKoodiMoottori::PinKoodiMoottori(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::PinKoodiMoottori)
{
	ui->setupUi(this);
	this->show();
	ui->lineEdit->setFocus();
	
	// PIN koodi pitää olla numero ja sen max pituus on 4
	ui->lineEdit->setValidator(new QIntValidator(0, 9999, this));
	ui->lineEdit->setMaxLength(4);
	ui->lineEdit->setEchoMode(QLineEdit::Password);
	
	pinTimer = new QTimer(this);
	connect(pinTimer, SIGNAL(timeout()), this, SLOT(timerActivated()));
	pinTimer->start(10000);
}

PinKoodiMoottori::~PinKoodiMoottori()
{
	delete pinTimer;
	pinTimer = nullptr;
	
	delete ui;
	ui = nullptr;
}

void PinKoodiMoottori::mouseMoveEvent(QMouseEvent *)
{
	pinTimer->start(10000);
}

void PinKoodiMoottori::timerActivated()
{
	pinTimer->stop();
	qDebug() << "10sec AFK";
	emit pinKoodiMoottoriSignal(false);
}

void PinKoodiMoottori::on_ok_clicked()
{
	counter++;
	pinLineEdit = ui->lineEdit->text().toUInt();
	
	if (pinLineEdit == pinMotor){ // tarkistaa pinkoodin
		pinTimer->stop();
		emit pinKoodiMoottoriSignal(true);
	}
	else {
		ui->label_2->setText("Väärä PIN koodi");
		ui->lineEdit->setText("");
	}
	
	if (counter == 3){
		pinTimer->stop();
		emit pinKoodiMoottoriSignal(false);
	}
}
void PinKoodiMoottori::on_pyyhi_clicked()
{
    QString input = ui->lineEdit->text();
	input.chop(1);
	ui->lineEdit->setText(input);
}
void PinKoodiMoottori::on_yksi_clicked()
{
	ui->lineEdit->setText(ui->lineEdit->text()+'1');
}

void PinKoodiMoottori::on_kaksi_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+'2');
}

void PinKoodiMoottori::on_kolme_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+'3');
}

void PinKoodiMoottori::on_nelja_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+'4');
}

void PinKoodiMoottori::on_viisi_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+'5');
}

void PinKoodiMoottori::on_kuusi_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+'6');
}

void PinKoodiMoottori::on_seitseman_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+'7');
}

void PinKoodiMoottori::on_kahdeksan_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+'8');
}

void PinKoodiMoottori::on_yhdeksan_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+'9');
}

void PinKoodiMoottori::on_nolla_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+'0');
}
