#include "s21_decimal.h"

int s21_is_greater(s21_decimal value_1, s21_decimal value_2) {
  int result = 0;
  big_decimal value_1_big_dec = {0};
  big_decimal value_2_big_dec = {0};

  decimal_to_big_decimal(&value_1, &value_1_big_dec);
  decimal_to_big_decimal(&value_2, &value_2_big_dec);
  normalization(&value_1_big_dec, &value_2_big_dec);

  if (value_1_big_dec.sign < value_2_big_dec.sign)
    result = 1;
  else if (value_1_big_dec.sign == value_2_big_dec.sign) {
    result = compare_without_a_sign(value_1_big_dec, value_2_big_dec);
    if (result == 1)
      result ^= value_1_big_dec.sign;
    else if (result == -1)
      result = value_1_big_dec.sign == 1 ? 1 : 0;
  }
  return result;
}

int s21_is_greater_or_equal(s21_decimal value_1, s21_decimal value_2) {
  int result = 0;
  if (s21_is_greater(value_1, value_2))
    result = 1;
  else
    result = s21_is_equal(value_1, value_2);

  return result;
}

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int code_result_function = 0;
  if (result != NULL) {
    big_decimal value_1_big_dec = {0};
    big_decimal value_2_big_dec = {0};
    big_decimal result_big_dec = {0};

    decimal_to_big_decimal(&value_1, &value_1_big_dec);
    decimal_to_big_decimal(&value_2, &value_2_big_dec);

    if (value_1_big_dec.scale != value_2_big_dec.scale) {
      normalization(&value_1_big_dec, &value_2_big_dec);
    }

    if (value_1_big_dec.sign != value_2_big_dec.sign) {
      if (compare_without_a_sign(value_2_big_dec, value_1_big_dec) == 1) {
        exchange_value(&value_1_big_dec, &value_2_big_dec);
      }
      result_big_dec = sub(value_1_big_dec, value_2_big_dec);
    } else {
      result_big_dec = add(value_1_big_dec, value_2_big_dec);
    }

    result_big_dec.sign = value_1_big_dec.sign;

    if (check_owerflow(&result_big_dec) == 1 || result_big_dec.scale >= 29)
      result_big_dec = reducing_the_number(result_big_dec);

    if (check_owerflow(&result_big_dec) == 0)
      big_decimal_to_decimal(&result_big_dec, result);
    else
      code_result_function = result_big_dec.sign == 1 ? 2 : 1;
  }
  return code_result_function;
}

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int code_result_function = 0;
  if (result != NULL) {
    big_decimal value_1_big_dec = {0};
    big_decimal value_2_big_dec = {0};
    decimal_to_big_decimal(&value_1, &value_1_big_dec);
    decimal_to_big_decimal(&value_2, &value_2_big_dec);

    big_decimal result_big_dec = multiply(value_1_big_dec, value_2_big_dec);
    result_big_dec.scale = value_1_big_dec.scale + value_2_big_dec.scale;
    value_1_big_dec.scale = value_2_big_dec.scale = 0;
    result_big_dec.sign =
        (value_1_big_dec.sign ^ value_2_big_dec.sign) == 0 ? 0 : 1;

    if (check_owerflow(&result_big_dec) == 1 || result_big_dec.scale > 28)
      result_big_dec = compress_mul(result_big_dec);

    if (check_owerflow(&result_big_dec) == 0 && result_big_dec.scale < 29)
      big_decimal_to_decimal(&result_big_dec, result);
    else
      code_result_function = result_big_dec.sign == 1 ? 2 : 1;
  }
  return code_result_function;
}

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int code_result_function = 0;
  if (result != NULL) {
    big_decimal value_1_big_dec = {0};
    big_decimal value_2_big_dec = {0};
    big_decimal result_big_dec = {0};

    decimal_to_big_decimal(&value_1, &value_1_big_dec);
    decimal_to_big_decimal(&value_2, &value_2_big_dec);
    normalization(&value_1_big_dec, &value_2_big_dec);

    if (value_1_big_dec.sign != value_2_big_dec.sign) {
      result_big_dec = add(value_1_big_dec, value_2_big_dec);
      if (value_1_big_dec.sign > value_2_big_dec.sign)
        result_big_dec.sign = 1;
      else
        result_big_dec.sign = 0;
    } else {
      unsigned sign = 0;
      if (compare_without_a_sign(value_2_big_dec, value_1_big_dec) == 1) {
        if ((value_1_big_dec.sign + value_2_big_dec.sign) == 2)
          sign = 0;
        else if ((value_1_big_dec.sign + value_2_big_dec.sign) == 0)
          sign = 1;
        exchange_value(&value_1_big_dec, &value_2_big_dec);
      } else if (compare_without_a_sign(value_2_big_dec, value_1_big_dec) < 2) {
        if ((value_1_big_dec.sign + value_2_big_dec.sign) == 2)
          sign = 1;
        else if ((value_1_big_dec.sign + value_2_big_dec.sign) == 0)
          sign = 0;
      }
      result_big_dec = sub(value_1_big_dec, value_2_big_dec);
      result_big_dec.sign = sign;
    }

    if (check_owerflow(&result_big_dec) == 1 || result_big_dec.scale >= 29)
      result_big_dec = reducing_the_number(result_big_dec);

    if (check_owerflow(&result_big_dec) == 0)
      big_decimal_to_decimal(&result_big_dec, result);
    else
      code_result_function = result_big_dec.sign == 1 ? 2 : 1;
  }
  return code_result_function;
}

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int code_result_function = 0;
  if (result != NULL) {
    big_decimal value_1_big_dec = {0};
    big_decimal value_2_big_dec = {0};

    decimal_to_big_decimal(&value_1, &value_1_big_dec);
    decimal_to_big_decimal(&value_2, &value_2_big_dec);

    big_decimal result_division =
        division(value_1_big_dec, value_2_big_dec, &code_result_function);
    result_division.sign =
        (value_1_big_dec.sign ^ value_2_big_dec.sign) == 1 ? 1 : 0;
    if (check_owerflow(&result_division) == 1 || result_division.scale >= 29)
      result_division = reducing_the_number(result_division);

    if (check_owerflow(&result_division) == 0)
      big_decimal_to_decimal(&result_division, result);
    else
      code_result_function = result_division.sign == 1 ? 2 : 1;
  }
  return code_result_function;
}

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  int flag = 0;
  float min_float = 1.0e-28;
  float max_float = 79228162514264337593543950335.0;
  if (!dst)
    flag = 1;
  else if (src == 0.0f)
    s21_clear_decimal(dst);
  else if (isinf(src) || isnan(src) || fabs(src) < min_float ||
           fabs(src) > max_float) {
    s21_clear_decimal(dst);
    flag = 1;
  } else {
    s21_clear_decimal(dst);
    int sign = signbit(src) ? 1 : 0;
    src = fabsf(src);
    char str[100];
    sprintf(str, "%.6E", src);
    int mantissa;
    int exponent;
    get_mantiss_exp_from_str_float(str, &mantissa, &exponent);
    s21_decimal temp_dec;
    s21_clear_decimal(&temp_dec);
    s21_from_int_to_decimal(mantissa, &temp_dec);
    if (exponent < 0) {
      s21_set_scale(&temp_dec, -exponent);
    } else {
      while (exponent > 0) {
        multiplay_by_ten(temp_dec, &temp_dec);
        exponent--;
      }
    }
    if (!flag) *dst = temp_dec;
    if (sign != 0) {
      s21_set_sign(dst, 1);
    }
  }
  return flag;
}

