#include "s21_decimal.h"

big_decimal compress_mul(big_decimal value) {
  big_decimal div_10 = {{10, 0, 0, 0, 0, 0}, 0, 0};
  int i = value.scale;
  big_decimal remainder = {0};
  unsigned sign = value.sign;
  while ((i > 0 && check_owerflow(&value) == 1) || (i > 28)) {
    value = division_with_remainder(value, div_10, &remainder);
    --i;
  }
  value = banking_rounding(value, remainder);
  value.sign = sign;
  value.scale = i;
  return value;
}

void set_bit(big_decimal *value, unsigned index, unsigned bit_value) {
  unsigned temp = 1;
  unsigned count_bit = index / (sizeof(unsigned) * 8);
  index -= 32 * count_bit;
  temp <<= index;
  if (bit_value == 1)
    value->bits[count_bit] |= temp;
  else {
    temp = ~temp;
    value->bits[count_bit] &= temp;
  }
}
unsigned get_bit(big_decimal *value, unsigned index) {
  unsigned result = 1;
  unsigned count_bit = index / (sizeof(unsigned) * 8);
  index -= 32 * count_bit;
  result <<= index;
  result &= value->bits[count_bit];
  (result > 0) ? result = 1 : 0;
  return result;
}

bool value_is_zero(big_decimal value) {
  bool result_is_zero = true;
  for (int i = 0; i < 6; ++i) {
    if (value.bits[i] != 0) result_is_zero = false;
  }
  return result_is_zero;
}

unsigned get_scale(s21_decimal *value) {
  unsigned scale = value->bits[3];
  scale >>= 16;
  scale &= 0b11111111;
  return scale;
}
unsigned get_sign(s21_decimal *value) {
  unsigned sign = value->bits[3];
  sign >>= 31;
  return sign;
}
void multiply_x_10(big_decimal *value) {
  big_decimal temp = *value;
  shift_left(&temp, 3);
  shift_left(value, 1);
  *value = add(*value, temp);
}

void normalization(big_decimal *value_1, big_decimal *value_2) {
  big_decimal *ptr_value_1 = value_1;
  big_decimal *ptr_value_2 = value_2;
  big_decimal *ptr_temp;

  if (value_2->scale < value_1->scale) {
    ptr_temp = value_1;
    ptr_value_1 = ptr_value_2;
    ptr_value_2 = ptr_temp;
  }
  while (ptr_value_1->scale != ptr_value_2->scale) {
    ++ptr_value_1->scale;
    multiply_x_10(ptr_value_1);
  }
}

void decimal_to_big_decimal(s21_decimal *value, big_decimal *value_big_dec) {
  for (int i = 0; i < 3; ++i) {
    value_big_dec->bits[i] = value->bits[i];
  }
  value_big_dec->scale = get_scale(value);
  value_big_dec->sign = get_sign(value);
}
void big_decimal_to_decimal(big_decimal *value_big_dec, s21_decimal *result) {
  for (int i = 0; i < 3; ++i) {
    result->bits[i] = value_big_dec->bits[i];
  }
  result->bits[3] = value_big_dec->sign << 31;
  result->bits[3] += value_big_dec->scale << 16;
}

void exchange_value(big_decimal *value_1, big_decimal *value_2) {
  big_decimal temp = *value_1;
  *value_1 = *value_2;
  *value_2 = temp;
}

void shift_left(big_decimal *value, unsigned shift) {
  unsigned previos_bit = 0;
  unsigned current_bit = 0;

  for (unsigned i = 0; i < shift; ++i) {
    for (int j = 0; j < 6; ++j) {
      current_bit = value->bits[j];

      value->bits[j] <<= 1;
      previos_bit >>= 32 - 1;

      value->bits[j] |= previos_bit;
      previos_bit = current_bit;
    }
  }
}
void shift_right(big_decimal *value, unsigned shift) {
  unsigned previos_bit = 0;
  unsigned current_bit = 0;

  for (unsigned i = 0; i < shift; ++i) {
    for (int j = 5; j >= 0; --j) {
      current_bit = value->bits[j];

      value->bits[j] >>= 1;
      previos_bit <<= 32 - 1;

      value->bits[j] |= previos_bit;
      previos_bit = current_bit;
    }
  }
}

