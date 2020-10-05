#ifndef RAHANTALLETUS_H
#define RAHANTALLETUS_H

#include <QDialog>
#include <QMouseEvent>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class RahanTalletus;
}

class RahanTalletus : public QDialog
{
    Q_OBJECT

public:
    explicit RahanTalletus(QWidget *parent = nullptr);
    ~RahanTalletus();
	void UpdateSum();
	double saldoTalletus;
	void reset();
	
protected:
	void mouseMoveEvent(QMouseEvent *);

signals:
    void TalletusSignaali(double);
	void timerResetSignal();
	void returnSignal();

private slots:

    void on_seteli10_valueChanged(int);

    void on_seteli20_valueChanged(int);
	
	void on_seteli50_valueChanged(int);

    void on_seteli100_valueChanged(int);

    void on_pushButton_clicked();

	void on_peruutaButton_clicked();
	
private:
    Ui::RahanTalletus *ui;
	QMessageBox *msgBox;
	QString summaString;
	int Summa;
    QString word;
};

#endif // RAHANTALLETUS_H
