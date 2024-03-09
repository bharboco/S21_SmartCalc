#include "s21_smartcalc.h"

long double run(const char* str) {
  long double rezult = 0;
  stack A;
  initialize(&A);
  char* str2 = (char*)str;
  char reza[510] = {'\0'};
  convert_in_polish(str2, reza, &A);
  rezult = calculation(reza);
  return rezult;
}