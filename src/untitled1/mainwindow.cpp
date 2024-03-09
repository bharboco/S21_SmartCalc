#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    operation_lock();
    ui->pushButton_tochka->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_1_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "1");
    trigonom_lock();
    ui->pushButton_skobka_lev->setEnabled(false);
    operation_unlock();
    ui->pushButton_tochka->setEnabled(true);
    ui->pushButton_x->setEnabled(false);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "2");
    trigonom_lock();
    ui->pushButton_skobka_lev->setEnabled(false);
    operation_unlock();
    ui->pushButton_tochka->setEnabled(true);
    ui->pushButton_x->setEnabled(false);
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "3");
    trigonom_lock();
    ui->pushButton_skobka_lev->setEnabled(false);
    operation_unlock();
    ui->pushButton_tochka->setEnabled(true);
    ui->pushButton_x->setEnabled(false);
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "4");
    trigonom_lock();
    ui->pushButton_skobka_lev->setEnabled(false);
    operation_unlock();
    ui->pushButton_tochka->setEnabled(true);
    ui->pushButton_x->setEnabled(false);
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "5");
    trigonom_lock();
    ui->pushButton_skobka_lev->setEnabled(false);
    operation_unlock();
    ui->pushButton_tochka->setEnabled(true);
    ui->pushButton_x->setEnabled(false);
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "6");
    trigonom_lock();
    ui->pushButton_skobka_lev->setEnabled(false);
    operation_unlock();
    ui->pushButton_tochka->setEnabled(true);
    ui->pushButton_x->setEnabled(false);
}


void MainWindow::on_pushButton_7_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "7");
    trigonom_lock();
    ui->pushButton_skobka_lev->setEnabled(false);
    operation_unlock();
    ui->pushButton_tochka->setEnabled(true);
    ui->pushButton_x->setEnabled(false);
}


void MainWindow::on_pushButton_8_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "8");
    trigonom_lock();
    ui->pushButton_skobka_lev->setEnabled(false);
    operation_unlock();
    ui->pushButton_tochka->setEnabled(true);
    ui->pushButton_x->setEnabled(false);
}


void MainWindow::on_pushButton_9_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "9");
    trigonom_lock();
    ui->pushButton_skobka_lev->setEnabled(false);
    operation_unlock();
    ui->pushButton_tochka->setEnabled(true);
    ui->pushButton_x->setEnabled(false);
}


void MainWindow::on_pushButton_0_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "0");
    trigonom_lock();
    ui->pushButton_skobka_lev->setEnabled(false);
    operation_unlock();
    ui->pushButton_tochka->setEnabled(true);
    ui->pushButton_x->setEnabled(false);
}


void MainWindow::on_pushButton_tochka_clicked()
{
    ui->rezult->setText(ui->rezult->text() + ".");
    num_unlock();
    trigonom_lock();
    ui->pushButton_skobka_lev->setEnabled(false);
    operation_lock();
    ui->pushButton_tochka->setEnabled(false);
    ui->pushButton_x->setEnabled(false);
}


void MainWindow::on_pushButton_plus_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "+");
    num_unlock();
    operation_lock();
    ui->pushButton_skobka_lev->setEnabled(true);
    trigonom_unlock();
    ui->pushButton_x->setEnabled(true);
    ui->pushButton_tochka->setEnabled(false);
}


void MainWindow::on_pushButton_minus_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "-");
    num_unlock();
    operation_lock();
    ui->pushButton_skobka_lev->setEnabled(true);
    trigonom_unlock();
    ui->pushButton_x->setEnabled(true);
    ui->pushButton_tochka->setEnabled(false);
}

void MainWindow::on_pushButton_ymnozhit_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "*");
    num_unlock();
    operation_lock();
    ui->pushButton_skobka_lev->setEnabled(true);
    trigonom_unlock();
    ui->pushButton_x->setEnabled(true);
    ui->pushButton_tochka->setEnabled(false);
}

