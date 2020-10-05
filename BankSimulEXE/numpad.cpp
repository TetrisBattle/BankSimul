#include "numpad.h"
#include "ui_numpad.h"

Numpad::Numpad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Numpad)
{
    ui->setupUi(this);
    this->move(600,650);
}

Numpad::~Numpad()
{
    delete ui;
}

void Numpad::on_pushButton_clicked()
{
    this->hide();
}

void Numpad::on_one_clicked()
{
    emit numeroSignal("1");
}

void Numpad::on_two_clicked()
{
    emit numeroSignal("2");
}

void Numpad::on_three_clicked()
{
    emit numeroSignal("3");
}

void Numpad::on_four_clicked()
{
    emit numeroSignal("4");
}

void Numpad::on_five_clicked()
{
    emit numeroSignal("5");
}

void Numpad::on_six_clicked()
{
    emit numeroSignal("6");
}

void Numpad::on_seven_clicked()
{
    emit numeroSignal("7");
}

void Numpad::on_eight_clicked()
{
    emit numeroSignal("8");
}

void Numpad::on_nine_clicked()
{
    emit numeroSignal("9");
}

void Numpad::on_zero_clicked()
{
    emit numeroSignal("0");
}

void Numpad::on_comma_clicked()
{
    emit numeroSignal(",");
}

void Numpad::on_clear_clicked()
{
    emit clearNum();
}
