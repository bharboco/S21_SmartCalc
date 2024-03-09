#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <credit.h>
#include <qcustomplot.h>
extern "C"{
#include "../s21_smartcalc.h"
}

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void Graf();

    void Judgment_Day();

    void operation_lock();

    void operation_unlock();

    void trigonom_lock();

    void trigonom_unlock();

    void num_lock();

    void num_unlock();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_tochka_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_ymnozhit_clicked();

    void on_pushButton_delit_clicked();

    void on_pushButton_stepen_clicked();

    void on_pushButton_procent_clicked();

    void on_pushButton_sin_clicked();

    void on_pushButton_cos_clicked();

    void on_pushButton_tan_clicked();

    void on_pushButton_log_clicked();

    void on_pushButton_ln_clicked();

    void on_pushButton_coren_clicked();

    void on_pushButton_acos_clicked();

    void on_pushButton_asin_clicked();

    void on_pushButton_atan_clicked();

    void on_pushButton_x_clicked();

    void on_pushButton_AC_clicked();

    void on_pushButton_skobka_lev_clicked();

    void on_pushButton_skobka_pra_clicked();

    void on_pushButton_ravno_clicked();

    void on_pushButton_graf_clicked();

    void on_pushButton_credit_clicked();

private:
    Ui::MainWindow *ui;
    Credit credit;
};
#endif // MAINWINDOW_H
