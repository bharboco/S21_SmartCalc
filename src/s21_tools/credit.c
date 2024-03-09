#include "../s21_smartcalc.h"

double ras_ann(double S, double P, int N) {
  double res = 0;
  P = P / 100;
  res = S * P / 12 * powl(1 + P / 12, N) / (powl(1 + P / 12, N) - 1);
  return res;
}

double all_ras_ann(double S, double P, int N) {  // общая выплата
  double res = 0;
  for (int i = 0; i < N; i++) {
    double temp = ras_ann(S, P, N);
    res += temp;
  }
  return res;
}

double ras_dif(double S, double P, int N, int i) {
  P = P / 100;
  double res = (S / N) + ((S - ((S / N) * i)) * P / 12);
  return res;
}

double all_ras_dif(double S, double P, int N) {  // общая выплата
  double res = 0;
  for (int i = 0; i < N; i++) {
    double temp = ras_dif(S, P, N, i);
    res += temp;
  }
  return res;
}
