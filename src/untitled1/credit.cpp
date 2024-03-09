#include "credit.h"
#include "./ui_credit.h"

Credit::Credit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Credit)
{
    ui->setupUi(this);
    connect(ui->radioButton, SIGNAL(toggled(bool)), this,
              SLOT(onRadioButtonToggled(bool)));
      connect(ui->radioButton_2, SIGNAL(toggled(bool)), this,
              SLOT(onRadioButtonToggled(bool)));
}

void Credit::onRadioButtonToggled(bool checked) {
  if (ui->radioButton->isChecked()) {
  } else if (ui->radioButton_2->isChecked()) {
  }
}

Credit::~Credit()
{
    delete ui;
}

void Credit::radioButton()
{

    long double S =ui->Summ_credit->text().toDouble();
    int N = ui->srok_credita->text().toInt() ;
    double P = ui->procent_stavka->text().toDouble();
    double s1=ras_ann(S,P,N);
    double s2=all_ras_ann(S,P,N);
    QString S_1 = QString::number(s1,'f', 2);
    ui->platezh->setText(S_1);
    QString S_2 = QString::number(s2,'f', 2);
    ui->dolg_procent->setText(S_2);
    double s3 = s2 -S;
    QString S_3 = QString::number(s3,'f', 2);
    ui->procent->setText(S_3);
    ui->last_platezh->setText("");
    ui->ferst_platezh->setText("");
}

void Credit::radioButton_2()
{
    long double S =ui->Summ_credit->text().toDouble();
    int N = ui->srok_credita->text().toInt() ;
    double P = ui->procent_stavka->text().toDouble();
    double s1=all_ras_dif(S,P,N);
    double pp2=ras_dif(S,P,N,N-1);
    double pp1=ras_dif(S,P,N,0);
    QString S_1 = QString::number(s1,'f', 2);
    ui->dolg_procent->setText(S_1);
    QString PP_1 = QString::number(pp1,'f', 2);
    ui->ferst_platezh->setText(PP_1);
    QString PP_2 = QString::number(pp2,'f', 2);
    ui->last_platezh->setText(PP_2);
    double s3 = s1 -S;
    QString S_3 = QString::number(s3,'f', 2);
    ui->procent->setText(S_3);
    ui->platezh->setText("");
}

void Credit::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked()){radioButton();
    }else if(ui->radioButton_2->isChecked()){radioButton_2();
    }
}

