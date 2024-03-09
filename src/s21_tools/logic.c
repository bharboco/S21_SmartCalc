#include "../s21_smartcalc.h"

int get_priority(char oper) {
  int priority = 0;
  switch (oper) {
    case '+':
    case '-':
      priority = 1;
      break;
    case '*':
    case '/':
      priority = 2;
      break;
    case '^':
      priority = 3;
      break;
    case 'm':  // mod(%)
    case 's':  // sin
    case 'c':  // cos
    case 't':  // tan
    case 'a':  // acos
    case 'n':  // asin
    case 'g':  // atan
    case 'q':  // sqrt
    case 'l':  // ln
    case 'o':  // log
      priority = 4;
      break;
    case '(':
      priority = 5;
      break;
  }
  return priority;
}

char* convert_in_polish(char* str, char* res, stack* A) {
  int j = 0, end_str = 0;
  str = compress(str);
  for (int i = 0; i < (int)strlen(str); i++, j++) {
    if (unar_plus(str, res, &i, &j, &end_str)) break;
    if (unar_minus(str, res, &i, &j, &end_str)) break;
    if (isdigit(str[i]) || str[i] == '.') {
      res[j] = str[i];
    } else {
      if (get_priority(str[i]) > 0 &&
          get_priority(str[i]) > get_priority(A->stack[TOP]))
        push(A, str[i]);
      else if (get_priority(str[i]) <= get_priority(A->stack[TOP])) {
        if (A->stack[TOP] != '(' && str[i] != ')') {
          while (get_priority(str[i]) <= get_priority(A->stack[TOP])) {
            if (A->stack[TOP] == '(') break;
            sokr_pop(res, &i, &j, A);
          }
        } else if (str[i] == ')') {
          while (A->stack[TOP] != '(') {
            sokr_pop(res, &i, &j, A);
          }
          pop(A);
          if (strchr("sctangqlo", A->stack[TOP])) {
            sokr_pop(res, &i, &j, A);
          }
        }
        if (str[i] != ')') push(A, str[i]);
      }
      res[j] = ' ';
    }
  }
  fin_pol(res, A, &j);
  free(str);
  return res;
}

void sokr_pop(char* res, int* i, int* j, stack* A) {
  res[(*j)++] = ' ';
  res[(*j)++] = A->stack[TOP];
  pop(A);
}

int unar_plus(char* str, char* res, int* i, int* j, int* end_str) {
  if (str[(*i)] == '(' && str[(*i) + 1] == '+') {
    (*i) = (*i) + 2;
    while (str[(*i)] != ')') {
      res[(*j)++] = str[(*i)++];
    }
    if (str[(*i) + 1] != '\0')
      (*i)++;
    else
      *end_str = 1;
  }
  return *end_str;
}

int unar_minus(char* str, char* res, int* i, int* j, int* end_str) {
  if (str[(*i)] == '(' && str[(*i) + 1] == '-') {
    (*i)++;
    while (str[(*i)] != ')') {
      res[(*j)++] = str[(*i)++];
    }
    if (str[(*i) + 1] != '\0')
      (*i)++;
    else
      *end_str = 1;
  }
  return *end_str;
}

void fin_pol(char* res, stack* A, int* j) {
  while (A->length != 0) {
    res[(*j)++] = ' ';
    res[(*j)++] = pop(A);
  }
  remove_spaces(res);
}

long double calculation(char* str) {
  stack_num A = {0};
  char str_atoi[20] = {'\0'};
  for (int i = 0; i < (int)strlen(str); i++) {
    if (isdigit(str[i]) || (str[i] == '-' && isdigit(str[i + 1]))) {
      int j = 0;
      while ((str[i] != ' ')) {
        str_atoi[j++] = str[i++];
        if (i == (int)strlen(str)) {
          break;
        }
      }
      str_atoi[j] = '\0';
      push_num(&A, atof(str_atoi));
      memset(str_atoi, 0, sizeof(str_atoi));
    }
    if (strchr("m+-*/^sctangqlo", str[i]) && str[i] != '\0') {
      long double operand2 = 0, operand1 = 0, trigonometria = 0;
      if (strchr("sctangqlo", str[i]) && str[i] != '\0') {
        trigonometria = pop_num(&A);
      } else {
        operand2 = pop_num(&A);
        operand1 = pop_num(&A);
      }
      calc_oper(&A, str[i], operand1, operand2, trigonometria);
    }
  }
  return pop_num(&A);
}