void MainWindow::on_pushButton_delit_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "/");
    num_unlock();
    operation_lock();
    ui->pushButton_skobka_lev->setEnabled(true);
    trigonom_unlock();
    ui->pushButton_x->setEnabled(true);
    ui->pushButton_tochka->setEnabled(false);
}

void MainWindow::on_pushButton_stepen_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "^");
    num_unlock();
    operation_lock();
    ui->pushButton_skobka_lev->setEnabled(true);
    trigonom_unlock();
    ui->pushButton_x->setEnabled(true);
    ui->pushButton_tochka->setEnabled(false);
}

void MainWindow::on_pushButton_procent_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "mod");
    num_unlock();
    operation_lock();
    ui->pushButton_skobka_lev->setEnabled(false);
    trigonom_unlock();
    ui->pushButton_x->setEnabled(true);
    ui->pushButton_tochka->setEnabled(false);
}

void MainWindow::on_pushButton_sin_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "sin(");
    num_unlock();
    operation_lock();
}

void MainWindow::on_pushButton_cos_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "cos(");
    num_unlock();
    operation_lock();
}

void MainWindow::on_pushButton_tan_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "tan(");
    num_unlock();
    operation_lock();
}

void MainWindow::on_pushButton_log_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "log(");
    num_unlock();
    operation_lock();
}

void MainWindow::on_pushButton_ln_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "ln(");
    num_unlock();
    operation_lock();
}

void MainWindow::on_pushButton_coren_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "sqrt(");
    num_unlock();
    operation_lock();
}

void MainWindow::on_pushButton_acos_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "acos(");
    num_unlock();
    operation_lock();
}

void MainWindow::on_pushButton_asin_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "asin(");
    num_unlock();
    operation_lock();
}

void MainWindow::on_pushButton_atan_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "atan(");
    num_unlock();
    operation_lock();
}

void MainWindow::num_lock() {
    ui->pushButton_0->setEnabled(false);
    ui->pushButton_1->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
}

void MainWindow::num_unlock() {
    ui->pushButton_0->setEnabled(true);
    ui->pushButton_1->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
}

void MainWindow::trigonom_lock(){
    ui->pushButton_acos->setEnabled(false);
    ui->pushButton_asin->setEnabled(false);
    ui->pushButton_atan->setEnabled(false);
    ui->pushButton_coren->setEnabled(false);
    ui->pushButton_cos->setEnabled(false);
    ui->pushButton_ln->setEnabled(false);
    ui->pushButton_log->setEnabled(false);
    ui->pushButton_sin->setEnabled(false);
    ui->pushButton_tan->setEnabled(false);
}

void MainWindow::trigonom_unlock(){
    ui->pushButton_acos->setEnabled(true);
    ui->pushButton_asin->setEnabled(true);
    ui->pushButton_atan->setEnabled(true);
    ui->pushButton_coren->setEnabled(true);
    ui->pushButton_cos->setEnabled(true);
    ui->pushButton_ln->setEnabled(true);
    ui->pushButton_log->setEnabled(true);
    ui->pushButton_sin->setEnabled(true);
    ui->pushButton_tan->setEnabled(true);
}

void MainWindow::operation_lock(){
    ui->pushButton_minus->setEnabled(false);
    ui->pushButton_delit->setEnabled(false);
    ui->pushButton_plus->setEnabled(false);
    ui->pushButton_procent->setEnabled(false);
    ui->pushButton_skobka_pra->setEnabled(false);
    ui->pushButton_stepen->setEnabled(false);
    ui->pushButton_ymnozhit->setEnabled(false);
}

void MainWindow::operation_unlock(){
    ui->pushButton_minus->setEnabled(true);
    ui->pushButton_delit->setEnabled(true);
    ui->pushButton_plus->setEnabled(true);
    ui->pushButton_procent->setEnabled(true);
    ui->pushButton_skobka_pra->setEnabled(true);
    ui->pushButton_stepen->setEnabled(true);
    ui->pushButton_ymnozhit->setEnabled(true);
}

void MainWindow::on_pushButton_x_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "x");
    ui->pushButton_skobka_lev->setEnabled(false);
    ui->pushButton_x->setEnabled(false);
    num_lock();
    trigonom_lock();
    operation_unlock();
    ui->pushButton_tochka->setEnabled(false);
}

