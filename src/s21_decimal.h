#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef DECIMAL_FUNCTION_H
typedef struct {
  unsigned int bits[4];
} s21_decimal;

typedef struct {
  unsigned int bits[6];
  unsigned sign;
  unsigned scale;
} big_decimal;

#define s21_dec_min_int              \
  (s21_decimal) {                    \
    { 0x80000000, 0, 0, 0x80000000 } \
  }
#define s21_dec_max_int     \
  (s21_decimal) {           \
    { 0x7FFFFFFF, 0, 0, 0 } \
  }

// -------------main_function-------------

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

int s21_is_less(s21_decimal, s21_decimal);
int s21_is_less_or_equal(s21_decimal, s21_decimal);
int s21_is_greater(s21_decimal value_1, s21_decimal value_2);
int s21_is_greater_or_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_equal(s21_decimal, s21_decimal);
int s21_is_not_equal(s21_decimal, s21_decimal);

int s21_from_int_to_decimal(int src, s21_decimal *dst);
int s21_from_float_to_decimal(float src, s21_decimal *dst);
int s21_from_decimal_to_int(s21_decimal src, int *dst);
int s21_from_decimal_to_float(s21_decimal src, float *dst);

int s21_floor(s21_decimal value, s21_decimal *result);
int s21_round(s21_decimal value, s21_decimal *result);
int s21_truncate(s21_decimal value, s21_decimal *result);
int s21_negate(s21_decimal value, s21_decimal *result);

// -------------additional_function-------------

big_decimal add(big_decimal value_1, big_decimal value_2);
big_decimal multiply(big_decimal value_1, big_decimal value_2);
big_decimal sub(big_decimal value_1, big_decimal value_2);
big_decimal division(big_decimal value_1_big_dec, big_decimal value_2_big_dec,
                     int *code_result_function);
big_decimal division_with_remainder(big_decimal value_1, big_decimal value_2,
                                    big_decimal *remainder);
big_decimal banking_rounding(big_decimal value, big_decimal remainder);
big_decimal reducing_the_number(big_decimal value);
big_decimal compress_mul(big_decimal value);
unsigned get_bit(
    big_decimal *value,
    unsigned index);  // посмотреть значение разряда (0 или 1) в каком-либо бите
unsigned get_scale(s21_decimal *value);  // получить значение степени числа
unsigned get_sign(s21_decimal *value);
void normalization(big_decimal *value_1,
                   big_decimal *value_2);  // приведение к общему знаменателю
void shift_left(big_decimal *value,
                unsigned shift);  // сдвиг влево, аналог логической операции <<
void shift_right(
    big_decimal *value,
    unsigned shift);  // сдвиг вправо, аналог логической операции >>
void multiply_x_10(big_decimal *value);  // умножение числа на 10
void set_bit(big_decimal *value, unsigned index,
             unsigned bit_value);  // установить значение разряда (0 или 1) в
                                   // каком-либо бите
void decimal_to_big_decimal(
    s21_decimal *value,
    big_decimal *value_big_dec);  // конвертация из децимал в big децимал
void big_decimal_to_decimal(
    big_decimal *value_big_dec,
    s21_decimal *result);  // конвертация из big децимал в децимал
void s21_set_sign(s21_decimal *value, int sign);
void s21_set_scale(s21_decimal *dec, int value);
void get_mantiss_exp_from_str_float(char *str, int *mantissa, int *exponent);
void exchange_value(big_decimal *value_1, big_decimal *value_2);
int check_owerflow(big_decimal *value);
int compare_without_a_sign(big_decimal value_1, big_decimal value_2);
int s21_clear_decimal(s21_decimal *value);
int s21_floor(s21_decimal value, s21_decimal *result);
int multiplay_by_ten(s21_decimal dec, s21_decimal *res);
bool value_is_zero(big_decimal value);

#endif