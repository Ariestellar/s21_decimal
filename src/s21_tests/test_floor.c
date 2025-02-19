#include "test_me.h"
START_TEST(s21_floor_1) {
  int true_res = 0;
  s21_decimal val1 = {{0x6A39186C, 0x388F4BED, 0xA5AA5B38, 0x80170000}};
  s21_decimal *output = NULL;
  int s21_res = s21_floor(val1, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_2) {
  int true_res = 0;
  s21_decimal val1 = {{0x3CCA4239, 0xC266B942, 0x826B5E8E, 0x00160000}};
  s21_decimal result = {{0x003D96BD, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_3) {
  int true_res = 0;
  s21_decimal val1 = {{0xE1C7DC87, 0xAD2A25F6, 0x645EB5E0, 0x001A0000}};
  s21_decimal result = {{0x00000136, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_4) {
  int true_res = 0;
  s21_decimal val1 = {{0xC1D75A3F, 0xB1C98B3F, 0xBE2606D7, 0x00100000}};
  s21_decimal result = {{0x2A261B9A, 0x0000055A, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_5) {
  int true_res = 0;
  s21_decimal val1 = {{0x665FAF66, 0x32103EBC, 0xECCDD76E, 0x800A0000}};
  s21_decimal result = {{0x2573C479, 0x65B4E1F7, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);

  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_6) {
  int true_res = 0;
  s21_decimal val1 = {{0x3C99AF77, 0xC7B269ED, 0xA8954853, 0x00060000}};
  s21_decimal result = {{0x9FFC261D, 0x5B0D0B2B, 0x00000B0C, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_7) {
  int true_res = 0;
  s21_decimal val1 = {{0xD6D5B879, 0xDF589CE6, 0x4B6F3FC0, 0x80000000}};
  s21_decimal result = {{0xD6D5B879, 0xDF589CE6, 0x4B6F3FC0, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_8) {
  int true_res = 0;
  s21_decimal val1 = {{0x80A432EF, 0xD72471F9, 0xF5591476, 0x80030000}};
  s21_decimal result = {{0x10C4C5AF, 0xDCE31BC3, 0x003ECF1F, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_9) {
  int true_res = 0;
  s21_decimal val1 = {{0x77F8E471, 0xEE608E9C, 0x4C4C9A57, 0x80100000}};
  s21_decimal result = {{0xCB3CAFD0, 0x00000225, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_10) {
  int true_res = 0;
  s21_decimal val1 = {{0xE53AE86A, 0x9A28065B, 0x718AF252, 0x00040000}};
  s21_decimal result = {{0x2B500182, 0x241C85BC, 0x0002E81D, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_11) {
  int true_res = 0;
  s21_decimal val1 = {{0x10699A4D, 0x448032BB, 0x065AE826, 0x00170000}};
  s21_decimal result = {{0x00004CD4, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_12) {
  int true_res = 0;
  s21_decimal val1 = {{0x4B34F0D4, 0x9E1A1CB6, 0xEC3AA4D5, 0x80140000}};
  s21_decimal result = {{0x2B939A51, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_13) {
  int true_res = 0;
  s21_decimal val1 = {{0x3D3A210D, 0x020C84ED, 0x91EC66FB, 0x80090000}};
  s21_decimal result = {{0x42ADD382, 0x72BC86AA, 0x00000002, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_14) {
  int true_res = 0;
  s21_decimal val1 = {{0x4C55341E, 0x0EC9E677, 0x27800C5A, 0x000C0000}};
  s21_decimal result = {{0x8BA17CD7, 0x002B6E50, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_15) {
  int true_res = 0;
  s21_decimal val1 = {{0x39D77079, 0x5F7773F9, 0x14C21D65, 0x00010000}};
  s21_decimal result = {{0xB8FBF1A5, 0xEFF25865, 0x02136956, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_16) {
  int true_res = 0;
  s21_decimal val1 = {{0xC4435B6C, 0x98CC14B9, 0x24348329, 0x001B0000}};
  s21_decimal result = {{0x0000000B, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_17) {
  int true_res = 0;
  s21_decimal val1 = {{0xFAEE8965, 0x6A677CB5, 0x1ADDFB25, 0x00040000}};
  s21_decimal result = {{0x01CA9F4C, 0x895AC9B7, 0x0000B013, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_18) {
  int true_res = 0;
  s21_decimal val1 = {{0x92F3832D, 0xF40A9D6B, 0x5CC154B7, 0x80120000}};
  s21_decimal result = {{0xAF080AEB, 0x00000006, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_19) {
  int true_res = 0;
  s21_decimal val1 = {{0xA28AB28D, 0xA50BF511, 0x660789A4, 0x800F0000}};
  s21_decimal result = {{0xFF0AB1EA, 0x00001CB7, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_20) {
  int true_res = 0;
  s21_decimal val1 = {{0xEEEF16B3, 0x556E47D5, 0x8E545020, 0x80180000}};
  s21_decimal result = {{0x0000AC11, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_21) {
  int true_res = 0;
  s21_decimal val1 = {{0x9EC1B64D, 0xF720E8E7, 0x066F3B4F, 0x001A0000}};
  s21_decimal result = {{0x00000013, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_22) {
  int true_res = 0;
  s21_decimal val1 = {{0xF5FC0FA7, 0x6E2D573E, 0x4B188819, 0x800A0000}};
  s21_decimal result = {{0x824BB386, 0x2040DF9B, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_23) {
  int true_res = 0;
  s21_decimal val1 = {{0xBC716198, 0xE039E84E, 0x9D81A693, 0x80150000}};
  s21_decimal result = {{0x02E7CD9D, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_24) {
  int true_res = 0;
  s21_decimal val1 = {{0xD83B6514, 0xC2788F61, 0x54F31653, 0x80140000}};
  s21_decimal result = {{0x0FABA129, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_25) {
  int true_res = 0;
  s21_decimal val1 = {{0x4FA684B4, 0xA6A95AAA, 0xD16FEE6F, 0x800D0000}};
  s21_decimal result = {{0x4DD0A0F5, 0x00170722, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_26) {
  int true_res = 0;
  s21_decimal val1 = {{0xC184B221, 0x50A487DB, 0xFF231262, 0x00160000}};
  s21_decimal result = {{0x00787C2B, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_27) {
  int true_res = 0;
  s21_decimal val1 = {{0x35F28720, 0x9BD21376, 0xFE4633B2, 0x00110000}};
  s21_decimal result = {{0x3950D6E6, 0x000000B7, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_28) {
  int true_res = 0;
  s21_decimal val1 = {{0x35599A83, 0x98740041, 0xA31D1776, 0x800B0000}};
  s21_decimal result = {{0x01A23D15, 0x07017414, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_29) {
  int true_res = 0;
  s21_decimal val1 = {{0xEB395932, 0x95227E8D, 0x051FC9E7, 0x80060000}};
  s21_decimal result = {{0x5D3A8080, 0xF82985C0, 0x00000055, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_30) {
  int true_res = 0;
  s21_decimal val1 = {{0xFA7EDE69, 0x384F672E, 0x7AE90182, 0x80030000}};
  s21_decimal result = {{0x26A686E1, 0xA04FF38F, 0x001F770A, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_31) {
  int true_res = 0;
  s21_decimal val1 = {{0xE9520DBF, 0xFF4C9859, 0xBB887525, 0x80110000}};
  s21_decimal result = {{0x21BD4F2B, 0x00000087, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_32) {
  int true_res = 0;
  s21_decimal val1 = {{0x9DFD130C, 0x3859BE88, 0x74142ABD, 0x00140000}};
  s21_decimal result = {{0x1569AA4E, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_33) {
  int true_res = 0;
  s21_decimal val1 = {{0xDB12E6C3, 0x249FF1ED, 0x54A9C021, 0x80110000}};
  s21_decimal result = {{0x01954977, 0x0000003D, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_34) {
  int true_res = 0;
  s21_decimal val1 = {{0x3F792E1A, 0xB56795CD, 0xBE2F14EF, 0x80030000}};
  s21_decimal result = {{0x96D8F404, 0x977A3730, 0x0030AFE4, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_35) {
  int true_res = 0;
  s21_decimal val1 = {{0xBB07BBC2, 0xA0CCAC63, 0x344FFFE3, 0x80070000}};
  s21_decimal result = {{0x483BA987, 0xC40C0451, 0x00000057, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_36) {
  int true_res = 0;
  s21_decimal val1 = {{0x038CBC99, 0xB2D8701B, 0x199F3CF6, 0x001B0000}};
  s21_decimal result = {{0x00000007, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_37) {
  int true_res = 0;
  s21_decimal val1 = {{0x096CE85B, 0xACD8DD0F, 0x853B241B, 0x80040000}};
  s21_decimal result = {{0x76C26446, 0x8F3FD11F, 0x00036924, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_38) {
  int true_res = 0;
  s21_decimal val1 = {{0x714C7506, 0xBBBE2478, 0xF5A6DB4E, 0x80100000}};
  s21_decimal result = {{0x1B8F0F34, 0x000006EA, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_39) {
  int true_res = 0;
  s21_decimal val1 = {{0x9B2A024F, 0xCCE56988, 0xA90396FA, 0x80140000}};
  s21_decimal result = {{0x1F2D7629, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_40) {
  int true_res = 0;
  s21_decimal val1 = {{0xBEE9EEEB, 0x41DC65B6, 0x8F50802B, 0x800A0000}};
  s21_decimal result = {{0xE23D2C7F, 0x3D8D974E, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_41) {
  int true_res = 0;
  s21_decimal val1 = {{0xD013D102, 0x41946EBD, 0x37815102, 0x80160000}};
  s21_decimal result = {{0x001A3629, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_42) {
  int true_res = 0;
  s21_decimal val1 = {{0x103F7399, 0x927E0530, 0x838D84F1, 0x001B0000}};
  s21_decimal result = {{0x00000028, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_43) {
  int true_res = 0;
  s21_decimal val1 = {{0x81018250, 0x968099DB, 0xC57006D1, 0x80060000}};
  s21_decimal result = {{0x56BA40EA, 0x740D686A, 0x00000CF0, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_44) {
  int true_res = 0;
  s21_decimal val1 = {{0x30CF334A, 0x19FC11C6, 0x0735855A, 0x00030000}};
  s21_decimal result = {{0x30B055CF, 0x0EDFBD75, 0x0001D874, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_45) {
  int true_res = 0;
  s21_decimal val1 = {{0x40F8BE0F, 0xEF8BC745, 0x09976DA3, 0x00010000}};
  s21_decimal result = {{0x534C1301, 0xCB2793ED, 0x00F58AF6, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_46) {
  int true_res = 0;
  s21_decimal val1 = {{0xB697D9AC, 0xA9CFDD48, 0xF38F74D6, 0x000D0000}};
  s21_decimal result = {{0x794C5013, 0x001AC79D, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_47) {
  int true_res = 0;
  s21_decimal val1 = {{0xB9F0FD0F, 0x97ADC7DA, 0x65DAF232, 0x80010000}};
  s21_decimal result = {{0x45CB4C82, 0xA8C493FC, 0x0A2F7E9E, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_48) {
  int true_res = 0;
  s21_decimal val1 = {{0xED0DF6AE, 0xE2F8945A, 0x656918F3, 0x00180000}};
  s21_decimal result = {{0x00007A99, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_49) {
  int true_res = 0;
  s21_decimal val1 = {{0xF1CAF19E, 0xD804351B, 0x43EDB258, 0x80090000}};
  s21_decimal result = {{0xAC30AD61, 0x23C02DB0, 0x00000001, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_50) {
  int true_res = 0;
  s21_decimal val1 = {{0x9713F72B, 0xA62C293C, 0xA7F5DDB1, 0x80110000}};
  s21_decimal result = {{0x073A4BF5, 0x00000079, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_51) {
  int true_res = 0;
  s21_decimal val1 = {{0x08D7E750, 0xE6D51D34, 0xD968543D, 0x800F0000}};
  s21_decimal result = {{0xDD2A6D95, 0x00003D31, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_52) {
  int true_res = 0;
  s21_decimal val1 = {{0x36E6AFC9, 0x13DFE9DF, 0xB43897A6, 0x80030000}};
  s21_decimal result = {{0x07FDABB3, 0xB7D3EF98, 0x002E22F7, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_53) {
  int true_res = 0;
  s21_decimal val1 = {{0x102F4D7F, 0xAD951671, 0x6896F1B9, 0x00150000}};
  s21_decimal result = {{0x01EDE919, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_54) {
  int true_res = 0;
  s21_decimal val1 = {{0x0AB212E8, 0xDF06FDDE, 0xB76A2283, 0x00050000}};
  s21_decimal result = {{0xCB281615, 0xDC9ED723, 0x00007833, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_55) {
  int true_res = 0;
  s21_decimal val1 = {{0x4E6506EA, 0x2D97C9FB, 0x6EA828E7, 0x00170000}};
  s21_decimal result = {{0x000539C2, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_56) {
  int true_res = 0;
  s21_decimal val1 = {{0x0E772573, 0x4E0C6E6E, 0x25B6425A, 0x00170000}};
  s21_decimal result = {{0x0001C7E8, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_57) {
  int true_res = 0;
  s21_decimal val1 = {{0xB46003A2, 0x5A51207B, 0xDAB5E591, 0x00060000}};
  s21_decimal result = {{0x341DCCAD, 0x5A9771AD, 0x00000E55, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_58) {
  int true_res = 0;
  s21_decimal val1 = {{0x5708D983, 0x6307ECF4, 0xB2B6AA64, 0x00110000}};
  s21_decimal result = {{0xC6D431B6, 0x00000080, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_59) {
  int true_res = 0;
  s21_decimal val1 = {{0x9AE578E5, 0xFCFD6650, 0x1E1A18AF, 0x80070000}};
  s21_decimal result = {{0x832B4988, 0x80AF378B, 0x00000032, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_60) {
  int true_res = 0;
  s21_decimal val1 = {{0x34E58284, 0xD78B332A, 0x353A2BBF, 0x001C0000}};
  s21_decimal result = {{0x00000001, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_61) {
  int true_res = 0;
  s21_decimal val1 = {{0x7845B2E3, 0x36BF2C49, 0x22E22878, 0x80080000}};
  s21_decimal result = {{0x0EF547AA, 0xDA3B5E84, 0x00000005, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_62) {
  int true_res = 0;
  s21_decimal val1 = {{0x4B276D28, 0x8FD4A2F6, 0x89FE5E87, 0x80100000}};
  s21_decimal result = {{0x5951459C, 0x000003E2, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_63) {
  int true_res = 0;
  s21_decimal val1 = {{0xA8A97301, 0x47CA8835, 0x66699F09, 0x80120000}};
  s21_decimal result = {{0x612DBFC9, 0x00000007, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_64) {
  int true_res = 0;
  s21_decimal val1 = {{0x429F2B02, 0x7869D565, 0xD2426DB6, 0x80070000}};
  s21_decimal result = {{0xF1D8C8F4, 0xC1C308F1, 0x00000160, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_65) {
  int true_res = 0;
  s21_decimal val1 = {{0x2BD5BDE0, 0xB3452FCE, 0xFD379A8F, 0x00060000}};
  s21_decimal result = {{0x82B71606, 0x479A232D, 0x00001098, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_66) {
  int true_res = 0;
  s21_decimal val1 = {{0x150FDA19, 0x864CA298, 0x6FA99F32, 0x00110000}};
  s21_decimal result = {{0x761C81DB, 0x00000050, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_67) {
  int true_res = 0;
  s21_decimal val1 = {{0xA0312E1F, 0xDB4BBBEA, 0x0D0839A3, 0x80120000}};
  s21_decimal result = {{0xF0667DDC, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_68) {
  int true_res = 0;
  s21_decimal val1 = {{0x465CED8D, 0x1FB961D5, 0xB09F0B07, 0x00070000}};
  s21_decimal result = {{0xB91A20B2, 0x52412167, 0x00000128, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_69) {
  int true_res = 0;
  s21_decimal val1 = {{0x77AF5B77, 0xDC581EA8, 0xE6F0F0C2, 0x00170000}};
  s21_decimal result = {{0x000AE7E8, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_70) {
  int true_res = 0;
  s21_decimal val1 = {{0xFD87C93C, 0x5189790D, 0xEDD70C4E, 0x80190000}};
  s21_decimal result = {{0x00001CC1, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_71) {
  int true_res = 0;
  s21_decimal val1 = {{0x8DFD7AFB, 0xDCFCEA5B, 0x585C2FE5, 0x000D0000}};
  s21_decimal result = {{0xA9EB7F71, 0x0009B71D, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_72) {
  int true_res = 0;
  s21_decimal val1 = {{0x7ADB70E1, 0xF8B4D379, 0xB9E6611E, 0x001C0000}};
  s21_decimal result = {{0x00000005, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_73) {
  int true_res = 0;
  s21_decimal val1 = {{0x861107F5, 0xEE64405D, 0x2DEC6F76, 0x00140000}};
  s21_decimal result = {{0x0878ADF7, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_74) {
  int true_res = 0;
  s21_decimal val1 = {{0x1FC21085, 0xC3595AE9, 0x7281C248, 0x00130000}};
  s21_decimal result = {{0xD33A5743, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_75) {
  int true_res = 0;
  s21_decimal val1 = {{0xFCA54889, 0x7DBC8F05, 0x2FE21242, 0x00050000}};
  s21_decimal result = {{0xB8A9BACA, 0x731A9E42, 0x00001F61, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_76) {
  int true_res = 0;
  s21_decimal val1 = {{0x8870AD46, 0x43660E3F, 0x75900A77, 0x80170000}};
  s21_decimal result = {{0x00058D3F, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_77) {
  int true_res = 0;
  s21_decimal val1 = {{0x24B0624B, 0x97F296CC, 0xF8D01F9E, 0x00030000}};
  s21_decimal result = {{0x55075829, 0x268D4C70, 0x003FB235, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_78) {
  int true_res = 0;
  s21_decimal val1 = {{0x39FC023F, 0xB57588A1, 0xCC1CA252, 0x80050000}};
  s21_decimal result = {{0xF0D91296, 0x4948CCC5, 0x000085C4, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_79) {
  int true_res = 0;
  s21_decimal val1 = {{0x78D83423, 0x9EB4E734, 0x2D5AA555, 0x00190000}};
  s21_decimal result = {{0x0000057B, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_80) {
  int true_res = 0;
  s21_decimal val1 = {{0x8FA9CFCB, 0x699A66A0, 0x9783161B, 0x801A0000}};
  s21_decimal result = {{0x000001D5, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_81) {
  int true_res = 0;
  s21_decimal val1 = {{0xD71EBCEE, 0x0269E79C, 0x9AEB38F6, 0x80150000}};
  s21_decimal result = {{0x02DB9563, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_82) {
  int true_res = 0;
  s21_decimal val1 = {{0x9CF09787, 0xA8E89556, 0x47A7D68A, 0x000D0000}};
  s21_decimal result = {{0x238DD81E, 0x0007E0ED, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_83) {
  int true_res = 0;
  s21_decimal val1 = {{0xAF44DBDA, 0xBEF590CD, 0xC339AD16, 0x80050000}};
  s21_decimal result = {{0x0D0F70A8, 0x5EAD032B, 0x00007FF1, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_84) {
  int true_res = 0;
  s21_decimal val1 = {{0x6109D059, 0xEF601B43, 0x2992A7C0, 0x00040000}};
  s21_decimal result = {{0x5D10D1F7, 0xB4A85461, 0x00011073, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_85) {
  int true_res = 0;
  s21_decimal val1 = {{0xEEB45473, 0x74FB671A, 0xBBA9AC82, 0x80010000}};
  s21_decimal result = {{0x7E453BA6, 0xD87F8A4F, 0x12C42AD9, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_86) {
  int true_res = 0;
  s21_decimal val1 = {{0x1333D7F4, 0x559704A4, 0x25706084, 0x80150000}};
  s21_decimal result = {{0x00B0CCF1, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_87) {
  int true_res = 0;
  s21_decimal val1 = {{0xCA0E2637, 0xFA19F77E, 0xCCFB1B73, 0x00060000}};
  s21_decimal result = {{0xDE4C3CC1, 0x0235716E, 0x00000D6F, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_88) {
  int true_res = 0;
  s21_decimal val1 = {{0x4BD2D67D, 0xC81F565C, 0xB7E0F15C, 0x80000000}};
  s21_decimal result = {{0x4BD2D67D, 0xC81F565C, 0xB7E0F15C, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_89) {
  int true_res = 0;
  s21_decimal val1 = {{0xBF16F7E1, 0xA61D23A2, 0x0E0DC651, 0x80060000}};
  s21_decimal result = {{0xCECA9683, 0xC8A49A79, 0x000000EB, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_90) {
  int true_res = 0;
  s21_decimal val1 = {{0x3E5604F8, 0xD8CFEC9A, 0xDD04AE1E, 0x80010000}};
  s21_decimal result = {{0x396F0080, 0x7C14CADC, 0x161A1169, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_91) {
  int true_res = 0;
  s21_decimal val1 = {{0xDDB31BC3, 0x28971744, 0xA6F56294, 0x00040000}};
  s21_decimal result = {{0x0C699E2F, 0xF0F385B6, 0x0004462D, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_92) {
  int true_res = 0;
  s21_decimal val1 = {{0xED083D44, 0x0F6105CC, 0xF4004330, 0x001C0000}};
  s21_decimal result = {{0x00000007, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_93) {
  int true_res = 0;
  s21_decimal val1 = {{0xF5571AA2, 0x939B750E, 0xAD602F80, 0x80020000}};
  s21_decimal result = {{0xA12C641C, 0xD8841D54, 0x01BBD783, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_94) {
  int true_res = 0;
  s21_decimal val1 = {{0x9089E0D2, 0x6DC4A402, 0xF788948E, 0x80020000}};
  s21_decimal result = {{0xBEE2A8A6, 0xC8C7161E, 0x0279AF90, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_95) {
  int true_res = 0;
  s21_decimal val1 = {{0x9B2B6F41, 0xAE392F2F, 0x5B1C1931, 0x00160000}};
  s21_decimal result = {{0x002B067E, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_96) {
  int true_res = 0;
  s21_decimal val1 = {{0xF9CD04CB, 0x72FD8CDE, 0xD187D9D4, 0x000A0000}};
  s21_decimal result = {{0x3A121FF2, 0x59FE23FA, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_97) {
  int true_res = 0;
  s21_decimal val1 = {{0xD3A83322, 0x98A5E569, 0x3EC80D8C, 0x801B0000}};
  s21_decimal result = {{0x00000014, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_98) {
  int true_res = 0;
  s21_decimal val1 = {{0xC42C9CD5, 0xF9CB7974, 0x01B1F387, 0x000B0000}};
  s21_decimal result = {{0x4D726A8B, 0x0012A358, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_99) {
  int true_res = 0;
  s21_decimal val1 = {{0x08FA00E3, 0x546BC213, 0x92ECEE06, 0x00020000}};
  s21_decimal result = {{0x267D6149, 0xA9CDE0A9, 0x01782119, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_100) {
  int true_res = 0;
  s21_decimal val1 = {{0xF4C9EC4F, 0x30C61C61, 0x5E487B3E, 0x00080000}};
  s21_decimal result = {{0x3FABF7E9, 0xD16DFBB9, 0x0000000F, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_101) {
  int true_res = 0;
  s21_decimal val1 = {{0, 0, 0, 0x00010000}};
  s21_decimal result = {{0, 0, 0, 0}};
  s21_decimal output = {{0, 0, 0, 0}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_102) {
  int true_res = 0;
  s21_decimal val1 = {{0, 0, 0, 0x80010000}};
  s21_decimal result = {{0, 0, 0, 0x80000000}};
  s21_decimal output = {{0, 0, 0, 0}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_103) {
  int true_res = 0;
  s21_decimal val1 = {{1, 0, 0, 0x80010000}};
  s21_decimal result = {{0x00000001, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0, 0, 0, 0}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_104) {
  int true_res = 0;
  s21_decimal val1 = {{1, 0, 0, 0x00010000}};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0, 0, 0, 0}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_105) {
  int true_res = 0;
  s21_decimal val1 = {{0, 1, 0, 0x00010000}};
  s21_decimal result = {{0x19999999, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0, 0, 0, 0}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_106) {
  int true_res = 0;
  s21_decimal val1 = {{0, 1, 0, 0x80010000}};
  s21_decimal result = {{0x1999999a, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0, 0, 0, 0}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_107) {
  int true_res = 0;
  s21_decimal val1 = {{0, 0, 1, 0x80010000}};
  s21_decimal result = {{0x9999999a, 0x19999999, 0x00000000, 0x80000000}};
  s21_decimal output = {{0, 0, 0, 0}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_floor_108) {
  int true_res = 0;
  s21_decimal val1 = {{0, 0, 1, 0x00010000}};
  s21_decimal result = {{0x99999999, 0x19999999, 0x00000000, 0x00000000}};
  s21_decimal output = {{0, 0, 0, 0}};
  int s21_res = s21_floor(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

Suite *test_floor(void) {
  Suite *s = suite_create("\033[45m-=S21_FLOOR=-\033[0m");
  TCase *tc = tcase_create("s21_floor_tc");

  tcase_add_test(tc, s21_floor_1);
  tcase_add_test(tc, s21_floor_2);
  tcase_add_test(tc, s21_floor_3);
  tcase_add_test(tc, s21_floor_4);
  tcase_add_test(tc, s21_floor_5);
  tcase_add_test(tc, s21_floor_6);
  tcase_add_test(tc, s21_floor_7);
  tcase_add_test(tc, s21_floor_8);
  tcase_add_test(tc, s21_floor_9);
  tcase_add_test(tc, s21_floor_10);
  tcase_add_test(tc, s21_floor_11);
  tcase_add_test(tc, s21_floor_12);
  tcase_add_test(tc, s21_floor_13);
  tcase_add_test(tc, s21_floor_14);
  tcase_add_test(tc, s21_floor_15);
  tcase_add_test(tc, s21_floor_16);
  tcase_add_test(tc, s21_floor_17);
  tcase_add_test(tc, s21_floor_18);
  tcase_add_test(tc, s21_floor_19);
  tcase_add_test(tc, s21_floor_20);
  tcase_add_test(tc, s21_floor_21);
  tcase_add_test(tc, s21_floor_22);
  tcase_add_test(tc, s21_floor_23);
  tcase_add_test(tc, s21_floor_24);
  tcase_add_test(tc, s21_floor_25);
  tcase_add_test(tc, s21_floor_26);
  tcase_add_test(tc, s21_floor_27);
  tcase_add_test(tc, s21_floor_28);
  tcase_add_test(tc, s21_floor_29);
  tcase_add_test(tc, s21_floor_30);
  tcase_add_test(tc, s21_floor_31);
  tcase_add_test(tc, s21_floor_32);
  tcase_add_test(tc, s21_floor_33);
  tcase_add_test(tc, s21_floor_34);
  tcase_add_test(tc, s21_floor_35);
  tcase_add_test(tc, s21_floor_36);
  tcase_add_test(tc, s21_floor_37);
  tcase_add_test(tc, s21_floor_38);
  tcase_add_test(tc, s21_floor_39);
  tcase_add_test(tc, s21_floor_40);
  tcase_add_test(tc, s21_floor_41);
  tcase_add_test(tc, s21_floor_42);
  tcase_add_test(tc, s21_floor_43);
  tcase_add_test(tc, s21_floor_44);
  tcase_add_test(tc, s21_floor_45);
  tcase_add_test(tc, s21_floor_46);
  tcase_add_test(tc, s21_floor_47);
  tcase_add_test(tc, s21_floor_48);
  tcase_add_test(tc, s21_floor_49);
  tcase_add_test(tc, s21_floor_50);
  tcase_add_test(tc, s21_floor_51);
  tcase_add_test(tc, s21_floor_52);
  tcase_add_test(tc, s21_floor_53);
  tcase_add_test(tc, s21_floor_54);
  tcase_add_test(tc, s21_floor_55);
  tcase_add_test(tc, s21_floor_56);
  tcase_add_test(tc, s21_floor_57);
  tcase_add_test(tc, s21_floor_58);
  tcase_add_test(tc, s21_floor_59);
  tcase_add_test(tc, s21_floor_60);
  tcase_add_test(tc, s21_floor_61);
  tcase_add_test(tc, s21_floor_62);
  tcase_add_test(tc, s21_floor_63);
  tcase_add_test(tc, s21_floor_64);
  tcase_add_test(tc, s21_floor_65);
  tcase_add_test(tc, s21_floor_66);
  tcase_add_test(tc, s21_floor_67);
  tcase_add_test(tc, s21_floor_68);
  tcase_add_test(tc, s21_floor_69);
  tcase_add_test(tc, s21_floor_70);
  tcase_add_test(tc, s21_floor_71);
  tcase_add_test(tc, s21_floor_72);
  tcase_add_test(tc, s21_floor_73);
  tcase_add_test(tc, s21_floor_74);
  tcase_add_test(tc, s21_floor_75);
  tcase_add_test(tc, s21_floor_76);
  tcase_add_test(tc, s21_floor_77);
  tcase_add_test(tc, s21_floor_78);
  tcase_add_test(tc, s21_floor_79);
  tcase_add_test(tc, s21_floor_80);
  tcase_add_test(tc, s21_floor_81);
  tcase_add_test(tc, s21_floor_82);
  tcase_add_test(tc, s21_floor_83);
  tcase_add_test(tc, s21_floor_84);
  tcase_add_test(tc, s21_floor_85);
  tcase_add_test(tc, s21_floor_86);
  tcase_add_test(tc, s21_floor_87);
  tcase_add_test(tc, s21_floor_88);
  tcase_add_test(tc, s21_floor_89);
  tcase_add_test(tc, s21_floor_90);
  tcase_add_test(tc, s21_floor_91);
  tcase_add_test(tc, s21_floor_92);
  tcase_add_test(tc, s21_floor_93);
  tcase_add_test(tc, s21_floor_94);
  tcase_add_test(tc, s21_floor_95);
  tcase_add_test(tc, s21_floor_96);
  tcase_add_test(tc, s21_floor_97);
  tcase_add_test(tc, s21_floor_98);
  tcase_add_test(tc, s21_floor_99);
  tcase_add_test(tc, s21_floor_100);
  tcase_add_test(tc, s21_floor_101);
  tcase_add_test(tc, s21_floor_102);
  tcase_add_test(tc, s21_floor_103);
  tcase_add_test(tc, s21_floor_104);
  tcase_add_test(tc, s21_floor_105);
  tcase_add_test(tc, s21_floor_106);
  tcase_add_test(tc, s21_floor_107);
  tcase_add_test(tc, s21_floor_108);

  suite_add_tcase(s, tc);
  return s;
}
