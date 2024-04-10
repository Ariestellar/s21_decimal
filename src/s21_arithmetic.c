#include "s21_decimal.h"

big_decimal division(big_decimal value_1_big_dec, big_decimal value_2_big_dec,
                     int *code_result_function) {
  big_decimal result_division = {0};
  big_decimal div_with_rem = {0};
  *code_result_function = 0;

  if (value_is_zero(value_2_big_dec) == true) {
    *code_result_function = 3;
  } else {
    normalization(&value_1_big_dec, &value_2_big_dec);

    big_decimal remainder = value_1_big_dec;
    bool flag = true;
    while (result_division.scale < 29 && flag == true) {
      value_1_big_dec = remainder;
      if (value_is_zero(value_1_big_dec))
        flag = false;
      else if (compare_without_a_sign(value_1_big_dec, value_2_big_dec) == -1) {
        ++result_division.scale;
        multiply_x_10(&value_1_big_dec);
        multiply_x_10(&result_division);
      }
      div_with_rem =
          division_with_remainder(value_1_big_dec, value_2_big_dec, &remainder);
      result_division = add(result_division, div_with_rem);
    }
  }

  return result_division;
}

big_decimal add(big_decimal value_1, big_decimal value_2) {
  big_decimal mark_bit = {0};

  while (value_is_zero(value_2) == false) {
    for (int i = 0; i < 6; ++i) {
      mark_bit.bits[i] = (value_1.bits[i] & value_2.bits[i]);
      value_1.bits[i] = value_1.bits[i] ^ value_2.bits[i];
    }
    shift_left(&mark_bit, 1);
    value_2 = mark_bit;
  }
  return value_1;
}

big_decimal multiply(big_decimal value_1, big_decimal value_2) {
  big_decimal result_big_dec = {0};

  while (value_is_zero(value_2) == false) {
    if (get_bit(&value_2, 0) == 1) {
      result_big_dec = add(result_big_dec, value_1);
    }
    shift_left(&value_1, 1);
    shift_right(&value_2, 1);
  }

  return result_big_dec;
}

big_decimal sub(big_decimal value_1, big_decimal value_2) {
  big_decimal mark_bit = {0};
  while (!value_is_zero(value_2)) {
    for (int i = 0; i < 6; ++i) {
      mark_bit.bits[i] = ((~value_1.bits[i]) & value_2.bits[i]);
      value_1.bits[i] = value_1.bits[i] ^ value_2.bits[i];
    }
    shift_left(&mark_bit, 1);
    value_2 = mark_bit;
  }

  return value_1;
}

big_decimal division_with_remainder(big_decimal value_1, big_decimal value_2,
                                    big_decimal *remainder) {
  big_decimal result = {0};
  big_decimal previos_value = {0};
  big_decimal copy_value_2 = {0};

  while (compare_without_a_sign(value_1, value_2) != -1) {
    copy_value_2 = value_2;
    int count = 0;
    big_decimal one_point_zero = {{1, 0, 0, 0, 0, 0}, 0, 0};
    while (compare_without_a_sign(value_1, copy_value_2) != -1 && count < 189) {
      previos_value = copy_value_2;
      shift_left(&copy_value_2, 1);
      ++count;
    }
    shift_left(&one_point_zero, count - 1);
    value_1 = sub(value_1, previos_value);
    result = add(result, one_point_zero);
  }
  *remainder = value_1;

  return result;
}