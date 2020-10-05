#include "tilitapahtumat.h"
#include "ui_tilitapahtumat.h"

Tilitapahtumat::Tilitapahtumat(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Tilitapahtumat)
{
	ui->setupUi(this);
	ui->edellinenButton->setDisabled(true);
}

Tilitapahtumat::~Tilitapahtumat()
{
	delete ui;
}

void Tilitapahtumat::mouseMoveEvent(QMouseEvent *)
{
	emit timerResetSignal();
}

void Tilitapahtumat::alustus(){
	txt[0] = "Nimi\nTilinumero\n\n";
	txt[1] = "Viite\nViesti\n\n";
	txt[2] = "PVM\nMuutos\n\n";
	
	ui->label->setText(txt[0]);
	ui->label_2->setText(txt[1]);
	ui->label_3->setText(txt[2]);
	
	for (int i=sivu; i<sivu+10; i++){
		if (tilitiedot[i][0].size() <= 0){
			ui->seuraavaButton->setDisabled(true);
			break;
		}
		
		txt[0] += tilitiedot[i][0] + "\n" + tilitiedot[i][2] + "\n\n";
		txt[1] += tilitiedot[i][3] + "\n" + tilitiedot[i][4] + "\n\n";
		txt[2] += tilitiedot[i][1] + "\n" + tilitiedot[i][5] + "\n\n";
	}
	ui->label->setText(txt[0]);
	ui->label_2->setText(txt[1]);
	ui->label_3->setText(txt[2]);
}

void Tilitapahtumat::reset()
{
	sivu = 0;
	ui->seuraavaButton->setDisabled(false);
	ui->edellinenButton->setDisabled(true);
}
void Tilitapahtumat::on_seuraavaButton_clicked()
{
	sivu += 10;
	if (sivu == 10)
		ui->edellinenButton->setDisabled(false);
	alustus();
}

void Tilitapahtumat::on_edellinenButton_clicked()
{
	sivu -= 10;
	ui->seuraavaButton->setDisabled(false);
	if (sivu == 0)
		ui->edellinenButton->setDisabled(true);
	alustus();
}

void Tilitapahtumat::on_palaaButton_clicked()
{
	reset();
    emit tilitapahtumatSignal();
}
