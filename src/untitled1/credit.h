#ifndef CREDIT_H
#define CREDIT_H

#include <QWidget>
extern "C"{
#include "../s21_smartcalc.h"
}

namespace Ui {
class Credit;
}

class Credit : public QWidget
{
    Q_OBJECT

public:
    explicit Credit(QWidget *parent = nullptr);
    ~Credit();

private slots:
    void radioButton();

    void radioButton_2();

    void onRadioButtonToggled(bool checked);

    void on_pushButton_clicked();

private:
    Ui::Credit *ui;
};

#endif // CREDIT_H