int s21_truncate(s21_decimal value, s21_decimal *result) {
  int result_function = 0;
  if (result != NULL) {
    big_decimal one_point_zero = {{1, 0, 0, 0, 0, 0}, 0, 0};
    big_decimal value_big_dec = {0};
    big_decimal remainder = {0};
    int sign = 0;

    decimal_to_big_decimal(&value, &value_big_dec);
    sign = value_big_dec.sign;
    normalization(&value_big_dec, &one_point_zero);
    one_point_zero.scale = value_big_dec.scale = 0;

    value_big_dec =
        division_with_remainder(value_big_dec, one_point_zero, &remainder);
    value_big_dec.sign = sign;
    if (check_owerflow(&value_big_dec) == 1)
      result_function = 1;
    else
      big_decimal_to_decimal(&value_big_dec, result);
  }
  return result_function;
}

int s21_round(s21_decimal value, s21_decimal *result) {
  int result_function = 0;
  if (result == NULL)
    result_function = 1;
  else {
    unsigned sign = 0;
    big_decimal point_zero_five = {{5, 0, 0, 0, 0, 0}, 0, 1};
    big_decimal one_point_zero = {{1, 0, 0, 0, 0, 0}, 0, 0};
    big_decimal integer_value_big = {0};
    big_decimal remainder = {0};
    big_decimal value_big = {0};
    s21_decimal integer_value = {0};

    s21_truncate(value, &integer_value);
    decimal_to_big_decimal(&integer_value, &integer_value_big);
    decimal_to_big_decimal(&value, &value_big);

    sign = value_big.sign;
    value_big.sign = integer_value_big.sign = 0;
    big_decimal copy_integer_value = integer_value_big;
    normalization(&value_big, &copy_integer_value);
    remainder = sub(value_big, copy_integer_value);
    normalization(&point_zero_five, &remainder);

    if (compare_without_a_sign(remainder, point_zero_five) == 1)
      integer_value_big = add(integer_value_big, one_point_zero);
    else if (compare_without_a_sign(remainder, point_zero_five) == 0 &&
             get_bit(&integer_value_big, 0) == 1)
      integer_value_big = add(integer_value_big, one_point_zero);

    integer_value_big.sign = sign;

    if (check_owerflow(&integer_value_big) == 1)
      result_function = 1;
    else
      big_decimal_to_decimal(&integer_value_big, result);
  }
  return result_function;
}

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  s21_decimal temp = {0};
  int code_result_function = 0;
  if (dst == NULL)
    code_result_function = 1;
  else {
    *dst = 0;
    s21_truncate(src, &temp);
    if (s21_is_less(temp, s21_dec_min_int) ||
        s21_is_greater(temp, s21_dec_max_int))
      code_result_function = 1;
    else {
      if (get_sign(&temp) > 0)
        *dst |= ~temp.bits[0] + 1;
      else
        *dst |= temp.bits[0];
    }
  }
  return code_result_function;
}

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  big_decimal value = {0};
  decimal_to_big_decimal(&src, &value);
  int res = 1;
  if (dst) {
    *dst = 0;
    double asd = 0;
    for (int i = 95; i != -1; i--) {
      if (get_bit(&value, i)) {
        asd += pow(2.0, i);
      }
    }
    asd /= (pow(10, get_scale(&src)));
    if (get_sign(&src)) {
      asd = -asd;
    }
    *dst = asd;
    res = 0;
  }
  return res;
}

