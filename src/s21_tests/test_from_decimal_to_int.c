#include "test_me.h"

START_TEST(s21_from_decimal_to_int_1) {
  int true_res = 1;
  s21_decimal val1 = {{0x14096470, 0x8024B17B, 0x3E85A728, 0x80040000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_from_decimal_to_int_2) {
  int true_res = 0;
  s21_decimal val1 = {{0xE2866114, 0x2C7841C4, 0x02A4DCC9, 0x801A0000}};
  int result = -8;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_from_decimal_to_int_3) {
  int true_res = 0;
  s21_decimal val1 = {{0xF727D298, 0x2BF7BCA3, 0xBD7D4DD8, 0x00170000}};
  int result = 586441;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_4) {
  int true_res = 0;
  s21_decimal val1 = {{0x704D5EDF, 0x973F341E, 0x6FA88855, 0x801A0000}};
  int result = -345;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_5) {
  int true_res = 1;
  s21_decimal val1 = {{0x5328C40D, 0xE79BFCDF, 0xAA9896CB, 0x00060000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_6) {
  int true_res = 1;
  s21_decimal val1 = {{0x4D9F3E1B, 0xDBCEC234, 0xF5F8BDFC, 0x800D0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_7) {
  int true_res = 0;
  s21_decimal val1 = {{0x7693C708, 0x1CA65A79, 0xC44C4203, 0x80170000}};
  int result = -607512;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_8) {
  int true_res = 1;
  s21_decimal val1 = {{0x8B5036C6, 0x2BF300CF, 0xF79E4287, 0x000A0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_9) {
  int true_res = 1;
  s21_decimal val1 = {{0xF19F4BF7, 0x6DC18597, 0x4538F642, 0x800A0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_10) {
  int true_res = 1;
  s21_decimal val1 = {{0xF67DCC50, 0x7D8D44A3, 0xF2DD1F9A, 0x000C0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_11) {
  int true_res = 0;
  s21_decimal val1 = {{0x3A2A58C9, 0x004CB47B, 0xE6B33F52, 0x00140000}};
  int result = 713982490;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_12) {
  int true_res = 1;
  s21_decimal val1 = {{0xDBA2C5D3, 0xFF7CA645, 0x7B54257E, 0x00080000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_13) {
  int true_res = 0;
  s21_decimal val1 = {{0x7E85626B, 0xCE0FBFB4, 0xFF7975A6, 0x80160000}};
  int result = -7906551;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_14) {
  int true_res = 1;
  s21_decimal val1 = {{0xFC800D0E, 0xC5B947E0, 0xD83244A8, 0x00130000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_15) {
  int true_res = 1;
  s21_decimal val1 = {{0xF133367C, 0x8510180A, 0x75C16349, 0x00050000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_16) {
  int true_res = 1;
  s21_decimal val1 = {{0xC4D963A4, 0x0880015F, 0x67A59830, 0x80010000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_17) {
  int true_res = 0;
  s21_decimal val1 = {{0x99F98123, 0x511E77FD, 0x6D748CC4, 0x00160000}};
  int result = 3387476;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_18) {
  int true_res = 1;
  s21_decimal val1 = {{0xFE0F47C4, 0x02226767, 0x9F122BB0, 0x00030000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_19) {
  int true_res = 1;
  s21_decimal val1 = {{0x89ACD0D9, 0xF6BF2936, 0x27863DC7, 0x00080000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_20) {
  int true_res = 1;
  s21_decimal val1 = {{0xD42872F6, 0x1A9CA8A4, 0xF2372AD7, 0x000A0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_21) {
  int true_res = 0;
  s21_decimal val1 = {{0xF8392764, 0xB3294340, 0x221CFD5B, 0x00150000}};
  int result = 10557536;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_22) {
  int true_res = 0;
  s21_decimal val1 = {{0xF547AF31, 0x598437F3, 0x4E8F3524, 0x001B0000}};
  int result = 24;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_23) {
  int true_res = 0;
  s21_decimal val1 = {{0x0B2154BC, 0x0C564E5A, 0x75D47DE8, 0x801A0000}};
  int result = -364;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_24) {
  int true_res = 1;
  s21_decimal val1 = {{0x442C5B3D, 0x3212B1B8, 0xC7604BAD, 0x00030000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_25) {
  int true_res = 1;
  s21_decimal val1 = {{0x290F3B86, 0x21B469BE, 0x315D4669, 0x80080000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_26) {
  int true_res = 1;
  s21_decimal val1 = {{0xAD595E6D, 0x7D2BD91F, 0x1C1844D0, 0x00050000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_27) {
  int true_res = 0;
  s21_decimal val1 = {{0x537A3A98, 0xA3FFD613, 0x2FA20D7C, 0x80170000}};
  int result = -147417;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_28) {
  int true_res = 0;
  s21_decimal val1 = {{0x697098AB, 0xEE09CB1E, 0xED3B2FCE, 0x801C0000}};
  int result = -7;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_29) {
  int true_res = 1;
  s21_decimal val1 = {{0x0860E9BD, 0x7BD6FBD9, 0xCCD78D13, 0x000B0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_30) {
  int true_res = 1;
  s21_decimal val1 = {{0x89CE5DC5, 0x1A9B7DCA, 0xE4ED2559, 0x80130000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_31) {
  int true_res = 1;
  s21_decimal val1 = {{0x74062163, 0xC8BE6ADD, 0xD077ED17, 0x80000000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_32) {
  int true_res = 0;
  s21_decimal val1 = {{0x981E196F, 0xB9CFC1A3, 0x24F7049D, 0x00140000}};
  int result = 114400868;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_33) {
  int true_res = 1;
  s21_decimal val1 = {{0x7FB2F090, 0xC9886891, 0x41128FD4, 0x800D0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_34) {
  int true_res = 1;
  s21_decimal val1 = {{0x8B543B17, 0xB8501C2C, 0xD53B965F, 0x80050000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_35) {
  int true_res = 0;
  s21_decimal val1 = {{0x86877F52, 0x6ACC29DA, 0x0D604D35, 0x00150000}};
  int result = 4139726;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_36) {
  int true_res = 0;
  s21_decimal val1 = {{0xD4F86D95, 0x243B1A3C, 0x10B190C3, 0x00130000}};
  int result = 516642364;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_37) {
  int true_res = 0;
  s21_decimal val1 = {{0x24D39F84, 0x3E98A64B, 0x86EF7DD5, 0x00160000}};
  int result = 4176051;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_38) {
  int true_res = 1;
  s21_decimal val1 = {{0x13B14685, 0xF1C241EB, 0x42CD6B9B, 0x00060000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_39) {
  int true_res = 1;
  s21_decimal val1 = {{0xCA613D42, 0x0C098834, 0xECABDE06, 0x00080000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_40) {
  int true_res = 0;
  s21_decimal val1 = {{0x4C03EE2A, 0xCFB28B34, 0xEEB042D1, 0x80160000}};
  int result = -7387051;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_41) {
  int true_res = 1;
  s21_decimal val1 = {{0xE8B5D0AF, 0x58D70EF0, 0x1D33AAE0, 0x800D0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_42) {
  int true_res = 1;
  s21_decimal val1 = {{0x2096BBD2, 0x9D13B3B4, 0xD8FD378D, 0x000F0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_43) {
  int true_res = 0;
  s21_decimal val1 = {{0x0EA2437F, 0x76E20EFD, 0xF05B03D5, 0x80150000}};
  int result = -74386432;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_44) {
  int true_res = 1;
  s21_decimal val1 = {{0x89867E4B, 0x9C8D4A15, 0xA3E73B8E, 0x00090000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_45) {
  int true_res = 1;
  s21_decimal val1 = {{0xC77E2B3C, 0x2BE2CB55, 0xCBF3210A, 0x000E0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_46) {
  int true_res = 1;
  s21_decimal val1 = {{0x1ECDDAEE, 0x9D994D3B, 0x2F4B1195, 0x80030000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_47) {
  int true_res = 0;
  s21_decimal val1 = {{0x01CF1040, 0xFFD177D6, 0x609F93D1, 0x80160000}};
  int result = -2990347;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_48) {
  int true_res = 1;
  s21_decimal val1 = {{0x304F4E6A, 0x085440A3, 0x3C14813C, 0x800F0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_49) {
  int true_res = 1;
  s21_decimal val1 = {{0x8746E402, 0x061C9F4C, 0x6FDC9794, 0x800D0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_50) {
  int true_res = 0;
  s21_decimal val1 = {{0xC8CB3496, 0x510CA676, 0x77602A19, 0x00180000}};
  int result = 36944;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_51) {
  int true_res = 1;
  s21_decimal val1 = {{0xDDAEEFA9, 0xC8DB66F9, 0x47EB0C8E, 0x80040000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_52) {
  int true_res = 0;
  s21_decimal val1 = {{0xF43DE7A5, 0x8C8456E7, 0xB9CD916A, 0x80150000}};
  int result = -57503243;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_53) {
  int true_res = 0;
  s21_decimal val1 = {{0x7A1552A4, 0x4BB3947F, 0xE622EF4E, 0x00140000}};
  int result = 712237858;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_54) {
  int true_res = 1;
  s21_decimal val1 = {{0x4B493109, 0x3DFBBC41, 0xB7602F93, 0x000A0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_55) {
  int true_res = 1;
  s21_decimal val1 = {{0xD7386C12, 0xB5DF8C03, 0xFE83563C, 0x800D0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_56) {
  int true_res = 1;
  s21_decimal val1 = {{0xB554001B, 0x71ECBD09, 0x711DFA20, 0x00130000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_57) {
  int true_res = 1;
  s21_decimal val1 = {{0xDF77AC58, 0x9D29E18A, 0x26FC6ADD, 0x000F0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_58) {
  int true_res = 1;
  s21_decimal val1 = {{0x7BE0CB28, 0x4919BCEA, 0x4DA7D469, 0x00130000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_59) {
  int true_res = 1;
  s21_decimal val1 = {{0xCBCA42BB, 0xE4588041, 0xE5B015B2, 0x00000000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_60) {
  int true_res = 1;
  s21_decimal val1 = {{0xF3CFEAEF, 0x0913017B, 0xF3DEDDD1, 0x800A0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_61) {
  int true_res = 1;
  s21_decimal val1 = {{0x209E265F, 0x0C054A6B, 0xDA2B957E, 0x000F0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_62) {
  int true_res = 1;
  s21_decimal val1 = {{0xC3E95093, 0xD3EAF73F, 0x9189D222, 0x00110000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_63) {
  int true_res = 0;
  s21_decimal val1 = {{0x5F5A2479, 0x5BEBE2DD, 0x2451AFFB, 0x80160000}};
  int result = -1124021;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_64) {
  int true_res = 1;
  s21_decimal val1 = {{0x90B1C141, 0xDED1295C, 0x61AFC592, 0x00070000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_65) {
  int true_res = 1;
  s21_decimal val1 = {{0x319FE2AA, 0x63FBDFC9, 0xC40DCEB3, 0x000E0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_66) {
  int true_res = 1;
  s21_decimal val1 = {{0x284223A7, 0x7AD6EFE3, 0x71F4370D, 0x00120000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_67) {
  int true_res = 0;
  s21_decimal val1 = {{0x7214C23B, 0x3FBD80BB, 0xECC5EB36, 0x801B0000}};
  int result = -73;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_68) {
  int true_res = 1;
  s21_decimal val1 = {{0xC934AC33, 0x2D10E593, 0xCAE9F198, 0x80010000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_69) {
  int true_res = 0;
  s21_decimal val1 = {{0xB9F7C037, 0x0834CBD0, 0xB85944EC, 0x801C0000}};
  int result = -5;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_70) {
  int true_res = 1;
  s21_decimal val1 = {{0x5247714F, 0x99F6CEA0, 0xC91BAFAB, 0x00010000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_71) {
  int true_res = 0;
  s21_decimal val1 = {{0x1FD02C7B, 0x74D76779, 0xD84EDA6F, 0x001C0000}};
  int result = 6;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_72) {
  int true_res = 1;
  s21_decimal val1 = {{0x082D6B4B, 0x73B2FED4, 0x1CDD9936, 0x00090000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_73) {
  int true_res = 1;
  s21_decimal val1 = {{0x8D1CFBCB, 0xEDBC1E47, 0x16E24D31, 0x000B0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_74) {
  int true_res = 1;
  s21_decimal val1 = {{0x129F0237, 0xAC932014, 0x26DF042F, 0x80050000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_75) {
  int true_res = 1;
  s21_decimal val1 = {{0x9AC88563, 0xBCA34B10, 0x3ADF5303, 0x00030000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_76) {
  int true_res = 0;
  s21_decimal val1 = {{0x4A52E84C, 0x72E1AAB8, 0x1D60D510, 0x00170000}};
  int result = 90921;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_77) {
  int true_res = 0;
  s21_decimal val1 = {{0xB2B784E8, 0x1F51D8F2, 0xA21B8068, 0x801C0000}};
  int result = -5;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_78) {
  int true_res = 1;
  s21_decimal val1 = {{0xC834E1D6, 0x3B3EA8DA, 0xD896C584, 0x800B0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_79) {
  int true_res = 1;
  s21_decimal val1 = {{0x63C081D7, 0xA6D87CEF, 0x19A61881, 0x80060000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_80) {
  int true_res = 1;
  s21_decimal val1 = {{0x0B6BDF84, 0x86E55496, 0xFFF730B9, 0x80060000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_81) {
  int true_res = 0;
  s21_decimal val1 = {{0x31C3CE95, 0x0031AB38, 0x528CA321, 0x00190000}};
  int result = 2554;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_82) {
  int true_res = 1;
  s21_decimal val1 = {{0x40BDE244, 0xFB5EAC9E, 0x71A98B83, 0x00110000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_83) {
  int true_res = 1;
  s21_decimal val1 = {{0x6D7FB04A, 0xCD486A1A, 0x38B99905, 0x800A0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_84) {
  int true_res = 1;
  s21_decimal val1 = {{0xF3BF4F4E, 0xFEB5D5AA, 0x9F86B583, 0x000C0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_85) {
  int true_res = 0;
  s21_decimal val1 = {{0xA0365FDD, 0x8C3930CC, 0x834E3686, 0x80140000}};
  int result = -406370899;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_86) {
  int true_res = 1;
  s21_decimal val1 = {{0xA3146433, 0x20A9799F, 0x9832FB1A, 0x00080000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_87) {
  int true_res = 1;
  s21_decimal val1 = {{0x5CB72E8E, 0x01F7E0F1, 0x30D02B40, 0x800C0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_88) {
  int true_res = 1;
  s21_decimal val1 = {{0xAE3D1D1B, 0x11B44F6C, 0x3AB84C49, 0x80010000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_89) {
  int true_res = 0;
  s21_decimal val1 = {{0x52ABD9B6, 0x16D27A01, 0x9957EAC9, 0x00190000}};
  int result = 4745;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_90) {
  int true_res = 1;
  s21_decimal val1 = {{0x98D06F69, 0x2FF67F8C, 0x667D36F4, 0x00070000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_91) {
  int true_res = 1;
  s21_decimal val1 = {{0xD091D59B, 0x8C760E30, 0xF948E8E2, 0x000F0000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_92) {
  int true_res = 1;
  s21_decimal val1 = {{0xFDDE695A, 0x19C49610, 0x22C31D85, 0x80110000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_93) {
  int true_res = 1;
  s21_decimal val1 = {{0x5DA63BE1, 0xB74E44C4, 0x6FD0C246, 0x80000000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_94) {
  int true_res = 1;
  s21_decimal val1 = {{0x8C8D7DFF, 0x8A9405CF, 0xD09EB5F9, 0x80090000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_95) {
  int true_res = 1;
  s21_decimal val1 = {{0x5A18EBF5, 0x42DDBC00, 0x119E422C, 0x00070000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_96) {
  int true_res = 1;
  s21_decimal val1 = {{0x97F63EE8, 0x7B996591, 0x7A70CBDD, 0x80090000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_97) {
  int true_res = 1;
  s21_decimal val1 = {{0x835BF69D, 0xA8975B7C, 0xB10F91FD, 0x00020000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_98) {
  int true_res = 1;
  s21_decimal val1 = {{0xBC583896, 0x32E6E97D, 0x0F07A548, 0x80000000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_99) {
  int true_res = 0;
  s21_decimal val1 = {{0x9D7C2BBE, 0x38297C87, 0xED74FE7A, 0x80140000}};
  int result = -734893844;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_100) {
  int true_res = 0;
  s21_decimal val1 = {{0x7FFFFFFF, 0, 0, 0}};
  int result = 0x7FFFFFFF;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_101) {
  int true_res = 0;
  s21_decimal val1 = {{0x7FFFFFFF, 0, 0, 0x80000000}};
  int result = -0x7FFFFFFF;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_102) {
  int true_res = 1;
  s21_decimal val1 = {{0x80000000, 0, 0, 0}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_103) {
  int true_res = 0;
  s21_decimal val1 = {{0x80000000, 0, 0, 0x80000000}};
  int result = -2147483648;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_104) {
  int true_res = 1;
  s21_decimal val1 = {{0x80000001, 0, 0, 0x80000000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_105) {
  int true_res = 1;
  s21_decimal val1 = {{0, 1, 1, 0x80000000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_106) {
  int true_res = 1;
  s21_decimal val1 = {{0, 1, 0, 0x80000000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_from_decimal_to_int_107) {
  int true_res = 1;
  s21_decimal val1 = {{0, 0, 1, 0x80000000}};
  int result = 0;
  int output = 0;
  int s21_res = s21_from_decimal_to_int(val1, &output);
  ck_assert_int_eq(result, output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

Suite *test_from_decimal_to_int(void) {
  Suite *s = suite_create("\033[45m-=S21_FROM_DECIMAL_TO_INT=-\033[0m");
  TCase *tc = tcase_create("s21_from_decimal_to_int_tc");

  tcase_add_test(tc, s21_from_decimal_to_int_1);
  tcase_add_test(tc, s21_from_decimal_to_int_2);
  tcase_add_test(tc, s21_from_decimal_to_int_3);
  tcase_add_test(tc, s21_from_decimal_to_int_4);
  tcase_add_test(tc, s21_from_decimal_to_int_5);
  tcase_add_test(tc, s21_from_decimal_to_int_6);
  tcase_add_test(tc, s21_from_decimal_to_int_7);
  tcase_add_test(tc, s21_from_decimal_to_int_8);
  tcase_add_test(tc, s21_from_decimal_to_int_9);
  tcase_add_test(tc, s21_from_decimal_to_int_10);
  tcase_add_test(tc, s21_from_decimal_to_int_11);
  tcase_add_test(tc, s21_from_decimal_to_int_12);
  tcase_add_test(tc, s21_from_decimal_to_int_13);
  tcase_add_test(tc, s21_from_decimal_to_int_14);
  tcase_add_test(tc, s21_from_decimal_to_int_15);
  tcase_add_test(tc, s21_from_decimal_to_int_16);
  tcase_add_test(tc, s21_from_decimal_to_int_17);
  tcase_add_test(tc, s21_from_decimal_to_int_18);
  tcase_add_test(tc, s21_from_decimal_to_int_19);
  tcase_add_test(tc, s21_from_decimal_to_int_20);
  tcase_add_test(tc, s21_from_decimal_to_int_21);
  tcase_add_test(tc, s21_from_decimal_to_int_22);
  tcase_add_test(tc, s21_from_decimal_to_int_23);
  tcase_add_test(tc, s21_from_decimal_to_int_24);
  tcase_add_test(tc, s21_from_decimal_to_int_25);
  tcase_add_test(tc, s21_from_decimal_to_int_26);
  tcase_add_test(tc, s21_from_decimal_to_int_27);
  tcase_add_test(tc, s21_from_decimal_to_int_28);
  tcase_add_test(tc, s21_from_decimal_to_int_29);
  tcase_add_test(tc, s21_from_decimal_to_int_30);
  tcase_add_test(tc, s21_from_decimal_to_int_31);
  tcase_add_test(tc, s21_from_decimal_to_int_32);
  tcase_add_test(tc, s21_from_decimal_to_int_33);
  tcase_add_test(tc, s21_from_decimal_to_int_34);
  tcase_add_test(tc, s21_from_decimal_to_int_35);
  tcase_add_test(tc, s21_from_decimal_to_int_36);
  tcase_add_test(tc, s21_from_decimal_to_int_37);
  tcase_add_test(tc, s21_from_decimal_to_int_38);
  tcase_add_test(tc, s21_from_decimal_to_int_39);
  tcase_add_test(tc, s21_from_decimal_to_int_40);
  tcase_add_test(tc, s21_from_decimal_to_int_41);
  tcase_add_test(tc, s21_from_decimal_to_int_42);
  tcase_add_test(tc, s21_from_decimal_to_int_43);
  tcase_add_test(tc, s21_from_decimal_to_int_44);
  tcase_add_test(tc, s21_from_decimal_to_int_45);
  tcase_add_test(tc, s21_from_decimal_to_int_46);
  tcase_add_test(tc, s21_from_decimal_to_int_47);
  tcase_add_test(tc, s21_from_decimal_to_int_48);
  tcase_add_test(tc, s21_from_decimal_to_int_49);
  tcase_add_test(tc, s21_from_decimal_to_int_50);
  tcase_add_test(tc, s21_from_decimal_to_int_51);
  tcase_add_test(tc, s21_from_decimal_to_int_52);
  tcase_add_test(tc, s21_from_decimal_to_int_53);
  tcase_add_test(tc, s21_from_decimal_to_int_54);
  tcase_add_test(tc, s21_from_decimal_to_int_55);
  tcase_add_test(tc, s21_from_decimal_to_int_56);
  tcase_add_test(tc, s21_from_decimal_to_int_57);
  tcase_add_test(tc, s21_from_decimal_to_int_58);
  tcase_add_test(tc, s21_from_decimal_to_int_59);
  tcase_add_test(tc, s21_from_decimal_to_int_60);
  tcase_add_test(tc, s21_from_decimal_to_int_61);
  tcase_add_test(tc, s21_from_decimal_to_int_62);
  tcase_add_test(tc, s21_from_decimal_to_int_63);
  tcase_add_test(tc, s21_from_decimal_to_int_64);
  tcase_add_test(tc, s21_from_decimal_to_int_65);
  tcase_add_test(tc, s21_from_decimal_to_int_66);
  tcase_add_test(tc, s21_from_decimal_to_int_67);
  tcase_add_test(tc, s21_from_decimal_to_int_68);
  tcase_add_test(tc, s21_from_decimal_to_int_69);
  tcase_add_test(tc, s21_from_decimal_to_int_70);
  tcase_add_test(tc, s21_from_decimal_to_int_71);
  tcase_add_test(tc, s21_from_decimal_to_int_72);
  tcase_add_test(tc, s21_from_decimal_to_int_73);
  tcase_add_test(tc, s21_from_decimal_to_int_74);
  tcase_add_test(tc, s21_from_decimal_to_int_75);
  tcase_add_test(tc, s21_from_decimal_to_int_76);
  tcase_add_test(tc, s21_from_decimal_to_int_77);
  tcase_add_test(tc, s21_from_decimal_to_int_78);
  tcase_add_test(tc, s21_from_decimal_to_int_79);
  tcase_add_test(tc, s21_from_decimal_to_int_80);
  tcase_add_test(tc, s21_from_decimal_to_int_81);
  tcase_add_test(tc, s21_from_decimal_to_int_82);
  tcase_add_test(tc, s21_from_decimal_to_int_83);
  tcase_add_test(tc, s21_from_decimal_to_int_84);
  tcase_add_test(tc, s21_from_decimal_to_int_85);
  tcase_add_test(tc, s21_from_decimal_to_int_86);
  tcase_add_test(tc, s21_from_decimal_to_int_87);
  tcase_add_test(tc, s21_from_decimal_to_int_88);
  tcase_add_test(tc, s21_from_decimal_to_int_89);
  tcase_add_test(tc, s21_from_decimal_to_int_90);
  tcase_add_test(tc, s21_from_decimal_to_int_91);
  tcase_add_test(tc, s21_from_decimal_to_int_92);
  tcase_add_test(tc, s21_from_decimal_to_int_93);
  tcase_add_test(tc, s21_from_decimal_to_int_94);
  tcase_add_test(tc, s21_from_decimal_to_int_95);
  tcase_add_test(tc, s21_from_decimal_to_int_96);
  tcase_add_test(tc, s21_from_decimal_to_int_97);
  tcase_add_test(tc, s21_from_decimal_to_int_98);
  tcase_add_test(tc, s21_from_decimal_to_int_99);
  tcase_add_test(tc, s21_from_decimal_to_int_100);
  tcase_add_test(tc, s21_from_decimal_to_int_101);
  tcase_add_test(tc, s21_from_decimal_to_int_102);
  tcase_add_test(tc, s21_from_decimal_to_int_103);
  tcase_add_test(tc, s21_from_decimal_to_int_104);
  tcase_add_test(tc, s21_from_decimal_to_int_105);
  tcase_add_test(tc, s21_from_decimal_to_int_106);
  tcase_add_test(tc, s21_from_decimal_to_int_107);

  suite_add_tcase(s, tc);
  return s;
}
