#include "rahantalletus.h"
#include "ui_rahantalletus.h"


RahanTalletus::RahanTalletus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RahanTalletus)
{
    ui->setupUi(this);
	msgBox = new QMessageBox;
}

RahanTalletus::~RahanTalletus()
{
	delete msgBox;
	msgBox = nullptr;
	
	delete ui;
	ui = nullptr;
}

void RahanTalletus::mouseMoveEvent(QMouseEvent *)
{
	emit timerResetSignal();
}

void RahanTalletus::UpdateSum()
{
    Summa = ui->seteli10->value() * 10 + ui->seteli20->value() * 20 + 
			ui->seteli50->value() * 50 + ui->seteli100->value() * 100;
	summaString = QString::number(Summa) + " €"; 
}

void RahanTalletus::reset()
{
	Summa = 0;
	ui->seteli10->setValue(0);
	ui->seteli20->setValue(0);
	ui->seteli50->setValue(0);
	ui->seteli100->setValue(0);
	ui->label->setText("0 €");
}

void RahanTalletus::on_seteli10_valueChanged(int)
{
    UpdateSum();
	ui->label->setText(summaString);
}

void RahanTalletus::on_seteli20_valueChanged(int)
{
    UpdateSum();
	ui->label->setText(summaString);
}

void RahanTalletus::on_seteli50_valueChanged(int)
{
    UpdateSum();
	ui->label->setText(summaString);
}

void RahanTalletus::on_seteli100_valueChanged(int)
{
    UpdateSum();
	ui->label->setText(summaString);
}

void RahanTalletus::on_pushButton_clicked()
{
	if (Summa == 0) emit TalletusSignaali(saldoTalletus);
	else{
		msgBox->setText("Tilille talletettiin " + summaString);
		msgBox->exec();
		
		UpdateSum();
		
		saldoTalletus = saldoTalletus + Summa;
		
		reset();
		
		emit TalletusSignaali(saldoTalletus);
	}
}

void RahanTalletus::on_peruutaButton_clicked()
{
	reset();
	emit returnSignal();
}
