#include <check.h>

#include "s21_smartcalc.h"

START_TEST(test1) {
  char* str = "2+10*5-23\0";
  long double reza = run(str);
  ck_assert_double_eq(reza, 29);
}
END_TEST

START_TEST(test2) {
  char* str = "2^acos(1)\0";
  long double reza = run(str);
  ck_assert_double_eq(reza, 1);
}
END_TEST

START_TEST(test3) {
  char* str =
      "sin(2-243*(25341/5)*322-34-(52*23+(1/2)/"
      "31+411)-2)^2+cos(2-1)^2-sin(2-243*(25341/5)*322-34-(sin(2-243*(25341/"
      "5)*322-34-(52*23+(1/2)/31+411)-2)^2+cos(2-1)^2)-(52*23+(1/2)/"
      "31+411)-2)^2+cos(2-1)^2\0";
  long double reza = run(str);
  ck_assert_double_eq_tol(reza, 1.10734, 1e-6);
}
END_TEST

START_TEST(test4) {
  char* str = "tan(2)\0";
  long double reza = run(str);
  ck_assert_double_eq_tol(reza, -2.18504, 1e-6);
}
END_TEST

START_TEST(test5) {
  char* str = "1mod2\0";
  long double reza = run(str);
  ck_assert_double_eq_tol(reza, 1, 1e-6);
}
END_TEST

START_TEST(test6) {
  char* str = "8*(-1)\0";
  long double reza = run(str);
  ck_assert_double_eq_tol(reza, -8, 1e-6);
}
END_TEST

START_TEST(test7) {
  char* str = "sqrt(4)+asin(1)-log(2)+ln(2)\0";
  long double reza = run(str);
  ck_assert_double_eq_tol(reza, 3.962913, 1e-6);
}
END_TEST

START_TEST(test8) {
  char* str = "1+atan(5)\0";
  long double reza = run(str);
  ck_assert_double_eq_tol(reza, 2.37340, 1e-6);
}
END_TEST

START_TEST(test9) {
  char* str = "1+atan(5)\0";
  int reza = number_of_brackets(str);
  ck_assert_int_eq(reza, 0);
}
END_TEST

START_TEST(test10) {
  char* str = "1+(atan(5)\0";
  int reza = number_of_brackets(str);
  ck_assert_int_eq(reza, 1);
}
END_TEST

START_TEST(test11) {
  double reza = ras_ann(100000, 5, 10);
  ck_assert_ldouble_eq_tol(reza, 10230.6, 6);
}
END_TEST

START_TEST(test12) {
  double reza = all_ras_ann(100000, 5, 10);
  ck_assert_ldouble_eq_tol(reza, 102306, 6);
}
END_TEST

START_TEST(test13) {
  double reza = ras_dif(100000, 5, 10, 0);
  ck_assert_double_eq_tol(reza, 10416.67, 6);
}
END_TEST

START_TEST(test14) {
  double reza = all_ras_dif(100000, 5, 10);
  ck_assert_double_eq_tol(reza, 102291.67, 6);
}
END_TEST

int main() {
  Suite* s1 = suite_create("s21_SmartCalc");
  TCase* tc1_1 = tcase_create("s21_SmartCalc");
  SRunner* sr = srunner_create(s1);
  int nf = 0;
  suite_add_tcase(s1, tc1_1);

  tcase_add_test(tc1_1, test1);
  tcase_add_test(tc1_1, test2);
  tcase_add_test(tc1_1, test3);
  tcase_add_test(tc1_1, test4);
  tcase_add_test(tc1_1, test5);
  tcase_add_test(tc1_1, test6);
  tcase_add_test(tc1_1, test7);
  tcase_add_test(tc1_1, test8);
  tcase_add_test(tc1_1, test9);
  tcase_add_test(tc1_1, test10);
  tcase_add_test(tc1_1, test11);
  tcase_add_test(tc1_1, test12);
  tcase_add_test(tc1_1, test13);
  tcase_add_test(tc1_1, test14);
  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}
