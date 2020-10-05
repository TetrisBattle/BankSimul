#ifndef NUMPAD_H
#define NUMPAD_H

#include <QDialog>

namespace Ui {
class Numpad;
}

class Numpad : public QDialog
{
    Q_OBJECT

public:
    explicit Numpad(QWidget *parent = nullptr);
    ~Numpad();

private slots:
    void on_pushButton_clicked();

    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_zero_clicked();

    void on_comma_clicked();

    void on_clear_clicked();

private:
    Ui::Numpad *ui;

signals:
    void numeroSignal(QString);
    void clearNum();
};

#endif // NUMPAD_H
