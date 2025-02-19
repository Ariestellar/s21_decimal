#include "test_me.h"

START_TEST(s21_mul_1) {
  int true_res = 0;
  s21_decimal val1 = {{0x3D825325, 0x9365F717, 0xB192CF7A, 0x80180000}};
  s21_decimal val2 = {{0xBA6F5471, 0xD5FDB24C, 0x009ADF08, 0x000D0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xF3DBF3B7, 0x1AC4C297, 0x213F2780, 0x800A0000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_2) {
  int true_res = 2;
  s21_decimal val1 = {{0x89BF788F, 0x9C8AC330, 0xD871D122, 0x80050000}};
  s21_decimal val2 = {{0x519046D2, 0x44360B66, 0xC183B229, 0x00010000}};
  // s21_decimal output = {0} = {{0x003200000, 0x000042000, 0x002300000,
  // 0x7FFFFFFF}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_3) {
  int true_res = 0;
  s21_decimal val1 = {{0x8600773C, 0x9D0F0DA0, 0x6971E35D, 0x80090000}};
  s21_decimal val2 = {{0x9464780A, 0xFB11F064, 0x8F9068FF, 0x801A0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x87179976, 0x2265CE23, 0x2ED9A339, 0x00060000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_4) {
  int true_res = 0;
  s21_decimal val1 = {{0x423214DA, 0xA960297A, 0x311CF3A6, 0x800C0000}};
  s21_decimal val2 = {{0xC329DD95, 0xDA1E17CA, 0xC33A0FE1, 0x80190000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x0F5F583D, 0xB945AFEC, 0x1DAC8C69, 0x00080000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_5) {
  int true_res = 1;
  s21_decimal val1 = {{0x50FF5F69, 0xDA07C88D, 0x66211725, 0x800B0000}};
  s21_decimal val2 = {{0xBD45DF4F, 0x39752B0D, 0x860636A5, 0x800E0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_6) {
  int true_res = 0;
  s21_decimal val1 = {{0xA5F30943, 0xFA92434D, 0x6BB4E66F, 0x00180000}};
  s21_decimal val2 = {{0x7F00892B, 0x032CF68A, 0xB46B19B6, 0x00110000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x2E8F2873, 0x413E6C47, 0x3C23D1B1, 0x000C0000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_7) {
  int true_res = 0;
  s21_decimal val1 = {{0xD5485BED, 0x57F71E22, 0x1CC40BFE, 0x001B0000}};
  s21_decimal val2 = {{0xABB7955C, 0xE5DDB27B, 0xD4E1BE3E, 0x800E0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x3CBB18D4, 0x539F23F3, 0xBD851628, 0x800D0000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_8) {
  int true_res = 2;
  s21_decimal val1 = {{0x58029FC8, 0xF6F17607, 0x3C057E8C, 0x00030000}};
  s21_decimal val2 = {{0x76C27CDA, 0x27B29AF3, 0x54C1DA90, 0x80050000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_9) {
  int true_res = 2;
  s21_decimal val1 = {{0xDD0D1E7C, 0xB3A266AB, 0x056915A3, 0x00050000}};
  s21_decimal val2 = {{0xD19B1143, 0x0B406C17, 0xD3A634D5, 0x80070000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_10) {
  int true_res = 1;
  s21_decimal val1 = {{0xDA40EC11, 0xD3832CA5, 0x5876AEC3, 0x00100000}};
  s21_decimal val2 = {{0x2C124DC6, 0x0AFC4E64, 0xA05587D8, 0x00040000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_11) {
  int true_res = 1;
  s21_decimal val1 = {{0x875EB514, 0x70E0EC44, 0x9E5A087A, 0x000F0000}};
  s21_decimal val2 = {{0x31593F3B, 0x91C6FBDB, 0xB8064512, 0x000B0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_12) {
  int true_res = 1;
  s21_decimal val1 = {{0xDF966AEB, 0xAB3B498D, 0x7FCB2245, 0x00150000}};
  s21_decimal val2 = {{0xA9E13D3A, 0x143C3D01, 0x492E5D83, 0x00030000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_13) {
  int true_res = 1;
  s21_decimal val1 = {{0x8ACD965F, 0x262C4EEE, 0xB84029DF, 0x80060000}};
  s21_decimal val2 = {{0x4D02B88E, 0xF3B834F7, 0xF0F8C16F, 0x80110000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_14) {
  int true_res = 0;
  s21_decimal val1 = {{0xFCA662C3, 0xDACF6675, 0x5D857251, 0x800A0000}};
  s21_decimal val2 = {{0x5298EC37, 0x6F580C27, 0xC1D92DAA, 0x80190000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x46E3D242, 0x0AEAC77B, 0x381B3AEF, 0x00060000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_15) {
  int true_res = 0;
  s21_decimal val1 = {{0xDB7130F1, 0x80E8E89E, 0x55EE0B26, 0x80140000}};
  s21_decimal val2 = {{0x6C046F63, 0x7A5BD546, 0x0E01842C, 0x000E0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xFFE170E8, 0x09C3F736, 0x253F52B5, 0x80060000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_16) {
  int true_res = 1;
  s21_decimal val1 = {{0x37A55635, 0x48470CD6, 0xB8CB2E72, 0x800A0000}};
  s21_decimal val2 = {{0xCA39017A, 0x090D50A6, 0x1A367A28, 0x800E0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_17) {
  int true_res = 2;
  s21_decimal val1 = {{0x1501A26A, 0x53FEEE41, 0x8527D006, 0x00030000}};
  s21_decimal val2 = {{0x47F9AAD8, 0x49A29787, 0x63C70612, 0x80080000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_18) {
  int true_res = 0;
  s21_decimal val1 = {{0xCD3EEB4F, 0xB513F65D, 0xD32C17BA, 0x000F0000}};
  s21_decimal val2 = {{0x3D97C363, 0x4AF61DF2, 0x5F21B5C0, 0x001A0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x30365798, 0x70B703C6, 0x3E2C47A9, 0x000C0000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_19) {
  int true_res = 1;
  s21_decimal val1 = {{0xA4BD746D, 0x8B1E4716, 0x81F7FE4A, 0x80060000}};
  s21_decimal val2 = {{0x2A3A60C3, 0x33D9CAFC, 0x4E4BC02C, 0x80020000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_20) {
  int true_res = 1;
  s21_decimal val1 = {{0x18E3DB3B, 0xC46DB37E, 0xECDCCE99, 0x80080000}};
  s21_decimal val2 = {{0x61060EC2, 0x0A745795, 0x09D62853, 0x80080000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_21) {
  int true_res = 0;
  s21_decimal val1 = {{0x48F61765, 0xF1B835BB, 0xAD5FF394, 0x00080000}};
  s21_decimal val2 = {{0xBCDED304, 0x235A8396, 0xFAFC5589, 0x801C0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x6401E3C5, 0xC161DCEC, 0x86ABD057, 0x80070000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_22) {
  int true_res = 2;
  s21_decimal val1 = {{0x8B5A78A4, 0x9C82DCEC, 0x2F46EA8A, 0x00010000}};
  s21_decimal val2 = {{0x0A68C505, 0x4701EAC5, 0x16D42D35, 0x80170000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_23) {
  int true_res = 0;
  s21_decimal val1 = {{0x5E7A09DD, 0xFB0D9533, 0xE327032F, 0x80180000}};
  s21_decimal val2 = {{0x91C14F9A, 0x81D01F91, 0xA162EBC8, 0x00190000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x4B1180FC, 0x77E389CC, 0x71747F3F, 0x80140000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_24) {
  int true_res = 0;
  s21_decimal val1 = {{0x0B44FBF2, 0x158F29CA, 0x08205378, 0x801B0000}};
  s21_decimal val2 = {{0xB2581148, 0x1091FFC4, 0x88999374, 0x00040000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x398A8216, 0xD19B6DA4, 0x225AB542, 0x80030000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_25) {
  int true_res = 1;
  s21_decimal val1 = {{0xF937FECF, 0xD0E25D62, 0xB5E23A14, 0x00100000}};
  s21_decimal val2 = {{0xD4E083E8, 0x30F5152B, 0x6B52584C, 0x000B0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_26) {
  int true_res = 1;
  s21_decimal val1 = {{0xB9C398D8, 0x6636ED53, 0x582FE855, 0x80040000}};
  s21_decimal val2 = {{0xBA969BE7, 0xFC64C1C9, 0x1D56F065, 0x800F0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_27) {
  int true_res = 0;
  s21_decimal val1 = {{0x835513A9, 0x2169E95B, 0x3E24B7A0, 0x00150000}};
  s21_decimal val2 = {{0x4C2A45D1, 0x8BBA4D47, 0x41AA2CAB, 0x801C0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x9A32E880, 0xAFB1A243, 0x7E4A196C, 0x80150000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_28) {
  int true_res = 1;
  s21_decimal val1 = {{0xF31B1767, 0x5EA99589, 0x12F72AC5, 0x00190000}};
  s21_decimal val2 = {{0x004C764F, 0x50D0FB75, 0x6A158435, 0x00000000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_29) {
  int true_res = 2;
  s21_decimal val1 = {{0x828BB65F, 0x837A89E7, 0x812B0A4B, 0x00070000}};
  s21_decimal val2 = {{0x9CB7A5E4, 0x18EE1A48, 0x0CADC925, 0x80130000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_30) {
  int true_res = 0;
  s21_decimal val1 = {{0xCEB8AE70, 0xCE53BB1A, 0x8D440F4E, 0x800F0000}};
  s21_decimal val2 = {{0x3BC0861C, 0x03532241, 0x9EF69988, 0x001B0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x04140BDD, 0x98219D6A, 0x457F8AFD, 0x800D0000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_31) {
  int true_res = 1;
  s21_decimal val1 = {{0x8803093A, 0x225A1D2E, 0x9AB3FACC, 0x80060000}};
  s21_decimal val2 = {{0x87F3575F, 0x44F64244, 0x171BBEED, 0x800E0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_32) {
  int true_res = 2;
  s21_decimal val1 = {{0x7AD6F9FE, 0x47EF95F7, 0xD5CEF9AD, 0x000C0000}};
  s21_decimal val2 = {{0x32C5D0EE, 0x0CE17382, 0x07AA5E71, 0x800E0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_33) {
  int true_res = 2;
  s21_decimal val1 = {{0x96B705A1, 0x080F3DCB, 0x9636EC2C, 0x80070000}};
  s21_decimal val2 = {{0x6E0990D3, 0x60334944, 0x8A0A9F1D, 0x00010000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_34) {
  int true_res = 0;
  s21_decimal val1 = {{0x4C77E1BC, 0xBE462846, 0xAB9C2B06, 0x80070000}};
  s21_decimal val2 = {{0x07189E73, 0xE6827E12, 0xAAFDDA19, 0x00180000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xE9A7397B, 0x0CE266C9, 0x5AD09D03, 0x80020000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_35) {
  int true_res = 0;
  s21_decimal val1 = {{0x39A8275A, 0xBAD3EDC4, 0x6ECE53BF, 0x00190000}};
  s21_decimal val2 = {{0x92B4C7DA, 0x1F6A4F38, 0xF7C0AE2D, 0x00120000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x7421497E, 0x18708F6F, 0x54F616E7, 0x000E0000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_36) {
  int true_res = 1;
  s21_decimal val1 = {{0xE3FFD3EC, 0x74192795, 0xC5D9ADD6, 0x80050000}};
  s21_decimal val2 = {{0x9EADF1E1, 0x82CDBC7B, 0x7A65CE48, 0x80000000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_37) {
  int true_res = 2;
  s21_decimal val1 = {{0x05C2EC24, 0xCEEE5646, 0xE93D2B91, 0x800D0000}};
  s21_decimal val2 = {{0x2A133483, 0x47D8ED6C, 0xADD70279, 0x000A0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_38) {
  int true_res = 1;
  s21_decimal val1 = {{0x454F1252, 0x7684D76D, 0x29EDE26E, 0x80040000}};
  s21_decimal val2 = {{0x9E3AA37D, 0x178743CD, 0x676E07D1, 0x80070000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_39) {
  int true_res = 0;
  s21_decimal val1 = {{0xB53AAE67, 0xF9D5E922, 0xB429FBDB, 0x80120000}};
  s21_decimal val2 = {{0xE1E9DE1D, 0x11FF74A1, 0x189EC7A0, 0x00140000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xA0922C0F, 0x44AA1F41, 0x89471355, 0x800A0000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_40) {
  int true_res = 2;
  s21_decimal val1 = {{0xCFB1C866, 0xE21891A8, 0x20AA99A0, 0x80050000}};
  s21_decimal val2 = {{0x1E65F496, 0x50059E41, 0x7E730209, 0x00100000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_41) {
  int true_res = 0;
  s21_decimal val1 = {{0xF4CE9B49, 0xC54B477C, 0xE8C9D8F3, 0x801B0000}};
  s21_decimal val2 = {{0xA2563A74, 0x81157D0B, 0x82611A7B, 0x80170000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xF716606F, 0x78CC2CBC, 0x5DEE6185, 0x00150000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_42) {
  int true_res = 0;
  s21_decimal val1 = {{0xB5BF8860, 0xB71C5F56, 0x88044B24, 0x00160000}};
  s21_decimal val2 = {{0xC9532407, 0x8CFAF194, 0xEB3A55DE, 0x80170000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x17A2643E, 0xA8DCB1ED, 0x6304FFF0, 0x80100000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_43) {
  int true_res = 0;
  s21_decimal val1 = {{0x270EF487, 0x2CB397EA, 0xCDBE7C7F, 0x80180000}};
  s21_decimal val2 = {{0x2EF71FB3, 0x8041CD5A, 0x87C6AE86, 0x00170000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xF17D539E, 0x7AD23F58, 0x56747D76, 0x80120000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_44) {
  int true_res = 0;
  s21_decimal val1 = {{0x152C394C, 0x421F695C, 0x282A19BF, 0x80190000}};
  s21_decimal val2 = {{0x7178D970, 0x851C1608, 0x0FF28BDB, 0x00030000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x85AD1A2C, 0x55694D83, 0xC63B4340, 0x80010000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_45) {
  int true_res = 1;
  s21_decimal val1 = {{0x48ECBD4B, 0xE101E3C0, 0x0FC4084E, 0x80020000}};
  s21_decimal val2 = {{0x8834BD27, 0x49A977F3, 0xFCAF0A30, 0x80070000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_46) {
  int true_res = 2;
  s21_decimal val1 = {{0xB9724990, 0xB93FDE96, 0x6B7930ED, 0x00040000}};
  s21_decimal val2 = {{0x4A17105A, 0x4AD25791, 0x4813615B, 0x80160000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_47) {
  int true_res = 0;
  s21_decimal val1 = {{0xD934AB22, 0xBF3E92FC, 0x9D01E858, 0x00050000}};
  s21_decimal val2 = {{0x07625BBE, 0x9AC530E1, 0x38840603, 0x001A0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x2569929D, 0xD666671E, 0x1B763908, 0x00020000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_48) {
  int true_res = 0;
  s21_decimal val1 = {{0xE454F059, 0x96E40346, 0x482A59FD, 0x800E0000}};
  s21_decimal val2 = {{0xC3F8CCBC, 0xC640ED35, 0xA9742218, 0x800F0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x9730631C, 0x2BC21662, 0x25D8923D, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_49) {
  int true_res = 0;
  s21_decimal val1 = {{0x51865546, 0xC6C62C8B, 0x1370D9E8, 0x000F0000}};
  s21_decimal val2 = {{0xA8E25128, 0x8F033B5F, 0x11D36D21, 0x80140000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xBCF02330, 0xB9AC3C06, 0x6B4082D6, 0x80080000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_50) {
  int true_res = 0;
  s21_decimal val1 = {{0x29A71AA0, 0xC07CC77F, 0xEC0A06BB, 0x800C0000}};
  s21_decimal val2 = {{0x023FBDF3, 0x255BC9C6, 0x086857C4, 0x00190000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xE2A21754, 0x990A1819, 0x3D6AFD6F, 0x80090000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_51) {
  int true_res = 0;
  s21_decimal val1 = {{0xE912A8C1, 0x524BB018, 0xC1310856, 0x000D0000}};
  s21_decimal val2 = {{0x9B7F4E84, 0xCC039D7B, 0xF96BF5D5, 0x80120000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xE763214F, 0xFE063DA5, 0x95210343, 0x80020000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_52) {
  int true_res = 1;
  s21_decimal val1 = {{0xDFC2FCA2, 0x41471981, 0xD823E3A9, 0x800D0000}};
  s21_decimal val2 = {{0x36BA03B0, 0x6EEB1F0D, 0x05E77405, 0x80040000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_53) {
  int true_res = 0;
  s21_decimal val1 = {{0x10E8816A, 0x08D72FCB, 0xC45B95D0, 0x00180000}};
  s21_decimal val2 = {{0xF0B05862, 0x72C754BC, 0xF1E832F9, 0x001C0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x45858C24, 0x2F650A3D, 0x9301A1A2, 0x00170000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_54) {
  int true_res = 1;
  s21_decimal val1 = {{0xA869C18B, 0x811E7E86, 0x45F4FE6C, 0x000A0000}};
  s21_decimal val2 = {{0x6C41D150, 0xE5AD7180, 0xBB18BD7E, 0x00120000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_55) {
  int true_res = 0;
  s21_decimal val1 = {{0xE9BA51DF, 0xAEE7B99F, 0x9E8366E5, 0x00130000}};
  s21_decimal val2 = {{0xF3323E9C, 0x1CBADEB0, 0x0F6EB7A1, 0x80190000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x4CCE20A0, 0x5A9A5BF8, 0x4BB539E6, 0x80100000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_56) {
  int true_res = 0;
  s21_decimal val1 = {{0x1EA72E87, 0x481CA4A9, 0xDC4D75E6, 0x00100000}};
  s21_decimal val2 = {{0x69A3BDDE, 0x10131E15, 0x5A4889DC, 0x80190000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xE9AA872A, 0x74956A99, 0x3D8E3572, 0x800C0000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_57) {
  s21_decimal a = {{0x00000002, 0, 0, 0x001C0000}};
  s21_decimal b = {{0x00000006, 0, 0, 0x80020000}};
  s21_decimal res = {0};
  int error = s21_mul(a, b, &res);
  s21_decimal real_res = {{0x00000000, 0, 0, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(res.bits[i], real_res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

// Overflow
START_TEST(s21_mul_58) {
  int true_res = 1;
  s21_decimal val1 = {{0x2CFED970, 0x4C89272F, 0x72B587C3, 0x000A0000}};
  s21_decimal val2 = {{0xBEAC2972, 0x8F86AD2D, 0xCE18A4AC, 0x00090000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_59) {
  int true_res = 2;
  s21_decimal val1 = {{0xDD195AD6, 0x6C77F850, 0xA318EE34, 0x00050000}};
  s21_decimal val2 = {{0x07A4376D, 0xDEC8DF25, 0xAD045F5F, 0x80120000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_60) {
  int true_res = 0;
  s21_decimal val1 = {{0x3A8CAEA7, 0xD8AB9118, 0x59355639, 0x800D0000}};
  s21_decimal val2 = {{0xE2EE1673, 0xA8DEA545, 0xEEA86BDD, 0x00180000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x942C0A00, 0xB31ED402, 0x41E3E50F, 0x80080000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_61) {
  int true_res = 0;
  s21_decimal val1 = {{0xBBCD05D8, 0x3737C828, 0x696D05E2, 0x801C0000}};
  s21_decimal val2 = {{0x2A08A6CB, 0xCF6E8E47, 0x46842E50, 0x80170000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x6235DA20, 0xE98DB645, 0xE614299F, 0x00170000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_62) {
  int true_res = 0;
  s21_decimal val1 = {{0x7E6F0B7F, 0xB1FC24D6, 0x0A9FF562, 0x800C0000}};
  s21_decimal val2 = {{0xF3B40E8A, 0xD7CCA68A, 0x8148DDD8, 0x001C0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x5C42732B, 0x3026A63B, 0x2A830133, 0x800C0000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_63) {
  int true_res = 2;
  s21_decimal val1 = {{0x71B94BC2, 0x3F2EF2CD, 0x90284FA6, 0x00150000}};
  s21_decimal val2 = {{0xDD43B268, 0x5BBA2328, 0xDE092C9A, 0x80050000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_64) {
  int true_res = 0;
  s21_decimal val1 = {{0xCBF73F60, 0x1035EE4D, 0x2DDCC809, 0x80190000}};
  s21_decimal val2 = {{0xCF62DB3D, 0x72BAC680, 0xB4E68139, 0x00140000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xDD7DD278, 0xA830FC1D, 0x19AD3093, 0x80100000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_65) {
  int true_res = 1;
  s21_decimal val1 = {{0xEA416813, 0x731D9621, 0x379AF8BD, 0x000D0000}};
  s21_decimal val2 = {{0xB17633B9, 0x43B6011F, 0x44078A4C, 0x00090000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_66) {
  int true_res = 0;
  s21_decimal val1 = {{0x551494BA, 0xBC8DE3BD, 0xFBA23103, 0x000C0000}};
  s21_decimal val2 = {{0x61D73DA2, 0x3A003DEA, 0x806CF7A1, 0x801B0000}};
  int s21_res = s21_mul(val1, val2, NULL);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_67) {
  int true_res = 0;
  s21_decimal val1 = {{0x5445C24D, 0xD2E2DC72, 0x6B342C2B, 0x801A0000}};
  s21_decimal val2 = {{0x6A6ED1A4, 0x416A4AA1, 0x9775A575, 0x00080000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xB4CC114E, 0x01670FCC, 0x32404EEB, 0x80050000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_68) {
  int true_res = 2;
  s21_decimal val1 = {{0x85FDB4D9, 0xD6D441CA, 0x9AC837E0, 0x80160000}};
  s21_decimal val2 = {{0xBDB4C136, 0xC1ACDCFA, 0x4B3934A2, 0x00030000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_69) {
  int true_res = 0;
  s21_decimal val1 = {{0x3B2F9848, 0xD085F84E, 0x64374A00, 0x801A0000}};
  s21_decimal val2 = {{0x071F4976, 0x55477892, 0x6D84E0A1, 0x80140000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x573254BA, 0x9806AEE7, 0x21F7BBB6, 0x00110000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_70) {
  int true_res = 1;
  s21_decimal val1 = {{0x5B1FCC54, 0x12947299, 0x3794A179, 0x80000000}};
  s21_decimal val2 = {{0x2AFB4535, 0x78B127A9, 0xE33EA30A, 0x801C0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_71) {
  int true_res = 2;
  s21_decimal val1 = {{0xBA144B34, 0xEE8A91CF, 0x9BD72324, 0x80000000}};
  s21_decimal val2 = {{0xA32A5A30, 0x621EBC20, 0x4C90B5AF, 0x00020000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_72) {
  int true_res = 0;
  s21_decimal val1 = {{0xDD77F13E, 0xC95791FD, 0x9BFD27F1, 0x80150000}};
  s21_decimal val2 = {{0xB2A30B6B, 0xEB82A96A, 0xC28162D0, 0x800E0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xFBE10D0B, 0x0E215C17, 0x5DE65DC3, 0x00060000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_73) {
  int true_res = 0;
  s21_decimal val1 = {{0x7A4B7EB8, 0x9C9F44DE, 0xF1A9C69C, 0x80140000}};
  s21_decimal val2 = {{0x9DA61E54, 0x7FEA232D, 0x0D9643F2, 0x80090000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xBBCD8908, 0x0FF6D75C, 0x659E5767, 0x00010000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
// Overflow
START_TEST(s21_mul_74) {
  int true_res = 2;
  s21_decimal val1 = {{0xF9C34375, 0xB12C49F8, 0x76BA41DA, 0x000B0000}};
  s21_decimal val2 = {{0x22E44B2F, 0x370A2FB4, 0xD603360B, 0x80030000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_75) {
  int true_res = 0;
  s21_decimal val1 = {{0x79C0BB6A, 0xBAACA23D, 0x3F3B8185, 0x800D0000}};
  s21_decimal val2 = {{0x828FBBBF, 0xFBDB8D2E, 0x47DBB530, 0x801A0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x49F5B11F, 0x4CCBE659, 0x8C9F7817, 0x000B0000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_76) {
  int true_res = 0;
  s21_decimal val1 = {{0xC83B85E8, 0xC2E366E7, 0x7A5D9AE4, 0x80130000}};
  s21_decimal val2 = {{0x898A3250, 0xAC439B45, 0xEE6094E2, 0x000A0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xBDE30090, 0x1168B3D6, 0x5A46364D, 0x80000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_77) {
  int true_res = 2;
  s21_decimal val1 = {{0x6F7F80AB, 0x8728B8FA, 0x2B809BB5, 0x00150000}};
  s21_decimal val2 = {{0xBF5A1CAF, 0x947C2C80, 0x66275F7F, 0x80040000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_78) {
  int true_res = 1;
  s21_decimal val1 = {{0x852BA556, 0xA58338F8, 0x94875986, 0x80150000}};
  s21_decimal val2 = {{0x3ABE12BD, 0x299C41E6, 0x4261DA72, 0x80010000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_79) {
  int true_res = 0;
  s21_decimal val1 = {{0x6C26EE4D, 0x54B45F0A, 0xF366819D, 0x80170000}};
  s21_decimal val2 = {{0x5C7D2D4F, 0x77F68741, 0x11625CEA, 0x00140000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xFD106424, 0xFAD5E12B, 0x82F40A87, 0x800F0000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_80) {
  int true_res = 0;
  s21_decimal val1 = {{0xDFDE1461, 0x396E27AB, 0x36610731, 0x00100000}};
  s21_decimal val2 = {{0xEB06D367, 0x37C6EAB2, 0x991A283D, 0x00120000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x68E3FAEE, 0x16F3B0D4, 0x19C42D48, 0x00050000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_81) {
  int true_res = 0;
  s21_decimal val1 = {{0x2F72858B, 0xDAD5AE6D, 0x06F7D066, 0x80130000}};
  s21_decimal val2 = {{0x999F307A, 0xFD23DE21, 0xC9029C5B, 0x00130000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x39B53AD2, 0xB7B73750, 0x2B590B2E, 0x800A0000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_82) {
  int true_res = 0;
  s21_decimal val1 = {{0x1042DDA8, 0xB50C9B1B, 0xE3CEAD80, 0x00150000}};
  s21_decimal val2 = {{0x23EC2AE7, 0x648B33EF, 0x03986C21, 0x000A0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x9243BF80, 0xC3FCA4BE, 0xFD7C7F8B, 0x00040000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_83) {
  int true_res = 2;
  s21_decimal val1 = {{0x1F09A5DF, 0x51CBF807, 0x3E80E89C, 0x800E0000}};
  s21_decimal val2 = {{0x4EFFFBB2, 0xFA2D022A, 0x6CD1CD3E, 0x00020000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_84) {
  int true_res = 2;
  s21_decimal val1 = {{0xF0C6B1E5, 0x68D9ADD9, 0xD5EDB2B1, 0x00080000}};
  s21_decimal val2 = {{0x9D863C86, 0x8C9B0550, 0x0655825F, 0x80120000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_85) {
  int true_res = 0;
  s21_decimal val1 = {{0x139329AD, 0xBDB81A7C, 0x3A3864D6, 0x00080000}};
  s21_decimal val2 = {{0xE4D80C90, 0x0F735412, 0x4BB362F4, 0x001B0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xB4D75716, 0xBB005F11, 0x88665F73, 0x00070000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_86) {
  int true_res = 0;
  s21_decimal val1 = {{0xE0AA4149, 0x5F5948BC, 0xDEFEF865, 0x00110000}};
  s21_decimal val2 = {{0x478AA5BB, 0x860B6F79, 0x54FEFD02, 0x801B0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xF3D23EDA, 0x28FA6763, 0x3AA8BAA8, 0x800F0000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_87) {
  int true_res = 2;
  s21_decimal val1 = {{0xA96DF6C5, 0x82CFC050, 0x173A2988, 0x800B0000}};
  s21_decimal val2 = {{0x1378DBE5, 0xA883DCA4, 0x5AD54F74, 0x00040000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_88) {
  int true_res = 0;
  s21_decimal val1 = {{0x3344F5D3, 0xD01F8D21, 0x05754B9C, 0x80120000}};
  s21_decimal val2 = {{0x400BD1CE, 0x8B9EB6E1, 0x18E2B99B, 0x00100000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xDDA1D0B4, 0xB0A4EE85, 0x2A0998DF, 0x80070000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_89) {
  int true_res = 0;
  s21_decimal val1 = {{0xE1676155, 0x5ABEDD93, 0x3717CA16, 0x80170000}};
  s21_decimal val2 = {{0xE0BEABB0, 0xD9C0213E, 0x468B2DAE, 0x00070000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xC340EC4E, 0x7EB12982, 0x7847AF64, 0x80020000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_90) {
  int true_res = 0;
  s21_decimal val1 = {{0xDA5B1A21, 0x22978748, 0x75FCD6EB, 0x800A0000}};
  s21_decimal val2 = {{0x059EE61A, 0xE124FCD1, 0xE6BBAD34, 0x00190000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x4FFB6B19, 0x396B0CB9, 0x5440CDF4, 0x80060000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_91) {
  int true_res = 1;
  s21_decimal val1 = {{0x6086F430, 0x94771453, 0x5F62E816, 0x80050000}};
  s21_decimal val2 = {{0xF5E16114, 0x100E194A, 0x7F3AC400, 0x80130000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_92) {
  int true_res = 0;
  s21_decimal val1 = {{0xAF0B653F, 0xE7A37319, 0x6A728EB5, 0x80190000}};
  s21_decimal val2 = {{0x3085D0FC, 0xADAE04E9, 0x8309AA3C, 0x80040000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x5903ACD4, 0xD159E281, 0x2B2B404C, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_93) {
  int true_res = 2;
  s21_decimal val1 = {{0xD48AF0B7, 0x344731B1, 0xC13FA2D3, 0x00110000}};
  s21_decimal val2 = {{0xF5E5D550, 0x317C7D7F, 0x4DCCFD6E, 0x80070000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_94) {
  int true_res = 2;
  s21_decimal val1 = {{0x7052AF49, 0x6F37AC25, 0x8B28115E, 0x00170000}};
  s21_decimal val2 = {{0xE1096289, 0x050D91BE, 0x5CE3CD8A, 0x80040000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_95) {
  int true_res = 1;
  s21_decimal val1 = {{0xCA3B7FF0, 0x23699AF7, 0xB9B23A42, 0x80060000}};
  s21_decimal val2 = {{0xA02FDED5, 0x709026F0, 0x60CF823F, 0x80020000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_96) {
  int true_res = 0;
  s21_decimal val1 = {{0x39137E86, 0x687979D6, 0xCA44FFCE, 0x00080000}};
  s21_decimal val2 = {{0x27552423, 0x6BB99703, 0x0F4ABE6A, 0x001B0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x82494550, 0x7212358C, 0x5FBA0E67, 0x00070000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

// Overflow
START_TEST(s21_mul_97) {
  int true_res = 2;
  s21_decimal val1 = {{0x277493F9, 0x59F1A70C, 0xB95DF516, 0x00100000}};
  s21_decimal val2 = {{0xFDBA6A58, 0x4855F78F, 0x31EFAC02, 0x80090000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_98) {
  int true_res = 0;
  s21_decimal val1 = {{0xCB2B7C88, 0x1C039D84, 0x6B414512, 0x80090000}};
  s21_decimal val2 = {{0xBF4FDC38, 0x14944486, 0x357C611B, 0x001C0000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xB36695A8, 0xCB8F1CCD, 0xB18A369E, 0x80090000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_99) {
  int true_res = 0;
  s21_decimal val1 = {{0x74F4B148, 0xEF7CC239, 0xBAA0038E, 0x800F0000}};
  s21_decimal val2 = {{0x38154ADF, 0x9E7F5DB8, 0x56B86209, 0x80120000}};
  s21_decimal output = {0};
  s21_decimal result = {{0xE697D327, 0xF622D130, 0x32166BC5, 0x00040000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_100) {
  int true_res = 0;
  s21_decimal val1 = {{0x28A0CB0E, 0xF5295C94, 0xDCEB3E6C, 0x001C0000}};
  s21_decimal val2 = {{0x72F8130E, 0xEC622F23, 0x70BAA055, 0x00150000}};
  s21_decimal output = {0};
  s21_decimal result = {{0x90EB06AB, 0xA49F282A, 0x4D12F56B, 0x00140000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_101) {
  int true_res = 0;
  s21_decimal val1 = {{1, 0, 0, 0}};
  s21_decimal val2 = {{0, 0, 0, 0x80000000}};
  s21_decimal output = {0};
  s21_decimal result = {{0, 0, 0, 0x80000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_102) {
  int true_res = 0;
  s21_decimal val1 = {{1, 0, 0, 0}};
  s21_decimal val2 = {{1, 0, 0, 0x80000000}};
  s21_decimal output = {0};
  s21_decimal result = {{1, 0, 0, 0x80000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_103) {
  int true_res = 0;
  s21_decimal val1 = {{1, 0, 0, 0}};
  s21_decimal val2 = {{0, 1, 0, 0x80000000}};
  s21_decimal output = {0};
  s21_decimal result = {{0, 1, 0, 0x80000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_mul_104) {
  int true_res = 0;
  s21_decimal val1 = {{1, 0, 0, 0}};
  s21_decimal val2 = {{0, 0, 1, 0x80000000}};
  s21_decimal output = {0};
  s21_decimal result = {{0, 0, 1, 0x80000000}};
  int s21_res = s21_mul(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

Suite *test_mul(void) {
  Suite *s = suite_create("\033[45m-=S21_MUL=-\033[0m");
  TCase *tc = tcase_create("s21_mul_tc");

  tcase_add_test(tc, s21_mul_1);
  tcase_add_test(tc, s21_mul_2);
  tcase_add_test(tc, s21_mul_3);
  tcase_add_test(tc, s21_mul_4);
  tcase_add_test(tc, s21_mul_5);
  tcase_add_test(tc, s21_mul_6);
  tcase_add_test(tc, s21_mul_7);
  tcase_add_test(tc, s21_mul_8);
  tcase_add_test(tc, s21_mul_9);
  tcase_add_test(tc, s21_mul_10);
  tcase_add_test(tc, s21_mul_11);
  tcase_add_test(tc, s21_mul_12);
  tcase_add_test(tc, s21_mul_13);
  tcase_add_test(tc, s21_mul_14);
  tcase_add_test(tc, s21_mul_15);
  tcase_add_test(tc, s21_mul_16);
  tcase_add_test(tc, s21_mul_17);
  tcase_add_test(tc, s21_mul_18);
  tcase_add_test(tc, s21_mul_19);
  tcase_add_test(tc, s21_mul_20);
  tcase_add_test(tc, s21_mul_21);
  tcase_add_test(tc, s21_mul_22);
  tcase_add_test(tc, s21_mul_23);
  tcase_add_test(tc, s21_mul_24);
  tcase_add_test(tc, s21_mul_25);
  tcase_add_test(tc, s21_mul_26);
  tcase_add_test(tc, s21_mul_27);
  tcase_add_test(tc, s21_mul_28);
  tcase_add_test(tc, s21_mul_29);
  tcase_add_test(tc, s21_mul_30);
  tcase_add_test(tc, s21_mul_31);
  tcase_add_test(tc, s21_mul_32);
  tcase_add_test(tc, s21_mul_33);
  tcase_add_test(tc, s21_mul_34);
  tcase_add_test(tc, s21_mul_35);
  tcase_add_test(tc, s21_mul_36);
  tcase_add_test(tc, s21_mul_37);
  tcase_add_test(tc, s21_mul_38);
  tcase_add_test(tc, s21_mul_39);
  tcase_add_test(tc, s21_mul_40);
  tcase_add_test(tc, s21_mul_41);
  tcase_add_test(tc, s21_mul_42);
  tcase_add_test(tc, s21_mul_43);
  tcase_add_test(tc, s21_mul_44);
  tcase_add_test(tc, s21_mul_45);
  tcase_add_test(tc, s21_mul_46);
  tcase_add_test(tc, s21_mul_47);
  tcase_add_test(tc, s21_mul_48);
  tcase_add_test(tc, s21_mul_49);
  tcase_add_test(tc, s21_mul_50);
  tcase_add_test(tc, s21_mul_51);
  tcase_add_test(tc, s21_mul_52);
  tcase_add_test(tc, s21_mul_53);
  tcase_add_test(tc, s21_mul_54);
  tcase_add_test(tc, s21_mul_55);
  tcase_add_test(tc, s21_mul_56);
  tcase_add_test(tc, s21_mul_57);
  tcase_add_test(tc, s21_mul_58);
  tcase_add_test(tc, s21_mul_59);
  tcase_add_test(tc, s21_mul_60);
  tcase_add_test(tc, s21_mul_61);
  tcase_add_test(tc, s21_mul_62);
  tcase_add_test(tc, s21_mul_63);
  tcase_add_test(tc, s21_mul_64);
  tcase_add_test(tc, s21_mul_65);
  tcase_add_test(tc, s21_mul_66);
  tcase_add_test(tc, s21_mul_67);
  tcase_add_test(tc, s21_mul_68);
  tcase_add_test(tc, s21_mul_69);
  tcase_add_test(tc, s21_mul_70);
  tcase_add_test(tc, s21_mul_71);
  tcase_add_test(tc, s21_mul_72);
  tcase_add_test(tc, s21_mul_73);
  tcase_add_test(tc, s21_mul_74);
  tcase_add_test(tc, s21_mul_75);
  tcase_add_test(tc, s21_mul_76);
  tcase_add_test(tc, s21_mul_77);
  tcase_add_test(tc, s21_mul_78);
  tcase_add_test(tc, s21_mul_79);
  tcase_add_test(tc, s21_mul_80);
  tcase_add_test(tc, s21_mul_81);
  tcase_add_test(tc, s21_mul_82);
  tcase_add_test(tc, s21_mul_83);
  tcase_add_test(tc, s21_mul_84);
  tcase_add_test(tc, s21_mul_85);
  tcase_add_test(tc, s21_mul_86);
  tcase_add_test(tc, s21_mul_87);
  tcase_add_test(tc, s21_mul_88);
  tcase_add_test(tc, s21_mul_89);
  tcase_add_test(tc, s21_mul_90);
  tcase_add_test(tc, s21_mul_91);
  tcase_add_test(tc, s21_mul_92);
  tcase_add_test(tc, s21_mul_93);
  tcase_add_test(tc, s21_mul_94);
  tcase_add_test(tc, s21_mul_95);
  tcase_add_test(tc, s21_mul_96);
  tcase_add_test(tc, s21_mul_97);
  tcase_add_test(tc, s21_mul_98);
  tcase_add_test(tc, s21_mul_99);
  tcase_add_test(tc, s21_mul_100);
  tcase_add_test(tc, s21_mul_101);
  tcase_add_test(tc, s21_mul_102);
  tcase_add_test(tc, s21_mul_103);
  tcase_add_test(tc, s21_mul_104);

  suite_add_tcase(s, tc);
  return s;
}