void MainWindow::on_pushButton_AC_clicked()
{
    ui->rezult->setText("");
    trigonom_unlock();
    ui->pushButton_skobka_lev->setEnabled(true);
    ui->pushButton_x->setEnabled(true);
    num_unlock();
    ui->pushButton_tochka->setEnabled(false);
    operation_lock();
}

void MainWindow::on_pushButton_skobka_lev_clicked()
{
    ui->rezult->setText(ui->rezult->text() + "(");
    trigonom_unlock();
    ui->pushButton_x->setEnabled(true);
    num_unlock();
    ui->pushButton_tochka->setEnabled(false);
    operation_lock();
    ui->pushButton_minus->setEnabled(true);
    ui->pushButton_plus->setEnabled(true);
}

void MainWindow::on_pushButton_skobka_pra_clicked()
{
    ui->rezult->setText(ui->rezult->text() + ")");
    trigonom_lock();
    ui->pushButton_skobka_lev->setEnabled(false);
    ui->pushButton_x->setEnabled(false);
    num_lock();
    ui->pushButton_tochka->setEnabled(false);
    operation_unlock();
}

void MainWindow::Judgment_Day(){
    operation_lock();
    num_lock();
    trigonom_lock();
    ui->pushButton_tochka->setEnabled(false);
    ui->pushButton_ravno->setEnabled(false);
}

void MainWindow::on_pushButton_ravno_clicked()
{
    Judgment_Day();
    operation_unlock();
    QString qstr = ui->rezult->text();
    bool number = false;
    bool error = false;
    QString Label_X = ui->lineEdit->text();
    Label_X.toDouble(&number);
    if (qstr.contains('x')){
        for(int i = 0;i < qstr.length();++i){
            if(qstr.at(i) == 'x'){
                qstr.replace("x",ui->lineEdit->text());
            }else if (!number){
                ui->rezult->setText("ERROR");
                error =true;
                Judgment_Day();
            }
        }
    }if(!error){
    std::string str = qstr.toStdString();
    const char* stroka = str.c_str();
    error = number_of_brackets(stroka);
    if(!error){
    long double res = run(stroka);
    QString a = QString::number(res,'f', 6);
    ui->rezult->setText(a);
    }else{
        ui->rezult->setText("ERROR");
        Judgment_Day();
    }
    }
    if(ui->rezult->text()=="ERROR" || ui->rezult->text()=="inf" || ui->rezult->text() == "nan"){
        Judgment_Day();
    }
}

void MainWindow::on_pushButton_graf_clicked()
{
    Graf();
}

void MainWindow::Graf(){
    double XS = -5;
    double XE = 5;
    double YS = -2;
    double YE = 2;
    if(ui->lineEdit_x_max->text().isEmpty() || ui->lineEdit_x_max->text().isEmpty() ||
       ui->lineEdit_y_min->text().isEmpty() || ui->lineEdit_y_max->text().isEmpty()){
        ui->widget->xAxis->setRange(XS,XE);
        ui->widget->yAxis->setRange(YS,YE);
    }else {
        ui->widget->xAxis->setRange(ui->lineEdit_x_min->text().toDouble(),ui->lineEdit_x_max->text().toDouble());
        ui->widget->yAxis->setRange(ui->lineEdit_y_min->text().toDouble(),ui->lineEdit_y_max->text().toDouble());
    }
    QVector<double> x(10001),y(10001);
    for (int i = 0; i < 10001; ++i) {
        QString qstr = ui->rezult->text();
        x[i] = (i - 5000.0) / fabs(XS);
        QString x_value = QString::number(x[i]);
        qstr.replace("x", "(" + x_value + ")");
        std::string str = qstr.toStdString();
        const char *cstr = str.c_str();
        y[i] = run(cstr);
    }
    ui->widget->addGraph();
    ui->widget->graph(0)->setData(x, y);
    ui->widget->replot();
}

void MainWindow::on_pushButton_credit_clicked()
{
    credit.show();
}