int s21_negate(s21_decimal value, s21_decimal *result) {
  int result_func = 0;
  if (result == NULL)
    result_func = 1;
  else {
    s21_decimal one_point_zero = {{1, 0, 0, 0x80000000}};
    result_func = s21_mul(value, one_point_zero, result);
  }
  return result_func;
}

int s21_is_less(s21_decimal value_1, s21_decimal value_2) {
  return s21_is_greater(value_1, value_2) ^ 1 &&
         s21_is_equal(value_1, value_2) == 0;
}

int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2) {
  return s21_is_less(value_1, value_2) || s21_is_equal(value_1, value_2);
}

int s21_is_equal(s21_decimal value_1, s21_decimal value_2) {
  int result = 0;
  big_decimal value_1_big_dec = {0};
  big_decimal value_2_big_dec = {0};
  decimal_to_big_decimal(&value_1, &value_1_big_dec);
  decimal_to_big_decimal(&value_2, &value_2_big_dec);
  if (value_is_zero(value_1_big_dec) && value_is_zero(value_2_big_dec))
    result = 1;
  else {
    normalization(&value_1_big_dec, &value_2_big_dec);
    if (value_1_big_dec.sign == value_2_big_dec.sign &&
        compare_without_a_sign(value_1_big_dec, value_2_big_dec) == 0)
      result = 1;
  }
  return result;
}

int s21_is_not_equal(s21_decimal value_1, s21_decimal value_2) {
  return !s21_is_equal(value_1, value_2);
}

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  int error = 0;
  if (dst == NULL)
    error = 1;
  else {
    s21_clear_decimal(dst);
    if (src < 0) {
      dst->bits[3] = dst->bits[3] | 1u << 31;
      src = (-1) * src;
    }
    if (src > INT_MAX)
      error = 1;
    else
      dst->bits[0] = src;
  }
  return error;
}

int s21_floor(s21_decimal value, s21_decimal *result) {
  int code_result = 0;
  if (result != NULL) {
    big_decimal temp = {0};
    decimal_to_big_decimal(&value, &temp);
    s21_truncate(value, result);
    if (get_sign(&value) && !s21_is_equal(*result, value) &&
        !value_is_zero(temp)) {
      code_result = s21_sub(*result, (s21_decimal){{1, 0, 0, 0}}, result);
    }
  }
  return code_result;
}