big_decimal reducing_the_number(big_decimal value) {
  bool flag = true;
  big_decimal div_10 = {{10, 0, 0, 0, 0, 0}, 0, 0};
  big_decimal copy_value = value;
  big_decimal remainder = {0};
  int j = 0;
  unsigned sign = value.sign;
  for (int i = value.scale - 1; i >= 0 && flag == true; --i) {
    if (check_owerflow(&value) == 1 || value.scale >= 29) {
      value = copy_value;
      value = division_with_remainder(value, div_10, &remainder);
      value.scale = copy_value.scale - 1;
      copy_value = value;
      value = banking_rounding(value, remainder);
      ++j;
    } else
      flag = false;
  }
  value.sign = sign;
  if (j > 28) value.bits[3] = 1;
  return value;
}

int check_owerflow(big_decimal *value) {
  unsigned result = 0;

  unsigned check =
      (value->bits[3] > 0) + (value->bits[4] > 0) + (value->bits[5] > 0);
  if (check > 0) result = 1;
  if (value_is_zero(*value) == true) value->scale = 0;

  return result;
}

big_decimal banking_rounding(big_decimal value, big_decimal remainder) {
  big_decimal zero_point_5 = {{5, 0, 0, 0, 0, 0}, 0, 1};
  big_decimal one_point_zero = {{1, 0, 0, 0, 0, 0}, 0, 0};

  if (compare_without_a_sign(remainder, zero_point_5) == 1)
    value = add(value, one_point_zero);
  else if (compare_without_a_sign(remainder, zero_point_5) == 0 &&
           get_bit(&value, 0) == 1)
    value = add(value, one_point_zero);

  return value;
}

int s21_clear_decimal(s21_decimal *value) {
  value->bits[0] = 0;
  value->bits[1] = 0;
  value->bits[2] = 0;
  value->bits[3] = 0;
  return 0;
}

int multiplay_by_ten(s21_decimal dec, s21_decimal *res) {
  unsigned long long tmp_u;
  unsigned int remainder = 0;
  for (int i = 0; i < 3; i++) {
    tmp_u = dec.bits[i];
    tmp_u *= 10;
    tmp_u += remainder;
    remainder = tmp_u >> 32;
    res->bits[i] = UINT_MAX & tmp_u;
  }
  return 0;
}

void s21_set_sign(s21_decimal *value, int sign) {
  if (value) {
    value->bits[3] &= ~0x80000000;
    if (sign != 0) {
      value->bits[3] |= 0x80000000;
    }
  }
}

void s21_set_scale(s21_decimal *dec, int value) {
  if (dec != NULL && value <= 28) {
    dec->bits[3] &= 0x80000000;
    dec->bits[3] |= (value << 16);
  }
}

int compare_without_a_sign(big_decimal value_1, big_decimal value_2) {
  int result = 0;
  int count = 5;
  while (count >= 0 && result == 0) {
    if (value_1.bits[count] > value_2.bits[count])
      result = 1;
    else if (value_1.bits[count] < value_2.bits[count])
      result = -1;
    --count;
  }
  return result;
}

void get_mantiss_exp_from_str_float(char *str, int *mantissa, int *exponent) {
  char tempStr[100];
  strcpy(tempStr, str);
  char *pos_e = strchr(tempStr, 'E');
  if (pos_e != NULL) {
    sscanf(pos_e + 1, "%d", exponent);
    *pos_e = '\0';
  }

  char *pos_dot = strchr(tempStr, '.');
  if (pos_dot != NULL) {
    memmove(pos_dot, pos_dot + 1, strlen(pos_dot));
  }
  *mantissa = atoi(tempStr);

  if (pos_dot > tempStr) {
    *exponent -= strlen(tempStr) - (pos_dot - tempStr);
  }

  while (*mantissa % 10 == 0 && *mantissa != 0) {
    *mantissa /= 10;
    (*exponent)++;
  }

  if (*exponent < -28) {
    int last_digit = 0;
    while (*exponent < -28) {
      last_digit = *mantissa % 10;
      *mantissa /= 10;
      *exponent += 1;
    }
    if (last_digit >= 5) *mantissa += 1;
  }
}