#include "../s21_smartcalc.h"

void push(stack* A, char value) {
  A->stack[A->length] = value;
  A->length++;
}

char pop(stack* A) {
  A->length--;
  return A->stack[A->length];
}

void initialize(stack* A) {
  A->length = 0;
  A->stack[TOP] = '0';
}

void push_num(stack_num* A, double stack) {
  A->num[A->length] = stack;
  A->length++;
}

double pop_num(stack_num* A) {
  A->length--;
  return A->num[A->length];
}