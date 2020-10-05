#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QDialog>

namespace Ui {
class Keyboard;
}

class Keyboard : public QDialog
{
    Q_OBJECT

public:
    explicit Keyboard(QWidget *parent = nullptr);
    ~Keyboard();

private slots:
    void on_closeButton_clicked();

    void on_Q_clicked();

    void on_W_clicked();

    void on_E_clicked();

    void on_R_clicked();

    void on_T_clicked();

    void on_Y_clicked();

    void on_U_clicked();

    void on_I_clicked();

    void on_O_clicked();

    void on_P_clicked();

    void on_ruotsiO_clicked();

    void on_A_clicked();

    void on_S_clicked();

    void on_D_clicked();

    void on_F_clicked();

    void on_G_clicked();

    void on_H_clicked();

    void on_J_clicked();

    void on_K_clicked();

    void on_L_clicked();

    void on_Z_clicked();

    void on_X_clicked();

    void on_C_clicked();

    void on_V_clicked();

    void on_B_clicked();

    void on_N_clicked();

    void on_M_clicked();



    void on_oDots_clicked();

    void on_aDots_clicked();

    void on_piste_clicked();

    void on_pilkku_clicked();

    void on_clear_clicked();

    void on_spaceBar_clicked();

private:
    Ui::Keyboard *ui;

signals:

    void nappisSignal(QString);
    void clearSignal();

};

#endif // KEYBOARD_H
