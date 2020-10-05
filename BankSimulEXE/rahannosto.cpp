#include "rahannosto.h"
#include "ui_rahannosto.h"

RahanNosto::RahanNosto(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::RahanNosto)
{
	ui->setupUi(this);
	msgBox = new QMessageBox;
}

RahanNosto::~RahanNosto()
{
	delete msgBox;
	msgBox = nullptr;
	
	delete ui;
	ui = nullptr;
}

void RahanNosto::reset()
{
	ui->virheLabel->setText("");
	ui->lineEdit_2->setText("");
}

void RahanNosto::mouseMoveEvent(QMouseEvent *)
{
	emit timerResetSignal();
}
void RahanNosto::on_peruutaButton_clicked()
{
	reset();
    emit returnSignal();
}

void RahanNosto::on_ok_2_clicked()
{
	if (ui->lineEdit_2->text().toInt() % 10 != 0 || ui->lineEdit_2->text().toInt() == 0){
		ui->virheLabel->setText("Automaatin pienin seteli on 10e");
	}
	else{
		if(saldo < ui->lineEdit_2->text().toInt()){
			msgBox->setText("Rahat ei riitä"); 
			msgBox->show();
		}
		
		else{
			saldo -= ui->lineEdit_2->text().toInt();
			int temp = ui->lineEdit_2->text().toInt();
			tilitiedot = QString::number(temp);
			
			msgBox->setText("Ole hyvä ja ota rahat");
			msgBox->exec();
			reset();
			
			emit rahanNostoSignaali(saldo, tilitiedot);
		}
	}
}
void RahanNosto::on_pyyhi_2_clicked()
{
    QString input = ui->lineEdit_2->text();
	input.chop(1);
	ui->lineEdit_2->setText(input);
}
void RahanNosto::on_yksi_2_clicked()
{
	ui->lineEdit_2->setText(ui->lineEdit_2->text()+'1');
}

void RahanNosto::on_kaksi_2_clicked()
{
    ui->lineEdit_2->setText(ui->lineEdit_2->text()+'2');
}

void RahanNosto::on_kolme_2_clicked()
{
    ui->lineEdit_2->setText(ui->lineEdit_2->text()+'3');
}

void RahanNosto::on_nelja_2_clicked()
{
    ui->lineEdit_2->setText(ui->lineEdit_2->text()+'4');
}

void RahanNosto::on_viisi_2_clicked()
{
    ui->lineEdit_2->setText(ui->lineEdit_2->text()+'5');
}

void RahanNosto::on_kuusi_2_clicked()
{
    ui->lineEdit_2->setText(ui->lineEdit_2->text()+'6');
}

void RahanNosto::on_seitseman_2_clicked()
{
    ui->lineEdit_2->setText(ui->lineEdit_2->text()+'7');
}

void RahanNosto::on_kahdeksan_2_clicked()
{
    ui->lineEdit_2->setText(ui->lineEdit_2->text()+'8');
}

void RahanNosto::on_yhdeksan_2_clicked()
{
    ui->lineEdit_2->setText(ui->lineEdit_2->text()+'9');
}

void RahanNosto::on_nolla_2_clicked()
{
    ui->lineEdit_2->setText(ui->lineEdit_2->text()+'0');
}