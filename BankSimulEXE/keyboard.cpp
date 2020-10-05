#include "keyboard.h"
#include "ui_keyboard.h"

Keyboard::Keyboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Keyboard)
{
    ui->setupUi(this);
    this->move(600,650);
}

Keyboard::~Keyboard()
{
    delete ui;
}

void Keyboard::on_closeButton_clicked()
{
    this->close();
}

void Keyboard::on_Q_clicked()
{
    emit nappisSignal("Q");
}

void Keyboard::on_W_clicked()
{
    emit nappisSignal("W");
}

void Keyboard::on_E_clicked()
{
    emit nappisSignal("E");
}

void Keyboard::on_R_clicked()
{
    emit nappisSignal("R");
}

void Keyboard::on_T_clicked()
{
    emit nappisSignal("T");
}

void Keyboard::on_Y_clicked()
{
    emit nappisSignal("Y");
}

void Keyboard::on_U_clicked()
{
    emit nappisSignal("U");
}

void Keyboard::on_I_clicked()
{
    emit nappisSignal("I");
}

void Keyboard::on_O_clicked()
{
    emit nappisSignal("O");
}

void Keyboard::on_P_clicked()
{
    emit nappisSignal("P");
}

void Keyboard::on_ruotsiO_clicked()
{
    emit nappisSignal("Å");
}

void Keyboard::on_A_clicked()
{
    emit nappisSignal("A");
}

void Keyboard::on_S_clicked()
{
    emit nappisSignal("S");
}

void Keyboard::on_D_clicked()
{
    emit nappisSignal("D");
}

void Keyboard::on_F_clicked()
{
    emit nappisSignal("F");
}

void Keyboard::on_G_clicked()
{
    emit nappisSignal("G");
}

void Keyboard::on_H_clicked()
{
    emit nappisSignal("H");
}

void Keyboard::on_J_clicked()
{
    emit nappisSignal("J");
}

void Keyboard::on_K_clicked()
{
    emit nappisSignal("K");
}

void Keyboard::on_L_clicked()
{
    emit nappisSignal("L");
}

void Keyboard::on_Z_clicked()
{
    emit nappisSignal("Z");
}

void Keyboard::on_X_clicked()
{
    emit nappisSignal("X");
}

void Keyboard::on_C_clicked()
{
    emit nappisSignal("C");
}

void Keyboard::on_V_clicked()
{
    emit nappisSignal("V");
}

void Keyboard::on_B_clicked()
{
    emit nappisSignal("B");
}

void Keyboard::on_N_clicked()
{
    emit nappisSignal("N");
}

void Keyboard::on_M_clicked()
{
    emit nappisSignal("M");
}

void Keyboard::on_oDots_clicked()
{
    emit nappisSignal("Ö");
}

void Keyboard::on_aDots_clicked()
{
    emit nappisSignal("Ä");
}

void Keyboard::on_piste_clicked()
{
    emit nappisSignal(".");
}

void Keyboard::on_pilkku_clicked()
{
    emit nappisSignal(",");
}

void Keyboard::on_clear_clicked()
{
    emit clearSignal();
}

void Keyboard::on_spaceBar_clicked()
{
    emit nappisSignal(" ");
}
