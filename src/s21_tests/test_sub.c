#include "test_me.h"

START_TEST(s21_sub_1) {
  int true_res = 0;
  s21_decimal val1 = {{0x81327C03, 0xAA15F441, 0x9CA1CCF0, 0x00060000}};
  s21_decimal val2 = {{0x90464DB5, 0x7F974DEB, 0x4B68236B, 0x00030000}};
  s21_decimal val3 = {{0x150269BE, 0x0AAF58AF, 0x4B400A62, 0x80030000}};
  s21_decimal output = {{0x000FFFF0, 0x0FFFFF00, 0x000FF000, 0x80000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_2) {
  int true_res = 0;
  s21_decimal val1 = {{0x351204C5, 0x6339DD53, 0xA37B20AB, 0x800B0000}};
  s21_decimal val2 = {{0xC0890991, 0xE994F694, 0xF1058799, 0x80000000}};
  s21_decimal val3 = {{0x0B4D8C80, 0xE28F7891, 0xF1058799, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_3) {
  int true_res = 0;
  s21_decimal val1 = {{0xDF6FC4F1, 0x88583879, 0x512ED31C, 0x80020000}};
  s21_decimal val2 = {{0xD1AC4295, 0x35A0628C, 0xFEF09E0E, 0x80110000}};
  s21_decimal val3 = {{0x84217179, 0x8857F0B7, 0x512ED31C, 0x80020000}};
  s21_decimal output = {{0x000FFFF0, 0x0FFFFF00, 0x000FF000, 0x80000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_4) {
  int true_res = 0;
  s21_decimal val1 = {{0x6EFB39CF, 0xCD29F1A9, 0x60848EA5, 0x800F0000}};
  s21_decimal val2 = {{0x0143C86E, 0xD91C4F67, 0xE8729F4C, 0x00120000}};
  s21_decimal val3 = {{0x74DEE0AA, 0xCC5B615B, 0x60C01057, 0x800F0000}};
  s21_decimal output = {{0x000FFFF0, 0x0FFFFF00, 0x000FF000, 0x80000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_5) {
  int true_res = 0;
  s21_decimal val1 = {{0xEAD8F253, 0x152E0221, 0x2E3C7584, 0x80030000}};
  s21_decimal val2 = {{0xB8545B30, 0x58A7936A, 0x0AA188F4, 0x00060000}};
  s21_decimal val3 = {{0xE97EEB3F, 0x995D47A7, 0x2E3F2E3A, 0x80030000}};
  s21_decimal output = {{0xCA8CB120, 0xDC22ED90, 0x049FEB05, 0x80020000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_6) {
  int true_res = 0;
  s21_decimal val1 = {{0x811B3D38, 0x3099B29C, 0x44495B09, 0x80120000}};
  s21_decimal val2 = {{0x5345A457, 0x7459335A, 0x30B4F881, 0x800B0000}};
  s21_decimal val3 = {{0x9B35CE1E, 0xE3802337, 0x30B4F80E, 0x000B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_7) {
  int true_res = 0;
  s21_decimal val1 = {{0xFAF659F4, 0x649C520F, 0xD3380CB0, 0x00000000}};
  s21_decimal val2 = {{0xB9FA3B2C, 0x1DDDFC17, 0xA183BD90, 0x80130000}};
  s21_decimal val3 = {{0x24E77855, 0x649C5211, 0xD3380CB0, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_8) {
  int true_res = 0;
  s21_decimal val1 = {{0x7FACEC97, 0x0D139BBE, 0x5157185D, 0x00090000}};
  s21_decimal val2 = {{0x4443F944, 0xFF60AE28, 0x6F24EBD8, 0x80060000}};
  s21_decimal val3 = {{0x2B4E2170, 0x5CD4AAFC, 0x6F39BE8F, 0x00060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_9) {
  int true_res = 0;
  s21_decimal val1 = {{0x70BAEE4E, 0x853CCA7D, 0x35710D87, 0x801A0000}};
  s21_decimal val2 = {{0x6B2A6458, 0x5A8E0A25, 0x28BD2782, 0x00000000}};
  s21_decimal val3 = {{0x6B2A64FD, 0x5A8E0A25, 0x28BD2782, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_10) {
  int true_res = 0;
  s21_decimal val1 = {{0xD118A066, 0xD418C51E, 0xF35F8214, 0x00040000}};
  s21_decimal val2 = {{0x7C43BB90, 0x09014884, 0x3B50B618, 0x801C0000}};
  s21_decimal val3 = {{0xD118E81B, 0xD418C51E, 0xF35F8214, 0x00040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_11) {
  int true_res = 0;
  s21_decimal val1 = {{0xB75D7072, 0x5A088A2C, 0x800C3DA5, 0x80020000}};
  s21_decimal val2 = {{0xFC0E6698, 0x6A06C83F, 0xC93B52CD, 0x00040000}};
  s21_decimal val3 = {{0xFF016C5A, 0xB9D0499D, 0x820F64DF, 0x80020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_12) {
  int true_res = 0;
  s21_decimal val1 = {{0x1C28D7C5, 0x15BC2D27, 0x2AA49045, 0x800E0000}};
  s21_decimal val2 = {{0x0A87BC93, 0xE7906BDA, 0x5775AA7F, 0x00130000}};
  s21_decimal val3 = {{0x9577C23E, 0x605D2B25, 0x2AA4C996, 0x800E0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_13) {
  int true_res = 0;
  s21_decimal val1 = {{0x98C4693B, 0xFB02B5C9, 0x289B6059, 0x80020000}};
  s21_decimal val2 = {{0xEB5D6F31, 0x43AD3D41, 0xC5CE3303, 0x80140000}};
  s21_decimal val3 = {{0x57E68240, 0xFB02B5BB, 0x289B6059, 0x80020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_14) {
  int true_res = 0;
  s21_decimal val1 = {{0x44DDDC20, 0x7725A6C0, 0x9B8613A4, 0x80030000}};
  s21_decimal val2 = {{0xC17B0371, 0x9E0FE52C, 0x1AEA7449, 0x00120000}};
  s21_decimal val3 = {{0xC26BEE1B, 0x7725AE53, 0x9B8613A4, 0x80030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_15) {
  int true_res = 0;
  s21_decimal val1 = {{0xAB909FE5, 0x03761722, 0x9D26C9F2, 0x00170000}};
  s21_decimal val2 = {{0x0373B364, 0x76A4B225, 0x5722E33E, 0x800F0000}};
  s21_decimal val3 = {{0x7BD97B87, 0xD43FEB7C, 0x5722E358, 0x000F0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_16) {
  int true_res = 0;
  s21_decimal val1 = {{0x801E2347, 0x3034AE10, 0x0A76C8C8, 0x800E0000}};
  s21_decimal val2 = {{0xEEB8CED9, 0xE1456557, 0xFD192F78, 0x80020000}};
  s21_decimal val3 = {{0x2EC89BAB, 0xE139E3FD, 0xFD192F78, 0x00020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_17) {
  int true_res = 0;
  s21_decimal val1 = {{0xED227C77, 0x91251F68, 0x5EB3C7BC, 0x00150000}};
  s21_decimal val2 = {{0xCE5C8B63, 0x6678F0BF, 0x43B15B47, 0x00070000}};
  s21_decimal val3 = {{0xA1A15FC5, 0x6677E62F, 0x43B15B47, 0x80070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_18) {
  int true_res = 0;
  s21_decimal val1 = {{0x9E0AD71A, 0x51DE4CE3, 0x7C7E230F, 0x00130000}};
  s21_decimal val2 = {{0xA1BC94CD, 0x5B315F96, 0xE77AD916, 0x800D0000}};
  s21_decimal val3 = {{0x3E474BBF, 0xFF5D4DB0, 0xE77AE13E, 0x000D0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_19) {
  int true_res = 0;
  s21_decimal val1 = {{0x736B20EC, 0x789F4842, 0xD6A6DC91, 0x00110000}};
  s21_decimal val2 = {{0xCC82BE25, 0x41B7E555, 0x4AB38DFB, 0x80090000}};
  s21_decimal val3 = {{0xD3381A25, 0x44F16E21, 0x4AB38E1F, 0x00090000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_20) {
  int true_res = 0;
  s21_decimal val1 = {{0x390AF923, 0x716DF21D, 0x7A15A181, 0x80120000}};
  s21_decimal val2 = {{0x594017EA, 0x63F2F982, 0x98D61C2D, 0x00160000}};
  s21_decimal val3 = {{0x4A4E6268, 0x5169F36B, 0x7A198B22, 0x80120000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_21) {
  int true_res = 0;
  s21_decimal val1 = {{0x423F4FF8, 0xE0FC85D3, 0xB2374887, 0x000E0000}};
  s21_decimal val2 = {{0x8C07F180, 0x5AF1861D, 0x85F3F906, 0x000D0000}};
  s21_decimal val3 = {{0x0568031A, 0xC471DF22, 0x7421A4F8, 0x800D0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_22) {
  int true_res = 0;
  s21_decimal val1 = {{0x7A4ABACD, 0x75A66AF8, 0xF81DF30E, 0x80150000}};
  s21_decimal val2 = {{0x75CD9911, 0x34A78522, 0xF1753835, 0x80160000}};
  s21_decimal val3 = {{0xA1B62B7E, 0xBD2F440E, 0xDFF8A0A2, 0x80150000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_23) {
  int true_res = 0;
  s21_decimal val1 = {{0x4F744BC1, 0xC211952F, 0xB8FDE353, 0x001C0000}};
  s21_decimal val2 = {{0x148E32FB, 0x8B5F367F, 0x414D8199, 0x001B0000}};
  s21_decimal val3 = {{0x2635C501, 0xC4C3DAC7, 0x2ECDB7AA, 0x801B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_24) {
  int true_res = 0;
  s21_decimal val1 = {{0xD7106B0F, 0xCF61519A, 0x129BA2CD, 0x80110000}};
  s21_decimal val2 = {{0x518F0841, 0x95E9AE21, 0xF2DB4A84, 0x80080000}};
  s21_decimal val3 = {{0x6A1B2E15, 0x45FE0502, 0xF2DB4A84, 0x00080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_25) {
  int true_res = 0;
  s21_decimal val1 = {{0xC2871A0B, 0x68F2C6F0, 0x9998B3EE, 0x00050000}};
  s21_decimal val2 = {{0xB5A42BFC, 0x4B56483B, 0xF1203527, 0x80070000}};
  s21_decimal val3 = {{0x0976D2CE, 0x901A0A39, 0x9C01FC24, 0x00050000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_26) {
  int true_res = 0;
  s21_decimal val1 = {{0xC3A60510, 0x78D57344, 0x509CB7F5, 0x00100000}};
  s21_decimal val2 = {{0xA0348BF5, 0xCA2B59FA, 0xF91C0B32, 0x00030000}};
  s21_decimal val3 = {{0xA32AA563, 0xCA227CF2, 0xF91C0B32, 0x80030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_27) {
  int true_res = 0;
  s21_decimal val1 = {{0x119DDF8E, 0xF1C6E216, 0xA0D2A160, 0x80040000}};
  s21_decimal val2 = {{0x3D6C858A, 0x4BE2CEAC, 0xE968012A, 0x000B0000}};
  s21_decimal val3 = {{0xEBE6E019, 0x89016CD4, 0xA0D2A2E8, 0x80040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_28) {
  int true_res = 0;
  s21_decimal val1 = {{0x83F1D501, 0x9B68994F, 0xBA4CD94C, 0x00180000}};
  s21_decimal val2 = {{0x050BC82A, 0xE8D82DF2, 0xD9CAD6F7, 0x80030000}};
  s21_decimal val3 = {{0x087B8F46, 0xE8D82DF2, 0xD9CAD6F7, 0x00030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_29) {
  int true_res = 0;
  s21_decimal val1 = {{0x35716284, 0x9DB4C6C4, 0x17554546, 0x001C0000}};
  s21_decimal val2 = {{0xD3149B77, 0x57D7E4CE, 0xC5D6C200, 0x80140000}};
  s21_decimal val3 = {{0xB603898A, 0x41FDE9B5, 0xC5D6C204, 0x00140000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_30) {
  int true_res = 0;
  s21_decimal val1 = {{0x27B201B5, 0x1B3BA1B4, 0xF733BDD9, 0x00050000}};
  s21_decimal val2 = {{0xF3E81E95, 0x0590E3B2, 0x2D9DBD3B, 0x00050000}};
  s21_decimal val3 = {{0x33C9E320, 0x15AABE01, 0xC996009E, 0x00050000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_31) {
  int true_res = 0;
  s21_decimal val1 = {{0xD1F359DA, 0x890BFECD, 0xFFAB4610, 0x800C0000}};
  s21_decimal val2 = {{0x8EABEE00, 0xE8B4F8B7, 0x4A111E04, 0x00050000}};
  s21_decimal val3 = {{0xBD8FB2EA, 0xD9B8F82F, 0x4A111FB1, 0x80050000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_32) {
  int true_res = 0;
  s21_decimal val1 = {{0x1CEEC364, 0x65950159, 0x845B2FE8, 0x801B0000}};
  s21_decimal val2 = {{0x22CB54B4, 0xDDE2C802, 0x65B1080D, 0x80050000}};
  s21_decimal val3 = {{0x228CD3D2, 0xDDE2C802, 0x65B1080D, 0x00050000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_33) {
  int true_res = 0;
  s21_decimal val1 = {{0xCC6BD601, 0xAA8D0DF9, 0xCA1BAD73, 0x800F0000}};
  s21_decimal val2 = {{0x409ADD77, 0x208E9FD0, 0x8A2E5211, 0x00030000}};
  s21_decimal val3 = {{0xC8E16FF1, 0x216CD830, 0x8A2E5211, 0x80030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_34) {
  int true_res = 0;
  s21_decimal val1 = {{0x4602915A, 0x35A71966, 0x71211675, 0x00040000}};
  s21_decimal val2 = {{0xFD06E2DF, 0x6CB24AA4, 0x14F2008E, 0x80020000}};
  s21_decimal val3 = {{0x1C7851A5, 0xC4546CFC, 0xDCC42168, 0x00030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_35) {
  int true_res = 0;
  s21_decimal val1 = {{0x6EA622C4, 0xC825CA23, 0x045FBA2C, 0x00130000}};
  s21_decimal val2 = {{0xB2DA75C2, 0x0777806A, 0x125FC8A5, 0x00190000}};
  s21_decimal val3 = {{0xDBC29D35, 0x2583612F, 0x2BBD39B5, 0x00140000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_36) {
  int true_res = 0;
  s21_decimal val1 = {{0x085C2B54, 0x80595B33, 0x22F8992E, 0x80050000}};
  s21_decimal val2 = {{0xB087ACDB, 0xBFF4E548, 0x351E1733, 0x800E0000}};
  s21_decimal val3 = {{0xB09C764D, 0x9C36006E, 0x22F8992D, 0x80050000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_37) {
  int true_res = 0;
  s21_decimal val1 = {{0x5F8CD73F, 0xAA551BA8, 0xDA67A2D4, 0x80020000}};
  s21_decimal val2 = {{0x8BE45953, 0xA4BF98A6, 0x09C584D9, 0x000A0000}};
  s21_decimal val3 = {{0xF9825242, 0x4E048756, 0xDA67A2D6, 0x80020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_38) {
  int true_res = 0;
  s21_decimal val1 = {{0xAE1E2167, 0xC94F30B2, 0xCA6853DD, 0x800D0000}};
  s21_decimal val2 = {{0x611907DA, 0xCF874048, 0x8E0619ED, 0x00010000}};
  s21_decimal val3 = {{0xFC0BFB54, 0xD065CCEF, 0x8E0619ED, 0x80010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_39) {
  int true_res = 0;
  s21_decimal val1 = {{0x10CC8F9E, 0x1242A036, 0x7883BCE5, 0x00070000}};
  s21_decimal val2 = {{0x284BD550, 0x861FE6F0, 0x8338B598, 0x00130000}};
  s21_decimal val3 = {{0xFB345223, 0x11B258A2, 0x7883BCE5, 0x00070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_40) {
  int true_res = 0;
  s21_decimal val1 = {{0x8EE2F3D6, 0x557FA4FA, 0x882EAC57, 0x00130000}};
  s21_decimal val2 = {{0xE76EC227, 0x3CBED528, 0xD60D9148, 0x80070000}};
  s21_decimal val3 = {{0x0880ECCD, 0x3D549113, 0xD60D9148, 0x00070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_41) {
  int true_res = 0;
  s21_decimal val1 = {{0x74886D81, 0x3F9CBEA1, 0x85686C5A, 0x800E0000}};
  s21_decimal val2 = {{0x369E1E00, 0x63BEB9AA, 0x2ADAB9FD, 0x00080000}};
  s21_decimal val3 = {{0xA16AC87E, 0x9A53AC0E, 0x2ADAC2BB, 0x80080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_42) {
  int true_res = 0;
  s21_decimal val1 = {{0x6B8DAD80, 0x69F4A9C0, 0x8EAB0318, 0x00130000}};
  s21_decimal val2 = {{0xC62D777B, 0x306EA218, 0x4DC9137F, 0x80180000}};
  s21_decimal val3 = {{0xA9387F2B, 0xA5C15760, 0x8EAB3612, 0x00130000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_43) {
  int true_res = 0;
  s21_decimal val1 = {{0x0E5050D6, 0xE3E773D2, 0xFB376052, 0x800F0000}};
  s21_decimal val2 = {{0xA41C8D89, 0x120B964B, 0x1021EFF0, 0x00100000}};
  s21_decimal val3 = {{0xD1ECC564, 0xB282360C, 0xFCD45EB7, 0x800F0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_44) {
  int true_res = 0;
  s21_decimal val1 = {{0xC0322836, 0x61E2FBEE, 0xFDCF54EA, 0x00100000}};
  s21_decimal val2 = {{0x7A35138B, 0x21F9BB59, 0x14592266, 0x80030000}};
  s21_decimal val3 = {{0xC04AB678, 0x54D862A0, 0xCB7B57FD, 0x00040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_45) {
  int true_res = 0;
  s21_decimal val1 = {{0xE9CE0E76, 0x33C639F9, 0xC6BC4D16, 0x00170000}};
  s21_decimal val2 = {{0x23366C0E, 0xF422B16C, 0xCB4AFFC2, 0x80060000}};
  s21_decimal val3 = {{0x57737BDF, 0xF422B1FB, 0xCB4AFFC2, 0x00060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_46) {
  int true_res = 0;
  s21_decimal val1 = {{0xCFF8ED92, 0x34AA4D8C, 0x76829F89, 0x800D0000}};
  s21_decimal val2 = {{0xC5578788, 0xC5A0A21F, 0x87485DB5, 0x00180000}};
  s21_decimal val3 = {{0x19851EBF, 0x3A79C071, 0x76829F89, 0x800D0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_47) {
  int true_res = 0;
  s21_decimal val1 = {{0x7C1C46FB, 0x37D8C6F0, 0xC59415BE, 0x00030000}};
  s21_decimal val2 = {{0xCB6C63AD, 0xFC2C853C, 0xDD9F87D4, 0x000D0000}};
  s21_decimal val3 = {{0x3BC94DB0, 0xD8A90D61, 0xC59415BD, 0x00030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_48) {
  int true_res = 0;
  s21_decimal val1 = {{0x25E6E289, 0x51BF14E1, 0x08238A1E, 0x80160000}};
  s21_decimal val2 = {{0xC07E614A, 0x771CFCC4, 0xADFEC722, 0x001A0000}};
  s21_decimal val3 = {{0xF0F8AFFA, 0xAF05F2D6, 0x518FF022, 0x80170000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_49) {
  int true_res = 0;
  s21_decimal val1 = {{0x1A176D78, 0xC0A54FE2, 0x7FAE5009, 0x80040000}};
  s21_decimal val2 = {{0x8D94ECB3, 0x8BE2C38F, 0x612A51F2, 0x001C0000}};
  s21_decimal val3 = {{0x1A17E2EF, 0xC0A54FE2, 0x7FAE5009, 0x80040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_50) {
  int true_res = 0;
  s21_decimal val1 = {{0x90CEC4AE, 0x229FA52C, 0x2FFD1C99, 0x80080000}};
  s21_decimal val2 = {{0xDC1D30C6, 0xBC6CABA1, 0xE025FB40, 0x80090000}};
  s21_decimal val3 = {{0xCBF67E06, 0x9DCFC81B, 0xFFBD22BA, 0x80090000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_51) {
  int true_res = 0;
  s21_decimal val1 = {{0xA6832D56, 0x42E71412, 0xCF02C4D5, 0x00170000}};
  s21_decimal val2 = {{0xA6832D56, 0x42E71412, 0xCF02C4D5, 0x000D0000}};
  s21_decimal val3 = {{0x0C0A9B97, 0xE9FDFF9D, 0xCF02C4D4, 0x800D0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_52) {
  int true_res = 0;
  s21_decimal val1 = {{0x2324FCD6, 0x4439A495, 0x22F0A8D4, 0x00080000}};
  s21_decimal val2 = {{0x2324FCD6, 0x4439A495, 0x22F0A8D4, 0x80040000}};
  s21_decimal val3 = {{0x0353C336, 0xFCA7861C, 0x22F18DCF, 0x00040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_53) {
  int true_res = 0;
  s21_decimal val1 = {{0x8AEBE2B5, 0xD3FA336B, 0x35D7D6B1, 0x000B0000}};
  s21_decimal val2 = {{0x8AEBE2B5, 0xD3FA336B, 0x35D7D6B1, 0x00110000}};
  s21_decimal val3 = {{0xA035A08E, 0x7D89FB52, 0x35D7D32A, 0x000B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_54) {
  int true_res = 0;
  s21_decimal val1 = {{0x6A827B29, 0x57CF3DEC, 0x77FD58F5, 0x801B0000}};
  s21_decimal val2 = {{0x6A827B29, 0x57CF3DEC, 0x77FD58F5, 0x80160000}};
  s21_decimal val3 = {{0xE6036572, 0x6C123105, 0x77FD0A52, 0x00160000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_55) {
  int true_res = 0;
  s21_decimal val1 = {{0x9A20E1E2, 0xBE99AE6F, 0x986C09C3, 0x00020000}};
  s21_decimal val2 = {{0x9A20E1E2, 0xBE99AE6F, 0x986C09C3, 0x80080000}};
  s21_decimal val3 = {{0x6A22B0F8, 0xF6356502, 0x986C13C0, 0x00020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_56) {
  int true_res = 0;
  s21_decimal val1 = {{0xB4DF6B72, 0x3A25CA56, 0x9F6C5D8C, 0x800D0000}};
  s21_decimal val2 = {{0xB4DF6B72, 0x3A25CA56, 0x9F6C5D8C, 0x00100000}};
  s21_decimal val3 = {{0x252E7DBA, 0x684927FB, 0x9F952D83, 0x800D0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_57) {
  int true_res = 0;
  s21_decimal val1 = {{0x537B5CEF, 0x160DCCF7, 0x0819B93D, 0x001C0000}};
  s21_decimal val2 = {{0x537B5CEF, 0x160DCCF7, 0x0819B93D, 0x80180000}};
  s21_decimal val3 = {{0xF4D28586, 0x691AEA91, 0x51034F42, 0x00190000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_58) {
  int true_res = 0;
  s21_decimal val1 = {{0x64DEAF18, 0xD1DFAD0F, 0x8ED476D3, 0x80170000}};
  s21_decimal val2 = {{0x64DEAF18, 0xD1DFAD0F, 0x8ED476D3, 0x801C0000}};
  s21_decimal val3 = {{0x64E9911D, 0xEEBDA22A, 0x8ED41938, 0x80170000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_59) {
  int true_res = 0;
  s21_decimal val1 = {{0x1C186D00, 0xC103B6F7, 0x21AB2895, 0x80120000}};
  s21_decimal val2 = {{0x1C186D00, 0xC103B6F7, 0x21AB2895, 0x800D0000}};
  s21_decimal val3 = {{0xD3897C42, 0x1A2B717C, 0x21AB1285, 0x000D0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_60) {
  int true_res = 0;
  s21_decimal val1 = {{0xEC1E06A0, 0xEA8A7E6F, 0xE67B443B, 0x00190000}};
  s21_decimal val2 = {{0xEC1E06A0, 0xEA8A7E6F, 0xE67B443B, 0x000F0000}};
  s21_decimal val3 = {{0x6C6FAEE7, 0x878CC8AC, 0xE67B443B, 0x800F0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_61) {
  int true_res = 0;
  s21_decimal val1 = {{0xB819FF07, 0x0CBC9909, 0x86EE7F30, 0x001A0000}};
  s21_decimal val2 = {{0xB819FF07, 0x0CBC9909, 0x86EE7F30, 0x000C0000}};
  s21_decimal val3 = {{0x3BF7A9BA, 0x0CBB1D3D, 0x86EE7F30, 0x800C0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_62) {
  int true_res = 0;
  s21_decimal val1 = {{0xFA518B9F, 0x646B7DB7, 0x59737384, 0x80020000}};
  s21_decimal val2 = {{0xFA518B9F, 0x646B7DB7, 0x59737384, 0x000C0000}};
  s21_decimal val3 = {{0x64AF75B2, 0x8AD6BB02, 0x59737384, 0x80020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_63) {
  int true_res = 0;
  s21_decimal val1 = {{0x018554D4, 0xE507F342, 0xCA3100B6, 0x80050000}};
  s21_decimal val2 = {{0x018554D4, 0xE507F342, 0xCA3100B6, 0x000C0000}};
  s21_decimal val3 = {{0xB00674FD, 0x1D955EA2, 0xCA31020A, 0x80050000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_64) {
  int true_res = 0;
  s21_decimal val1 = {{0x6A1EC7AC, 0x086F5140, 0xF918D9CC, 0x00050000}};
  s21_decimal val2 = {{0x6A1EC7AC, 0x086F5140, 0xF918D9CC, 0x80150000}};
  s21_decimal val3 = {{0x591DC832, 0x086F5843, 0xF918D9CC, 0x00050000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_65) {
  int true_res = 0;
  s21_decimal val1 = {{0xA647F94F, 0xA34C94B9, 0x748E4813, 0x80100000}};
  s21_decimal val2 = {{0xA647F94F, 0xA34C94B9, 0x748E4813, 0x800A0000}};
  s21_decimal val3 = {{0xCFF2814F, 0x28012807, 0x748E4070, 0x000A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_66) {
  int true_res = 0;
  s21_decimal val1 = {{0xF7893F55, 0x2FC22572, 0x19A47144, 0x00090000}};
  s21_decimal val2 = {{0xF7893F55, 0x2FC22572, 0x19A47144, 0x80110000}};
  s21_decimal val3 = {{0xFBEC38C8, 0x7D16CD72, 0x19A47148, 0x00090000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_67) {
  int true_res = 0;
  s21_decimal val1 = {{0x040271D6, 0xEF2D67DD, 0x45CF272A, 0x80010000}};
  s21_decimal val2 = {{0x040271D6, 0xEF2D67DD, 0x45CF272A, 0x80110000}};
  s21_decimal val3 = {{0xFCC7E0A0, 0xEF2D65E5, 0x45CF272A, 0x80010000}};
  s21_decimal output;
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_68) {
  int true_res = 0;
  s21_decimal val1 = {{0xD7848316, 0x770F178C, 0x4A5C5C39, 0x80080000}};
  s21_decimal val2 = {{0xD7848316, 0x770F178C, 0x4A5C5C39, 0x800D0000}};
  s21_decimal val3 = {{0xACE2E7D6, 0xCBC7ED28, 0x4A5C2B7D, 0x80080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_69) {
  int true_res = 0;
  s21_decimal val1 = {{0x4D25B83D, 0xEDB64849, 0x2EF8025E, 0x00170000}};
  s21_decimal val2 = {{0x4D25B83D, 0xEDB64849, 0x2EF8025E, 0x000E0000}};
  s21_decimal val3 = {{0x98170824, 0x23FB8E4A, 0x2EF8025E, 0x800E0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_70) {
  int true_res = 0;
  s21_decimal val1 = {{0xF038ABED, 0xEB145610, 0xB67D0751, 0x000D0000}};
  s21_decimal val2 = {{0xF038ABED, 0xEB145610, 0xB67D0751, 0x800E0000}};
  s21_decimal val3 = {{0x3B7189EB, 0x82965EAC, 0xC8BCBB40, 0x000D0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_71) {
  int true_res = 0;
  s21_decimal val1 = {{0xA7D5ED93, 0x589FA3E4, 0x77D51DA6, 0x001B0000}};
  s21_decimal val2 = {{0xA7D5ED93, 0x589FA3E4, 0x77D51DA6, 0x801C0000}};
  s21_decimal val3 = {{0xB89E8555, 0x94AF9AAE, 0x83D0D3D0, 0x001B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_72) {
  int true_res = 0;
  s21_decimal val1 = {{0x2E97F1E9, 0xE9265890, 0x92FC5223, 0x00150000}};
  s21_decimal val2 = {{0x2E97F1E9, 0xE9265890, 0x92FC5223, 0x000A0000}};
  s21_decimal val3 = {{0xCDADA724, 0xE2D638CC, 0x92FC5223, 0x800A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_73) {
  int true_res = 0;
  s21_decimal val1 = {{0xD92C6917, 0x6E53EE94, 0xDD9634C0, 0x00160000}};
  s21_decimal val2 = {{0xD92C6917, 0x6E53EE94, 0xDD9634C0, 0x800F0000}};
  s21_decimal val3 = {{0xA6C96276, 0x311BEAFA, 0xDD963634, 0x000F0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_74) {
  int true_res = 0;
  s21_decimal val1 = {{0x2C10CCFF, 0xCAEDA455, 0xCC98C1A9, 0x80140000}};
  s21_decimal val2 = {{0x2C10CCFF, 0xCAEDA455, 0xCC98C1A9, 0x000E0000}};
  s21_decimal val3 = {{0xB24189BE, 0x5B15DE10, 0xCC98CF12, 0x800E0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_75) {
  int true_res = 0;
  s21_decimal val1 = {{0xFC9CF67C, 0x50A32F9F, 0x30CE39C7, 0x800B0000}};
  s21_decimal val2 = {{0xFC9CF67C, 0x50A32F9F, 0x30CE39C7, 0x00030000}};
  s21_decimal val3 = {{0x5B8BB434, 0x80D217F8, 0x30CE39CF, 0x80030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_76) {
  int true_res = 0;
  s21_decimal val1 = {{0x07C5EEA3, 0xE998E821, 0x4183F759, 0x80020000}};
  s21_decimal val2 = {{0x07C5EEA3, 0xE998E821, 0x4183F759, 0x00020000}};
  s21_decimal val3 = {{0x0F8BDD46, 0xD331D042, 0x8307EEB3, 0x80020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_77) {
  int true_res = 0;
  s21_decimal val1 = {{0xF2F0B621, 0x0E11BEAC, 0x465F474A, 0x80150000}};
  s21_decimal val2 = {{0xF2F0B621, 0x0E11BEAC, 0x465F474A, 0x00040000}};
  s21_decimal val3 = {{0xA8510692, 0x0E11BEDF, 0x465F474A, 0x80040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_78) {
  int true_res = 0;
  s21_decimal val1 = {{0xA060E317, 0xA138A8C1, 0x615BDD5F, 0x80160000}};
  s21_decimal val2 = {{0xA060E317, 0xA138A8C1, 0x615BDD5F, 0x00070000}};
  s21_decimal val3 = {{0x121B14F1, 0xA138C429, 0x615BDD5F, 0x80070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_79) {
  int true_res = 0;
  s21_decimal val1 = {{0xB2C5445F, 0xB23F4837, 0xCA6A9DC1, 0x80130000}};
  s21_decimal val2 = {{0xB2C5445F, 0xB23F4837, 0xCA6A9DC1, 0x00170000}};
  s21_decimal val3 = {{0x0686AB51, 0x2DFD64DF, 0xCA6FCC50, 0x80130000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_80) {
  int true_res = 0;
  s21_decimal val1 = {{0xB14728B5, 0x9C344D25, 0xBC547C8A, 0x800C0000}};
  s21_decimal val2 = {{0xB14728B5, 0x9C344D25, 0xBC547C8A, 0x00160000}};
  s21_decimal val3 = {{0xE2FF3E2A, 0xED176818, 0xBC547C8A, 0x800C0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_81) {
  int true_res = 0;
  s21_decimal val1 = {{0x568A640F, 0x5F232F9D, 0x7E6BFA0D, 0x80170000}};
  s21_decimal val2 = {{0x38AB49DE, 0xD0C64B06, 0x71212A96, 0x80170000}};
  s21_decimal val3 = {{0x1DDF1A31, 0x8E5CE497, 0x0D4ACF76, 0x80170000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_82) {
  int true_res = 0;
  s21_decimal val1 = {{0x424AB8F7, 0x5C8D78DD, 0x316D9C46, 0x800C0000}};
  s21_decimal val2 = {{0xA36A1A79, 0x9E877275, 0x221EE116, 0x800C0000}};
  s21_decimal val3 = {{0x9EE09E7E, 0xBE060667, 0x0F4EBB2F, 0x800C0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_83) {
  int true_res = 0;
  s21_decimal val1 = {{0xCBA47471, 0xC084AD87, 0xD7C633D7, 0x801B0000}};
  s21_decimal val2 = {{0x78DF7BC7, 0xE4406539, 0x178271E4, 0x801B0000}};
  s21_decimal val3 = {{0x52C4F8AA, 0xDC44484E, 0xC043C1F2, 0x801B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_84) {
  int true_res = 0;
  s21_decimal val1 = {{0x4EFAC9F0, 0xA382481B, 0x0A3385B7, 0x00120000}};
  s21_decimal val2 = {{0x75572F35, 0x8A1D7EA9, 0x0B83FC21, 0x00120000}};
  s21_decimal val3 = {{0x265C6545, 0xE69B368E, 0x01507669, 0x80120000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_85) {
  int true_res = 0;
  s21_decimal val1 = {{0xC6BFE77A, 0xC5BAADDE, 0xF35104A1, 0x00000000}};
  s21_decimal val2 = {{0xB1E8BD10, 0x46ADB2F5, 0x3F4CEB30, 0x00000000}};
  s21_decimal val3 = {{0x14D72A6A, 0x7F0CFAE9, 0xB4041971, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_86) {
  int true_res = 0;
  s21_decimal val1 = {{0x31477617, 0xBC57F5E5, 0x734CFEAA, 0x800A0000}};
  s21_decimal val2 = {{0xEAC40098, 0x4EBF989D, 0x24D81BEB, 0x800A0000}};
  s21_decimal val3 = {{0x4683757F, 0x6D985D47, 0x4E74E2BF, 0x800A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_87) {
  int true_res = 0;
  s21_decimal val1 = {{0x32A730E0, 0xF239EA72, 0x75290BB2, 0x000F0000}};
  s21_decimal val2 = {{0xC82B10FC, 0x7B4FC477, 0x86B3140B, 0x000F0000}};
  s21_decimal val3 = {{0x9583E01C, 0x8915DA05, 0x118A0858, 0x800F0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_88) {
  int true_res = 0;
  s21_decimal val1 = {{0xA3D323DB, 0x00CCECB5, 0x4B5485FD, 0x00140000}};
  s21_decimal val2 = {{0x16BDF43A, 0xE454FEB6, 0x4CB47C66, 0x00140000}};
  s21_decimal val3 = {{0x72EAD05F, 0xE3881200, 0x015FF669, 0x80140000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_89) {
  int true_res = 0;
  s21_decimal val1 = {{0x2E21B647, 0x3A883C7F, 0xA49F45A6, 0x00060000}};
  s21_decimal val2 = {{0xE15A6A9C, 0x61295990, 0x707C2A03, 0x00060000}};
  s21_decimal val3 = {{0x4CC74BAB, 0xD95EE2EE, 0x34231BA2, 0x00060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_90) {
  int true_res = 0;
  s21_decimal val1 = {{0x9033420F, 0x40B66F8C, 0x8BB4A041, 0x801C0000}};
  s21_decimal val2 = {{0xF03377C8, 0xE1381C7A, 0x0D6B4DD6, 0x801C0000}};
  s21_decimal val3 = {{0x9FFFCA47, 0x5F7E5311, 0x7E49526A, 0x801C0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_92) {
  int true_res = 0;
  s21_decimal val1 = {{0xCEF5AA88, 0x941225FD, 0xB6C2BF30, 0x80080000}};
  s21_decimal val2 = {{0xCE673612, 0x036408FC, 0x47CE0182, 0x80080000}};
  s21_decimal val3 = {{0x008E7476, 0x90AE1D01, 0x6EF4BDAE, 0x80080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_93) {
  int true_res = 0;
  s21_decimal val1 = {{0xF27D8833, 0xAD25E2F6, 0xF1689D0B, 0x00040000}};
  s21_decimal val2 = {{0xDB533FD5, 0x3C77F609, 0xE5A9EF7F, 0x00040000}};
  s21_decimal val3 = {{0x172A485E, 0x70ADECED, 0x0BBEAD8C, 0x00040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_94) {
  int true_res = 0;
  s21_decimal val1 = {{0x869BFF70, 0x415F8A00, 0x762C0E4A, 0x000A0000}};
  s21_decimal val2 = {{0x3FAAE9FC, 0x7C37A5EC, 0x1EA03C9A, 0x000A0000}};
  s21_decimal val3 = {{0x46F11574, 0xC527E414, 0x578BD1AF, 0x000A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_95) {
  int true_res = 0;
  s21_decimal val1 = {{0xBABB68EC, 0x69D8686C, 0x72EBF117, 0x00000000}};
  s21_decimal val2 = {{0x951C9796, 0x3EFC0048, 0x73340E96, 0x00000000}};
  s21_decimal val3 = {{0xDA612EAA, 0xD52397DB, 0x00481D7E, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_96) {
  int true_res = 0;
  s21_decimal val1 = {{0xBCCCC443, 0x55F45DAB, 0x0C2A94BF, 0x00160000}};
  s21_decimal val2 = {{0x598322DB, 0xE34E50E4, 0x0C10B87F, 0x00160000}};
  s21_decimal val3 = {{0x6349A168, 0x72A60CC7, 0x0019DC3F, 0x00160000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_97) {
  int true_res = 0;
  s21_decimal val1 = {{0xAE06CAA9, 0xB09C0D3F, 0x17A82F33, 0x801B0000}};
  s21_decimal val2 = {{0xF84E7EBA, 0x64FD57A9, 0xD2D6F947, 0x801B0000}};
  s21_decimal val3 = {{0x4A47B411, 0xB4614A6A, 0xBB2ECA13, 0x001B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_98) {
  int true_res = 0;
  s21_decimal val1 = {{0x35988C06, 0x93E3E607, 0x918C63F9, 0x000C0000}};
  s21_decimal val2 = {{0x3B269DEB, 0x6BD8A2FF, 0xD3E0ECAF, 0x000C0000}};
  s21_decimal val3 = {{0x058E11E5, 0xD7F4BCF8, 0x425488B5, 0x800C0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_99) {
  int true_res = 0;
  s21_decimal val1 = {{0xB3141097, 0x9BBECA08, 0x39E60683, 0x001C0000}};
  s21_decimal val2 = {{0xA554A1BC, 0x36CEC067, 0x14A8E2C7, 0x001C0000}};
  s21_decimal val3 = {{0x0DBF6EDB, 0x64F009A1, 0x253D23BC, 0x001C0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_100) {
  int true_res = 0;
  s21_decimal val1 = {{0x603F0E3E, 0x8E28DB8B, 0x5251891E, 0x00030000}};
  s21_decimal val2 = {{0x6936F0A7, 0x9CD226DB, 0x2DC3221E, 0x00030000}};
  s21_decimal val3 = {{0xF7081D97, 0xF156B4AF, 0x248E66FF, 0x00030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_101) {
  int true_res = 0;
  s21_decimal val1 = {{0x25EC0DF3, 0xC7051468, 0x04D1526F, 0x800C0000}};
  s21_decimal val2 = {{0x260701ED, 0x19E45CE6, 0x1603E1FD, 0x801C0000}};
  s21_decimal result = {{0x1F117D3F, 0xC632C5DF, 0x302D385D, 0x800D0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_102) {
  int true_res = 0;
  s21_decimal val1 = {{0x55E94313, 0x7F5C343B, 0xE2558DEC, 0x001C0000}};
  s21_decimal val2 = {{0xE7CEC7EF, 0xD3F52FDC, 0x14879F14, 0x80080000}};
  s21_decimal result = {{0xAF971CC7, 0x4793DEA2, 0xCD4C36D0, 0x00090000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_103) {
  int true_res = 0;
  s21_decimal val1 = {{0x78EE7A12, 0x862F0D84, 0xCCE97134, 0x00190000}};
  s21_decimal val2 = {{0x633197BD, 0xFFA0D59A, 0xFC976038, 0x80080000}};
  s21_decimal result = {{0x0AC3B453, 0xFFA0D62E, 0xFC976038, 0x00080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_104) {
  int true_res = 0;
  s21_decimal val1 = {{0x8DCAD9F2, 0xACB91563, 0x5743BCE5, 0x00190000}};
  s21_decimal val2 = {{0x1D9EFF2C, 0x88D157FC, 0x7BE42508, 0x00160000}};
  s21_decimal result = {{0x45ABD994, 0x79076E3C, 0x7BCDCE0F, 0x80160000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_105) {
  int true_res = 0;
  s21_decimal val1 = {{0x802C26D1, 0x28D10664, 0xD9988371, 0x80110000}};
  s21_decimal val2 = {{0x1A20B562, 0x9B4A71EE, 0x25371CB0, 0x80090000}};
  s21_decimal result = {{0xCE1080A1, 0x199FCF66, 0x25371C8C, 0x00090000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_106) {
  int true_res = 0;
  s21_decimal val1 = {{0x9A5547BE, 0xB3423C2A, 0xA13A247F, 0x001B0000}};
  s21_decimal val2 = {{0xC80AEC58, 0x5EFB4448, 0x4C033273, 0x80150000}};
  s21_decimal result = {{0x4E5E9E93, 0x502FCA63, 0x4C033D04, 0x00150000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_107) {
  int true_res = 0;
  s21_decimal val1 = {{0x91D82A51, 0x7F80E71D, 0x95435437, 0x800A0000}};
  s21_decimal val2 = {{0x819938FF, 0xBBAD03A2, 0xE0EC554F, 0x800A0000}};
  s21_decimal result = {{0xEFC10EAE, 0x3C2C1C84, 0x4BA90118, 0x000A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_108) {
  int true_res = 0;
  s21_decimal val1 = {{0xE66FF6E1, 0xFCB10E92, 0x064295EE, 0x80180000}};
  s21_decimal val2 = {{0x42F5B150, 0xC581CCCE, 0x46277D32, 0x00060000}};
  s21_decimal result = {{0xB6702E34, 0xC581CCCE, 0x46277D32, 0x80060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_109) {
  int true_res = 0;
  s21_decimal val1 = {{0x4EFBBFB3, 0x10EAA18A, 0xDFE3B7FA, 0x00070000}};
  s21_decimal val2 = {{0x4C1D2037, 0xA8BC34E6, 0x5006B094, 0x000E0000}};
  s21_decimal result = {{0x9A67F9EF, 0xCDF4600B, 0xDFE3B773, 0x00070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_110) {
  int true_res = 0;
  s21_decimal val1 = {{0xA93DF2E2, 0x0E0AA4C9, 0xC94349C9, 0x80030000}};
  s21_decimal val2 = {{0xE0B36A04, 0xB6D68640, 0x90672E6A, 0x00110000}};
  s21_decimal result = {{0x06AE8B45, 0x0E0C3B3F, 0xC94349C9, 0x80030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_111) {
  int true_res = 0;
  s21_decimal val1 = {{0xD692D68E, 0x7F0E15BE, 0xFCBECF17, 0x00130000}};
  s21_decimal val2 = {{0xEA9FD18D, 0x848A1E7F, 0xBAA8F4F3, 0x80190000}};
  s21_decimal result = {{0xB2F46A6E, 0x2198F4F6, 0xFCBEDB53, 0x00130000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_112) {
  int true_res = 0;
  s21_decimal val1 = {{0x104DF60A, 0xBB3F9EB3, 0x5613B7B9, 0x00020000}};
  s21_decimal val2 = {{0x5E337C95, 0x2CF6A51C, 0x415C20D6, 0x800E0000}};
  s21_decimal result = {{0x7A6F5C83, 0xBB877BDE, 0x5613B7B9, 0x00020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_113) {
  int true_res = 0;
  s21_decimal val1 = {{0x1819886C, 0xBF02F130, 0x82BD8C26, 0x00140000}};
  s21_decimal val2 = {{0xB26A3C18, 0xF24C763C, 0x050CCA88, 0x80160000}};
  s21_decimal result = {{0x760B3C39, 0x5B08D3A6, 0x82CA79B2, 0x00140000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_114) {
  int true_res = 0;
  s21_decimal val1 = {{0xF696B27E, 0x58DC0A9B, 0x5F6295CF, 0x000E0000}};
  s21_decimal val2 = {{0xEC97935E, 0x911B2C6E, 0xA13C4ABB, 0x00170000}};
  s21_decimal result = {{0xCCE5E5C6, 0xA45BB7AF, 0x5F6295CC, 0x000E0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_115) {
  int true_res = 0;
  s21_decimal val1 = {{0xF43FA3F3, 0x338EE9CF, 0xF240EA9B, 0x80110000}};
  s21_decimal val2 = {{0x3D7DA479, 0x02FC5CE6, 0x65D8C82B, 0x80150000}};
  s21_decimal result = {{0x68D32921, 0x9E2E94B5, 0xF23E4F24, 0x80110000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_116) {
  int true_res = 0;
  s21_decimal val1 = {{0x6EAD958D, 0xDE4490F7, 0xB2710DD9, 0x00110000}};
  s21_decimal val2 = {{0xA3DA33A6, 0x0BEE769A, 0x9B618812, 0x001A0000}};
  s21_decimal result = {{0xB8BB30CB, 0x42E95E87, 0xB2710DD7, 0x00110000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_117) {
  int true_res = 0;
  s21_decimal val1 = {{0x82EC2609, 0x2CBEE3C7, 0x1432D3A8, 0x80060000}};
  s21_decimal val2 = {{0xA73FF392, 0x57C938D9, 0xFA1DA55F, 0x80070000}};
  s21_decimal result = {{0x8A067738, 0x9854530E, 0x302160CD, 0x00070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_119) {
  int true_res = 0;
  s21_decimal val1 = {{0xA665E359, 0xA35A3CB1, 0x2D2BA7BA, 0x80090000}};
  s21_decimal val2 = {{0xA0587348, 0x346FB66D, 0xD6F507EE, 0x001A0000}};
  s21_decimal result = {{0x8AFE661F, 0xA35A3D4C, 0x2D2BA7BA, 0x80090000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_120) {
  int true_res = 0;
  s21_decimal val1 = {{0x2800890D, 0x9FC31A22, 0x07C1E623, 0x00050000}};
  s21_decimal val2 = {{0x161811E5, 0x7106BAD7, 0xB8D50618, 0x800B0000}};
  s21_decimal result = {{0x24EDBC38, 0xECE91EBF, 0x4D937685, 0x00060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_121) {
  int true_res = 0;
  s21_decimal val1 = {{0x1C9B0F9A, 0xD8C816CD, 0x0DC68556, 0x80140000}};
  s21_decimal val2 = {{0xA86A81DD, 0x135CC08F, 0x7CC1CE87, 0x000A0000}};
  s21_decimal result = {{0x4049635A, 0x194761A1, 0x7CC1CE87, 0x800A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_122) {
  int true_res = 0;
  s21_decimal val1 = {{0xE7AD82E2, 0x89AB0884, 0x65951C0E, 0x801C0000}};
  s21_decimal val2 = {{0x0C5581AB, 0x1CC6F921, 0x5D53B98C, 0x000D0000}};
  s21_decimal result = {{0xD5F6D915, 0x1CC715B8, 0x5D53B98C, 0x800D0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_123) {
  int true_res = 0;
  s21_decimal val1 = {{0x48EBDD86, 0x20CB352C, 0x9A2244F0, 0x000B0000}};
  s21_decimal val2 = {{0x23C00E9D, 0x484D98E3, 0x62BCC3E9, 0x00010000}};
  s21_decimal result = {{0x38B04B8B, 0x061A664C, 0x62BCC3E9, 0x80010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_124) {
  int true_res = 0;
  s21_decimal val1 = {{0x68B1255F, 0x23F5ED1C, 0x01D80985, 0x000B0000}};
  s21_decimal val2 = {{0x4B46D33D, 0x83BA9E41, 0xC8EECBD2, 0x80070000}};
  s21_decimal result = {{0x402022BB, 0x0EB7087E, 0xC8EED7E8, 0x00070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_125) {
  int true_res = 0;
  s21_decimal val1 = {{0x1FD85169, 0xEEB15FA0, 0xAEB0314A, 0x801C0000}};
  s21_decimal val2 = {{0x63E10AFC, 0x72FBC416, 0x0F6A05D2, 0x00090000}};
  s21_decimal result = {{0x7D38603F, 0x7DD5A8EC, 0x9A243A38, 0x800A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_126) {
  int true_res = 0;
  s21_decimal val1 = {{0x6CA6C90F, 0x6D3D01BE, 0xA2A58E58, 0x80150000}};
  s21_decimal val2 = {{0x463557B6, 0xBE0721B7, 0x1D172298, 0x00020000}};
  s21_decimal result = {{0x723D139E, 0xBE0721B8, 0x1D172298, 0x80020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_127) {
  int true_res = 0;
  s21_decimal val1 = {{0x47295696, 0x669B22D5, 0x47696700, 0x800F0000}};
  s21_decimal val2 = {{0x3F0FFD78, 0xDC2003D8, 0xA0F62234, 0x00130000}};
  s21_decimal result = {{0x55B565BE, 0xEB07FD8F, 0x476D85E0, 0x800F0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_128) {
  int true_res = 0;
  s21_decimal val1 = {{0xFAEC1CF5, 0xDF8020AA, 0x22563744, 0x00140000}};
  s21_decimal val2 = {{0xEB8A0798, 0x94047DC5, 0x27374490, 0x80050000}};
  s21_decimal result = {{0x2558FDC5, 0x94048770, 0x27374490, 0x00050000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_129) {
  int true_res = 0;
  s21_decimal val1 = {{0xBE044C26, 0xE99F69E1, 0x8551A8A7, 0x80040000}};
  s21_decimal val2 = {{0x1E3DD38F, 0x9B498264, 0x55550DCD, 0x80100000}};
  s21_decimal result = {{0xB3044791, 0xE94196FD, 0x8551A8A7, 0x80040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_130) {
  int true_res = 0;
  s21_decimal val1 = {{0xA66E5936, 0xE6BA700E, 0xF94BE1E2, 0x000F0000}};
  s21_decimal val2 = {{0x37551A6C, 0x88AB5CFF, 0xD6BA7F4B, 0x000B0000}};
  s21_decimal result = {{0x08AC2EF2, 0x8D82A400, 0xD6B41D81, 0x800B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_131) {
  int true_res = 0;
  s21_decimal val1 = {{0xC3558BA5, 0x1C7378F3, 0x21EA76FA, 0x80090000}};
  s21_decimal val2 = {{0x1EAE8F2C, 0xD486AA8F, 0x880002BD, 0x80160000}};
  s21_decimal result = {{0x2EC3C145, 0x1C6484E4, 0x21EA76FA, 0x80090000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_132) {
  int true_res = 0;
  s21_decimal val1 = {{0x35B3935F, 0x9C5A13CB, 0x8B893F26, 0x80110000}};
  s21_decimal val2 = {{0x7CF85027, 0x519658EA, 0xD0AED960, 0x00120000}};
  s21_decimal result = {{0x0EFF9B63, 0xA482B649, 0xA0678816, 0x80110000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_133) {
  int true_res = 0;
  s21_decimal val1 = {{0x9D8EC820, 0xE235D79E, 0x4C1219AC, 0x80020000}};
  s21_decimal val2 = {{0x94A4BADD, 0x50E8B036, 0xB210CF97, 0x80030000}};
  s21_decimal result = {{0x284B1BD7, 0x26EB5F99, 0x3A439E84, 0x80020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_134) {
  int true_res = 0;
  s21_decimal val1 = {{0xDF29B11A, 0x57FE6B3B, 0xD8C9F956, 0x80100000}};
  s21_decimal val2 = {{0x9F41D4DD, 0x552EE390, 0xCAF79ED1, 0x00060000}};
  s21_decimal result = {{0xCC0F18F3, 0xB24B1655, 0xCAF79ED1, 0x80060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_135) {
  int true_res = 0;
  s21_decimal val1 = {{0xD26B07F9, 0xBAFD2C7C, 0x97683D2D, 0x00170000}};
  s21_decimal val2 = {{0x3098070C, 0x23E56FBB, 0x6944AFD6, 0x00080000}};
  s21_decimal result = {{0x27075868, 0x23E5451D, 0x6944AFD6, 0x80080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_136) {
  int true_res = 0;
  s21_decimal val1 = {{0x39DFC9B6, 0x3DF0147B, 0xB920EA34, 0x000B0000}};
  s21_decimal val2 = {{0x9D3A2502, 0x95083D86, 0x7CADBDBE, 0x00190000}};
  s21_decimal result = {{0xC5807CFD, 0x3DEEB58A, 0xB920EA34, 0x000B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_137) {
  int true_res = 0;
  s21_decimal val1 = {{0x74457C43, 0x3948853C, 0x6E4D7D3C, 0x80160000}};
  s21_decimal val2 = {{0xAEB48CB9, 0x4CC97153, 0x6FCBE032, 0x00040000}};
  s21_decimal result = {{0xA16E4948, 0x4CC9715B, 0x6FCBE032, 0x80040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_138) {
  int true_res = 0;
  s21_decimal val1 = {{0x9FAAA48B, 0x124B14D7, 0x7EFE8507, 0x80130000}};
  s21_decimal val2 = {{0x4B1D170A, 0x1C48A99A, 0xEFBBE20C, 0x000A0000}};
  s21_decimal result = {{0x93342D0B, 0x3DB847F8, 0xEFBBE20E, 0x800A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_139) {
  int true_res = 0;
  s21_decimal val1 = {{0x4390EFA7, 0xC21B3969, 0x5CCD1418, 0x001C0000}};
  s21_decimal val2 = {{0x7D908AD7, 0x3C5364A0, 0x41026300, 0x001A0000}};
  s21_decimal result = {{0x990C8871, 0x449FEBBB, 0x4014D0E1, 0x801A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_140) {
  int true_res = 0;
  s21_decimal val1 = {{0x292A3044, 0xB760CE2D, 0xBA4B0C79, 0x80120000}};
  s21_decimal val2 = {{0xEEEB26F2, 0x4B86D46A, 0xD614567F, 0x800E0000}};
  s21_decimal result = {{0x5079DE2F, 0x3CF1230A, 0xD60F919B, 0x000E0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_141) {
  int true_res = 0;
  s21_decimal val1 = {{0xECFE44D8, 0x82BF575D, 0x38C72006, 0x800E0000}};
  s21_decimal val2 = {{0x0C2113F0, 0xA987C0B0, 0xB987B739, 0x80120000}};
  s21_decimal result = {{0xBF1DE83F, 0x96920A92, 0x38C26022, 0x800E0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_142) {
  int true_res = 0;
  s21_decimal val1 = {{0x170E1C49, 0x953060E1, 0x38861A66, 0x001C0000}};
  s21_decimal val2 = {{0xB377B20D, 0x3700126A, 0x83314288, 0x80150000}};
  s21_decimal result = {{0x376B9418, 0x0BCE0AD4, 0x833142E7, 0x00150000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_143) {
  int true_res = 0;
  s21_decimal val1 = {{0x58E0D379, 0xD7FB2C30, 0x87402EB4, 0x000E0000}};
  s21_decimal val2 = {{0xFF7CDA8F, 0x6F0B6CAB, 0xFE48B671, 0x800B0000}};
  s21_decimal result = {{0x9B397E9C, 0xDAC7D5EE, 0xFE6B563B, 0x000B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_144) {
  int true_res = 0;
  s21_decimal val1 = {{0xF10C80F1, 0xA61FACA9, 0xC2C3D66A, 0x00180000}};
  s21_decimal val2 = {{0x1F10B257, 0x6024DFC4, 0x52F82FFA, 0x000C0000}};
  s21_decimal result = {{0x81057C49, 0x5F4EBA4B, 0x52F82FFA, 0x800C0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_145) {
  int true_res = 0;
  s21_decimal val1 = {{0x3959D81D, 0x32932E99, 0xC779B24D, 0x80070000}};
  s21_decimal val2 = {{0x0060327A, 0x5463057D, 0x2CF1470B, 0x80140000}};
  s21_decimal result = {{0x73B13908, 0x328E3D94, 0xC779B24D, 0x80070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_146) {
  int true_res = 0;
  s21_decimal val1 = {{0x6ECE2FD0, 0x7717418F, 0x8212B396, 0x80120000}};
  s21_decimal val2 = {{0x273E36BD, 0x692A250F, 0x0650266A, 0x00090000}};
  s21_decimal result = {{0xE4574562, 0xEE3DC9A4, 0x3F21803D, 0x800A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_147) {
  int true_res = 0;
  s21_decimal val1 = {{0xB8ACF586, 0xB628E921, 0xAAB06BA7, 0x80080000}};
  s21_decimal val2 = {{0x508BE12F, 0x5BC345FE, 0xC266C9EF, 0x00100000}};
  s21_decimal result = {{0x490D8018, 0x53A436DA, 0xAAB06BC8, 0x80080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_148) {
  int true_res = 0;
  s21_decimal val1 = {{0x49871CC4, 0x96481734, 0xBD24235D, 0x00070000}};
  s21_decimal val2 = {{0x4112F004, 0x04C3C000, 0x0237D42D, 0x00090000}};
  s21_decimal result = {{0x15AD52AF, 0x4BFE7401, 0xBD1E75B9, 0x00070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_149) {
  int true_res = 0;
  s21_decimal val1 = {{0xB9C4B51C, 0x996AE44A, 0x140B2EE0, 0x80110000}};
  s21_decimal val2 = {{0x5F8D33D0, 0x183C1DE7, 0xC987B4A6, 0x80050000}};
  s21_decimal result = {{0xB9BE9802, 0x1826141B, 0xC987B4A6, 0x00050000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_150) {
  int true_res = 0;
  s21_decimal val1 = {{0x32E950F6, 0x46BA3318, 0xCE324D53, 0x800B0000}};
  s21_decimal val2 = {{0x3940B8DD, 0x294A5948, 0xA41CF271, 0x80010000}};
  s21_decimal result = {{0x270087DD, 0xD0BACDFE, 0xA41CF270, 0x00010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_151) {
  int true_res = 0;
  s21_decimal val1 = {{0x6B3DA6DD, 0xF300AE4C, 0x9AC4CBA2, 0x000D0000}};
  s21_decimal val2 = {{0x6E6D1BD4, 0x0BE13233, 0xBCBD2E11, 0x00040000}};
  s21_decimal result = {{0x6EE07F55, 0x73272CE5, 0xBCBD2E0E, 0x80040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_152) {
  int true_res = 0;
  s21_decimal val1 = {{0xA0CBF070, 0x1D96C648, 0xD2E1DF4D, 0x80090000}};
  s21_decimal val2 = {{0x8B043D96, 0x5893D533, 0x19D01F7E, 0x80190000}};
  s21_decimal result = {{0xA040853B, 0x1D96C58E, 0xD2E1DF4D, 0x80090000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_153) {
  int true_res = 0;
  s21_decimal val1 = {{0x8DFA0655, 0x114E7629, 0x93126B6C, 0x00020000}};
  s21_decimal val2 = {{0x037C1F44, 0x0DF2429D, 0xD4EA25AE, 0x800B0000}};
  s21_decimal result = {{0xA25658D1, 0xA3C494C7, 0x93126B6F, 0x00020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_154) {
  int true_res = 0;
  s21_decimal val1 = {{0x3792E2D5, 0xE96850AA, 0x29E5B89D, 0x00040000}};
  s21_decimal val2 = {{0xD229F76C, 0xAE40FC7D, 0x59A7E6D1, 0x000A0000}};
  s21_decimal result = {{0xE7428CF8, 0xBC65673D, 0x29E5B2BD, 0x00040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_155) {
  int true_res = 0;
  s21_decimal val1 = {{0xDE8A0EE7, 0x3DBD632C, 0xB4016CEA, 0x801A0000}};
  s21_decimal val2 = {{0xA96B7E03, 0xCA6E2A2F, 0x2FF74EA0, 0x00010000}};
  s21_decimal result = {{0xA96B93C6, 0xCA6E2A2F, 0x2FF74EA0, 0x80010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_156) {
  int true_res = 0;
  s21_decimal val1 = {{0x8EC0BF40, 0x4A5E4062, 0xB7E71A5E, 0x001C0000}};
  s21_decimal val2 = {{0x8D3E5FA3, 0x3780452E, 0x982A038B, 0x801B0000}};
  s21_decimal result = {{0x01EB3F90, 0xA5567ED2, 0xAA8DEC94, 0x001B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_157) {
  int true_res = 0;
  s21_decimal val1 = {{0x43B10A9C, 0x0F4DA496, 0x14A88595, 0x00050000}};
  s21_decimal val2 = {{0x665D181D, 0xF8FC3B3C, 0xCB1A3FE2, 0x80140000}};
  s21_decimal result = {{0x722F4119, 0x990AA98D, 0xCE9537D2, 0x00060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_158) {
  int true_res = 0;
  s21_decimal val1 = {{0x25F81986, 0x564CD1A4, 0x548207DB, 0x80020000}};
  s21_decimal val2 = {{0xF5A580FC, 0x5E327F4F, 0x095CA709, 0x00010000}};
  s21_decimal result = {{0xBE6F235E, 0x0445CAC3, 0xB2208E39, 0x80020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_159) {
  int true_res = 0;
  s21_decimal val1 = {{0x65E38338, 0x5EE34595, 0xF08E288B, 0x001A0000}};
  s21_decimal val2 = {{0x34B3968A, 0x35288464, 0x866C9671, 0x00050000}};
  s21_decimal result = {{0x30439905, 0x35288464, 0x866C9671, 0x80050000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_160) {
  int true_res = 0;
  s21_decimal val1 = {{0xB69D998C, 0x531300D3, 0x2CEF58A2, 0x80020000}};
  s21_decimal val2 = {{0x2B9DFB67, 0x0B742769, 0xFD531D39, 0x00030000}};
  s21_decimal result = {{0x07C6FF7D, 0x076B6B2B, 0x46447528, 0x80020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_161) {
  int true_res = 0;
  s21_decimal val1 = {{0x7CD07368, 0x2719040D, 0x529659B3, 0x801C0000}};
  s21_decimal val2 = {{0x31ACD86C, 0x305150DD, 0x0BEE6398, 0x00190000}};
  s21_decimal result = {{0x8E28F041, 0xA3913FB8, 0x7823505C, 0x801A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_162) {
  int true_res = 0;
  s21_decimal val1 = {{0x47F46A8A, 0x296972D3, 0x4BCF4FB1, 0x80160000}};
  s21_decimal val2 = {{0x35B883FE, 0xC384C165, 0x078167BD, 0x801C0000}};
  s21_decimal result = {{0x5FA722AE, 0x3D94C887, 0x4BCF4F33, 0x80160000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_163) {
  int true_res = 0;
  s21_decimal val1 = {{0x464EFA30, 0xDC0F46B2, 0x3A1570F9, 0x00080000}};
  s21_decimal val2 = {{0x83721924, 0x00DA8374, 0x91AF75DA, 0x800E0000}};
  s21_decimal result = {{0xD4BB4F27, 0x0E0DCD43, 0x3A157A86, 0x00080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_164) {
  int true_res = 0;
  s21_decimal val1 = {{0xF777C094, 0x67685420, 0xA67EE9AD, 0x001B0000}};
  s21_decimal val2 = {{0xD98CEC66, 0x3F8F68BA, 0x6AB548CA, 0x80100000}};
  s21_decimal result = {{0xBBB03457, 0x46B60C9C, 0x6AB548CA, 0x00100000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_165) {
  int true_res = 0;
  s21_decimal val1 = {{0xDD29A96E, 0xBA8AC3E6, 0xE047959D, 0x80020000}};
  s21_decimal val2 = {{0xF93F584C, 0x10B87302, 0xBED50D85, 0x80090000}};
  s21_decimal result = {{0x100AA24D, 0x90B85A06, 0xE047945D, 0x80020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_166) {
  int true_res = 0;
  s21_decimal val1 = {{0x659D63ED, 0x48EA0098, 0x0D30BC71, 0x001B0000}};
  s21_decimal val2 = {{0xD20244E5, 0xEA12C28A, 0x688006EB, 0x80130000}};
  s21_decimal result = {{0xFA726A22, 0x209878A3, 0x688006EE, 0x00130000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_167) {
  int true_res = 0;
  s21_decimal val1 = {{0x248F53D0, 0x3CB40047, 0x64B54D2D, 0x80050000}};
  s21_decimal val2 = {{0x2C9B8078, 0x71A605F8, 0x5876506B, 0x800F0000}};
  s21_decimal result = {{0xA4DE55B0, 0x16B57BB4, 0x64B54D2D, 0x80050000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_168) {
  int true_res = 0;
  s21_decimal val1 = {{0xA10300E8, 0x90AFD2D0, 0x68743FF8, 0x801C0000}};
  s21_decimal val2 = {{0x2D39C677, 0xDC3E61E5, 0x1B02354B, 0x80130000}};
  s21_decimal result = {{0x1F30EBB8, 0x1B9DE237, 0x1B02354A, 0x00130000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_169) {
  int true_res = 0;
  s21_decimal val1 = {{0x63579CE6, 0xE72F856D, 0xB2AE511B, 0x00060000}};
  s21_decimal val2 = {{0xD53E18D4, 0x63E8CBD0, 0x595CA141, 0x00150000}};
  s21_decimal result = {{0x306E811C, 0xE72F6C46, 0xB2AE511B, 0x00060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_170) {
  int true_res = 0;
  s21_decimal val1 = {{0x20A28F5C, 0xF5DC2883, 0xF2315D18, 0x000F0000}};
  s21_decimal val2 = {{0x93E3B030, 0xA8EF988F, 0x7C2CB656, 0x800D0000}};
  s21_decimal result = {{0xF80E461A, 0x59797A3E, 0x7E98B9D4, 0x000D0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_171) {
  int true_res = 0;
  s21_decimal val1 = {{0x901E6543, 0xB221694F, 0x98BD193B, 0x00180000}};
  s21_decimal val2 = {{0x4753D011, 0x31398DA7, 0x17140A89, 0x00050000}};
  s21_decimal result = {{0xC7BE2B59, 0xEC3F887D, 0xE6C8695B, 0x80060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_172) {
  int true_res = 0;
  s21_decimal val1 = {{0x48C0A6CA, 0xA0B6A1FB, 0xBDA6490B, 0x80120000}};
  s21_decimal val2 = {{0xC50501D6, 0xD72AA1BA, 0x831A4F0E, 0x000E0000}};
  s21_decimal result = {{0xCC4589D7, 0xFD8E97A8, 0x831F29F1, 0x800E0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_173) {
  int true_res = 0;
  s21_decimal val1 = {{0x7F26A468, 0xA58EFDF1, 0xE6B1E0D7, 0x00120000}};
  s21_decimal val2 = {{0xD86BDDA1, 0x0815410A, 0xE5FD126C, 0x80130000}};
  s21_decimal result = {{0xC7FE3A92, 0x732AB7A5, 0xFDB195E2, 0x00120000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_174) {
  int true_res = 0;
  s21_decimal val1 = {{0x91C29D20, 0x4E8A193F, 0x2CEFB625, 0x000D0000}};
  s21_decimal val2 = {{0x871B124A, 0x64CCB425, 0xBC12E141, 0x80160000}};
  s21_decimal result = {{0x42C91077, 0x764F5F8B, 0x2CEFB628, 0x000D0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_175) {
  int true_res = 0;
  s21_decimal val1 = {{0xC277F1C4, 0x92C663B5, 0xC4A6AA43, 0x001B0000}};
  s21_decimal val2 = {{0xD0D02EA7, 0x32AE3022, 0xCFE6A1D1, 0x80130000}};
  s21_decimal result = {{0x83A14550, 0x30C73092, 0xCFE6A1F2, 0x00130000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_176) {
  int true_res = 0;
  s21_decimal val1 = {{0xDB1E9508, 0xD65EB5E7, 0xEBEE4C72, 0x00090000}};
  s21_decimal val2 = {{0x2F5CF709, 0xD6F9B161, 0x060B7C37, 0x801B0000}};
  s21_decimal result = {{0x4AA0A566, 0xD65EB5E8, 0xEBEE4C72, 0x00090000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_177) {
  int true_res = 0;
  s21_decimal val1 = {{0x9F0444FD, 0xBC3BE434, 0xC4EC2CC6, 0x00190000}};
  s21_decimal val2 = {{0x76D480C4, 0x0133CC06, 0x9998558B, 0x000B0000}};
  s21_decimal result = {{0xCE7D5542, 0x0131A1BC, 0x9998558B, 0x800B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_178) {
  int true_res = 0;
  s21_decimal val1 = {{0x1FDC8217, 0x70017C3C, 0xE8FC40F7, 0x801A0000}};
  s21_decimal val2 = {{0x3EF9C267, 0xFCE75699, 0x73BBEBE4, 0x00050000}};
  s21_decimal result = {{0x4346006D, 0xFCE75699, 0x73BBEBE4, 0x80050000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_179) {
  int true_res = 0;
  s21_decimal val1 = {{0x21FF6A7D, 0x9DBEF4D5, 0x493D111C, 0x00170000}};
  s21_decimal val2 = {{0x48753C06, 0xF7BCB20B, 0xBDCDCEA6, 0x80110000}};
  s21_decimal result = {{0xAA921C9D, 0xB4E19DC2, 0xBDCDD373, 0x00110000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_180) {
  int true_res = 0;
  s21_decimal val1 = {{0x05309AF4, 0x50D4F243, 0xEE36FF80, 0x80010000}};
  s21_decimal val2 = {{0xBA4CB8BF, 0x8D618310, 0x5952CEB1, 0x00040000}};
  s21_decimal result = {{0x5D70AE98, 0x67C1D806, 0xEE4DDD67, 0x80010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_181) {
  int true_res = 0;
  s21_decimal val1 = {{0x98C4A89A, 0xE79EB60C, 0xF0F09735, 0x00190000}};
  s21_decimal val2 = {{0x6F13FE35, 0xB6210B7C, 0x9B90E560, 0x80060000}};
  s21_decimal result = {{0x2B88999C, 0xB6210B7E, 0x9B90E560, 0x00060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_182) {
  int true_res = 0;
  s21_decimal val1 = {{0xD69E7BCB, 0xC20993C5, 0xEC2E34DC, 0x000A0000}};
  s21_decimal val2 = {{0xF988A394, 0x2A601267, 0x0C6721DD, 0x00100000}};
  s21_decimal result = {{0x13C96519, 0xAC28451F, 0xEC2E340C, 0x000A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_183) {
  int true_res = 0;
  s21_decimal val1 = {{0xAC00A218, 0xD2880107, 0xF96B33F7, 0x80060000}};
  s21_decimal val2 = {{0x1CF2888B, 0xAF7D3B36, 0x3C9AD81E, 0x80100000}};
  s21_decimal result = {{0x2C283EDA, 0xB8806DDE, 0xF96B33F7, 0x80060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_184) {
  int true_res = 0;
  s21_decimal val1 = {{0x431D04AB, 0xFE676C00, 0xDBC39B39, 0x000B0000}};
  s21_decimal val2 = {{0xFA3B65B1, 0x86726896, 0xE92F0307, 0x80080000}};
  s21_decimal result = {{0xC0F483A6, 0x16513B62, 0xE967457D, 0x00080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_185) {
  int true_res = 0;
  s21_decimal val1 = {{0xBF8B6B71, 0xBDA9E8D0, 0xD3187343, 0x800E0000}};
  s21_decimal val2 = {{0xDC7D17D2, 0x0171CEF1, 0x19CE8593, 0x000B0000}};
  s21_decimal result = {{0x2E99A602, 0xF410F44C, 0x1A048FED, 0x800B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_186) {
  int true_res = 0;
  s21_decimal val1 = {{0x31E27F12, 0x5D5A7F54, 0xC4F8F0C8, 0x00020000}};
  s21_decimal val2 = {{0x7048339E, 0x34F64FD9, 0x12DA546C, 0x801A0000}};
  s21_decimal result = {{0x31E295DD, 0x5D5A7F54, 0xC4F8F0C8, 0x00020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_187) {
  int true_res = 0;
  s21_decimal val1 = {{0x511459CE, 0x338E8790, 0x18C03212, 0x80010000}};
  s21_decimal val2 = {{0xCAED063D, 0x109BCB43, 0xB37AED87, 0x00040000}};
  s21_decimal result = {{0x5D76D697, 0xA5037E4F, 0xF94D6CD8, 0x80020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_188) {
  int true_res = 0;
  s21_decimal val1 = {{0x85B28064, 0x3D05D0DF, 0x3A930888, 0x00160000}};
  s21_decimal val2 = {{0x1C948CA6, 0x6D5D595A, 0x0180830C, 0x00170000}};
  s21_decimal result = {{0xB60A0BED, 0xFEE2E189, 0x3A6C9506, 0x00160000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_189) {
  int true_res = 0;
  s21_decimal val1 = {{0xB7F58BC1, 0xC058C5F4, 0x6DB838D8, 0x80060000}};
  s21_decimal val2 = {{0xF41FFCC1, 0x020870F4, 0x3DDCF2B1, 0x80020000}};
  s21_decimal result = {{0xE8F1E88B, 0x092E8670, 0x3DDA23A2, 0x00020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_190) {
  int true_res = 0;
  s21_decimal val1 = {{0x4D64B6FB, 0xCB5D8469, 0xF3CEB2F7, 0x00060000}};
  s21_decimal val2 = {{0x4D0EE923, 0x248D4D02, 0x2522E1DD, 0x80090000}};
  s21_decimal result = {{0x521416F5, 0xD4DFB4DF, 0xF3D834BA, 0x00060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_191) {
  int true_res = 0;
  s21_decimal val1 = {{0x769E42DB, 0x43660137, 0x7BDD3F12, 0x80020000}};
  s21_decimal val2 = {{0x48F58943, 0xDF5B3853, 0x9AAED325, 0x801C0000}};
  s21_decimal result = {{0x769E40FC, 0x43660137, 0x7BDD3F12, 0x80020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_192) {
  int true_res = 0;
  s21_decimal val1 = {{0x92FD0B16, 0x92A4A311, 0x58171B36, 0x00050000}};
  s21_decimal val2 = {{0x21FAD61C, 0xB8F602A6, 0xBCF98818, 0x00130000}};
  s21_decimal result = {{0xEDA496DB, 0x92A28F26, 0x58171B36, 0x00050000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_193) {
  int true_res = 0;
  s21_decimal val1 = {{0x258E9ED7, 0xAD4500B5, 0x8022E39C, 0x800E0000}};
  s21_decimal val2 = {{0xD0C53E21, 0x7690EB45, 0x659C1516, 0x80160000}};
  s21_decimal result = {{0xF1B3445B, 0xA12A9260, 0x8022E38B, 0x800E0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_194) {
  int true_res = 0;
  s21_decimal val1 = {{0xAF461F49, 0xBF2D23CC, 0xBEE5D413, 0x80010000}};
  s21_decimal val2 = {{0xBD195642, 0x05134927, 0xF6AF73CA, 0x800A0000}};
  s21_decimal result = {{0xEC9E2E55, 0x9BABB7AE, 0xBEE5D40F, 0x80010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_195) {
  int true_res = 0;
  s21_decimal val1 = {{0x03642B07, 0xC4501C21, 0x05926C5F, 0x00000000}};
  s21_decimal val2 = {{0x61163B3C, 0x44B99A59, 0x04600A8E, 0x80120000}};
  s21_decimal result = {{0x48FCD212, 0xAB21194D, 0x37B83BBD, 0x00010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_196) {
  int true_res = 0;
  s21_decimal val1 = {{0x124D6DAF, 0xEBF63F7B, 0x190703F1, 0x80030000}};
  s21_decimal val2 = {{0xFB2EBEEE, 0x1BD06527, 0xF7778FAE, 0x001A0000}};
  s21_decimal result = {{0xB77B25C4, 0x379E7ACE, 0xFA462773, 0x80040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_197) {
  int true_res = 0;
  s21_decimal val1 = {{0x0FFFB5EF, 0x52C6FAEA, 0x8C43210C, 0x000F0000}};
  s21_decimal val2 = {{0x4298E0FA, 0x8AC17BDE, 0xA0ED3BE4, 0x00110000}};
  s21_decimal result = {{0x5C22059A, 0x13F32013, 0x8AA72821, 0x000F0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_198) {
  int true_res = 0;
  s21_decimal val1 = {{0xB305999C, 0x3D942124, 0x7409CE2F, 0x001A0000}};
  s21_decimal val2 = {{0x4916012C, 0x44F009E1, 0x3E7B9A38, 0x000A0000}};
  s21_decimal result = {{0x2433047A, 0x44F0069D, 0x3E7B9A38, 0x800A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_199) {
  int true_res = 0;
  s21_decimal val1 = {{0x8DD595C8, 0x30E58C27, 0xEEE7C028, 0x80100000}};
  s21_decimal val2 = {{0x8A1976EA, 0x6EDF01ED, 0x03A62F04, 0x00080000}};
  s21_decimal result = {{0x40C62314, 0x25BEF265, 0x247DD7BD, 0x80090000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_200) {
  int true_res = 0;
  s21_decimal val1 = {{0xCA4A7135, 0x0CB58720, 0x3ABF3F8E, 0x80110000}};
  s21_decimal val2 = {{0xAE152C2C, 0xDFC06133, 0x749F6FDF, 0x801B0000}};
  s21_decimal result = {{0x169B09D9, 0xDA9EB71D, 0x3ABF3F8D, 0x80110000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_201) {
  int true_res = 0;
  s21_decimal val1 = {{0, 0, 0, 0}};
  s21_decimal val2 = {{0, 0, 0, 0}};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_sub_202) {
  int true_res = 0;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal val2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal result = {{0x00000000, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_sub(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

Suite *test_sub(void) {
  Suite *s = suite_create("\033[45m-=S21_SUB=-\033[0m");
  TCase *tc = tcase_create("s21_sub_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, s21_sub_1);
  tcase_add_test(tc, s21_sub_2);
  tcase_add_test(tc, s21_sub_3);
  tcase_add_test(tc, s21_sub_4);
  tcase_add_test(tc, s21_sub_5);
  tcase_add_test(tc, s21_sub_6);
  tcase_add_test(tc, s21_sub_7);
  tcase_add_test(tc, s21_sub_8);
  tcase_add_test(tc, s21_sub_9);
  tcase_add_test(tc, s21_sub_10);
  tcase_add_test(tc, s21_sub_11);
  tcase_add_test(tc, s21_sub_12);
  tcase_add_test(tc, s21_sub_13);
  tcase_add_test(tc, s21_sub_14);
  tcase_add_test(tc, s21_sub_15);
  tcase_add_test(tc, s21_sub_16);
  tcase_add_test(tc, s21_sub_17);
  tcase_add_test(tc, s21_sub_18);
  tcase_add_test(tc, s21_sub_19);
  tcase_add_test(tc, s21_sub_20);
  tcase_add_test(tc, s21_sub_21);
  tcase_add_test(tc, s21_sub_22);
  tcase_add_test(tc, s21_sub_23);
  tcase_add_test(tc, s21_sub_24);
  tcase_add_test(tc, s21_sub_25);
  tcase_add_test(tc, s21_sub_26);
  tcase_add_test(tc, s21_sub_27);
  tcase_add_test(tc, s21_sub_28);
  tcase_add_test(tc, s21_sub_29);
  tcase_add_test(tc, s21_sub_30);
  tcase_add_test(tc, s21_sub_31);
  tcase_add_test(tc, s21_sub_32);
  tcase_add_test(tc, s21_sub_33);
  tcase_add_test(tc, s21_sub_34);
  tcase_add_test(tc, s21_sub_35);
  tcase_add_test(tc, s21_sub_36);
  tcase_add_test(tc, s21_sub_37);
  tcase_add_test(tc, s21_sub_38);
  tcase_add_test(tc, s21_sub_39);
  tcase_add_test(tc, s21_sub_40);
  tcase_add_test(tc, s21_sub_41);
  tcase_add_test(tc, s21_sub_42);
  tcase_add_test(tc, s21_sub_43);
  tcase_add_test(tc, s21_sub_44);
  tcase_add_test(tc, s21_sub_45);
  tcase_add_test(tc, s21_sub_46);
  tcase_add_test(tc, s21_sub_47);
  tcase_add_test(tc, s21_sub_48);
  tcase_add_test(tc, s21_sub_49);
  tcase_add_test(tc, s21_sub_50);
  tcase_add_test(tc, s21_sub_51);
  tcase_add_test(tc, s21_sub_52);
  tcase_add_test(tc, s21_sub_53);
  tcase_add_test(tc, s21_sub_54);
  tcase_add_test(tc, s21_sub_55);
  tcase_add_test(tc, s21_sub_56);
  tcase_add_test(tc, s21_sub_57);
  tcase_add_test(tc, s21_sub_58);
  tcase_add_test(tc, s21_sub_59);
  tcase_add_test(tc, s21_sub_60);
  tcase_add_test(tc, s21_sub_61);
  tcase_add_test(tc, s21_sub_62);
  tcase_add_test(tc, s21_sub_63);
  tcase_add_test(tc, s21_sub_64);
  tcase_add_test(tc, s21_sub_65);
  tcase_add_test(tc, s21_sub_66);
  tcase_add_test(tc, s21_sub_67);
  tcase_add_test(tc, s21_sub_68);
  tcase_add_test(tc, s21_sub_69);
  tcase_add_test(tc, s21_sub_70);
  tcase_add_test(tc, s21_sub_71);
  tcase_add_test(tc, s21_sub_72);
  tcase_add_test(tc, s21_sub_73);
  tcase_add_test(tc, s21_sub_74);
  tcase_add_test(tc, s21_sub_75);
  tcase_add_test(tc, s21_sub_76);
  tcase_add_test(tc, s21_sub_77);
  tcase_add_test(tc, s21_sub_78);
  tcase_add_test(tc, s21_sub_79);
  tcase_add_test(tc, s21_sub_80);
  tcase_add_test(tc, s21_sub_81);
  tcase_add_test(tc, s21_sub_82);
  tcase_add_test(tc, s21_sub_83);
  tcase_add_test(tc, s21_sub_84);
  tcase_add_test(tc, s21_sub_85);
  tcase_add_test(tc, s21_sub_86);
  tcase_add_test(tc, s21_sub_87);
  tcase_add_test(tc, s21_sub_88);
  tcase_add_test(tc, s21_sub_89);
  tcase_add_test(tc, s21_sub_90);
  tcase_add_test(tc, s21_sub_92);
  tcase_add_test(tc, s21_sub_93);
  tcase_add_test(tc, s21_sub_94);
  tcase_add_test(tc, s21_sub_95);
  tcase_add_test(tc, s21_sub_96);
  tcase_add_test(tc, s21_sub_97);
  tcase_add_test(tc, s21_sub_98);
  tcase_add_test(tc, s21_sub_99);
  tcase_add_test(tc, s21_sub_100);
  tcase_add_test(tc, s21_sub_101);
  tcase_add_test(tc, s21_sub_102);
  tcase_add_test(tc, s21_sub_103);
  tcase_add_test(tc, s21_sub_104);
  tcase_add_test(tc, s21_sub_105);
  tcase_add_test(tc, s21_sub_106);
  tcase_add_test(tc, s21_sub_107);
  tcase_add_test(tc, s21_sub_108);
  tcase_add_test(tc, s21_sub_109);
  tcase_add_test(tc, s21_sub_110);
  tcase_add_test(tc, s21_sub_111);
  tcase_add_test(tc, s21_sub_112);
  tcase_add_test(tc, s21_sub_113);
  tcase_add_test(tc, s21_sub_114);
  tcase_add_test(tc, s21_sub_115);
  tcase_add_test(tc, s21_sub_116);
  tcase_add_test(tc, s21_sub_117);
  tcase_add_test(tc, s21_sub_119);
  tcase_add_test(tc, s21_sub_120);
  tcase_add_test(tc, s21_sub_121);
  tcase_add_test(tc, s21_sub_122);
  tcase_add_test(tc, s21_sub_123);
  tcase_add_test(tc, s21_sub_124);
  tcase_add_test(tc, s21_sub_125);
  tcase_add_test(tc, s21_sub_126);
  tcase_add_test(tc, s21_sub_127);
  tcase_add_test(tc, s21_sub_128);
  tcase_add_test(tc, s21_sub_129);
  tcase_add_test(tc, s21_sub_130);
  tcase_add_test(tc, s21_sub_131);
  tcase_add_test(tc, s21_sub_132);
  tcase_add_test(tc, s21_sub_133);
  tcase_add_test(tc, s21_sub_134);
  tcase_add_test(tc, s21_sub_135);
  tcase_add_test(tc, s21_sub_136);
  tcase_add_test(tc, s21_sub_137);
  tcase_add_test(tc, s21_sub_138);
  tcase_add_test(tc, s21_sub_139);
  tcase_add_test(tc, s21_sub_140);
  tcase_add_test(tc, s21_sub_141);
  tcase_add_test(tc, s21_sub_142);
  tcase_add_test(tc, s21_sub_143);
  tcase_add_test(tc, s21_sub_144);
  tcase_add_test(tc, s21_sub_145);
  tcase_add_test(tc, s21_sub_146);
  tcase_add_test(tc, s21_sub_147);
  tcase_add_test(tc, s21_sub_148);
  tcase_add_test(tc, s21_sub_149);
  tcase_add_test(tc, s21_sub_150);
  tcase_add_test(tc, s21_sub_151);
  tcase_add_test(tc, s21_sub_152);
  tcase_add_test(tc, s21_sub_153);
  tcase_add_test(tc, s21_sub_154);
  tcase_add_test(tc, s21_sub_155);
  tcase_add_test(tc, s21_sub_156);
  tcase_add_test(tc, s21_sub_157);
  tcase_add_test(tc, s21_sub_158);
  tcase_add_test(tc, s21_sub_159);
  tcase_add_test(tc, s21_sub_160);
  tcase_add_test(tc, s21_sub_161);
  tcase_add_test(tc, s21_sub_162);
  tcase_add_test(tc, s21_sub_163);
  tcase_add_test(tc, s21_sub_164);
  tcase_add_test(tc, s21_sub_165);
  tcase_add_test(tc, s21_sub_166);
  tcase_add_test(tc, s21_sub_167);
  tcase_add_test(tc, s21_sub_168);
  tcase_add_test(tc, s21_sub_169);
  tcase_add_test(tc, s21_sub_170);
  tcase_add_test(tc, s21_sub_171);
  tcase_add_test(tc, s21_sub_172);
  tcase_add_test(tc, s21_sub_173);
  tcase_add_test(tc, s21_sub_174);
  tcase_add_test(tc, s21_sub_175);
  tcase_add_test(tc, s21_sub_176);
  tcase_add_test(tc, s21_sub_177);
  tcase_add_test(tc, s21_sub_178);
  tcase_add_test(tc, s21_sub_179);
  tcase_add_test(tc, s21_sub_180);
  tcase_add_test(tc, s21_sub_181);
  tcase_add_test(tc, s21_sub_182);
  tcase_add_test(tc, s21_sub_183);
  tcase_add_test(tc, s21_sub_184);
  tcase_add_test(tc, s21_sub_185);
  tcase_add_test(tc, s21_sub_186);
  tcase_add_test(tc, s21_sub_187);
  tcase_add_test(tc, s21_sub_188);
  tcase_add_test(tc, s21_sub_189);
  tcase_add_test(tc, s21_sub_190);
  tcase_add_test(tc, s21_sub_191);
  tcase_add_test(tc, s21_sub_192);
  tcase_add_test(tc, s21_sub_193);
  tcase_add_test(tc, s21_sub_194);
  tcase_add_test(tc, s21_sub_195);
  tcase_add_test(tc, s21_sub_196);
  tcase_add_test(tc, s21_sub_197);
  tcase_add_test(tc, s21_sub_198);
  tcase_add_test(tc, s21_sub_199);
  tcase_add_test(tc, s21_sub_200);
  tcase_add_test(tc, s21_sub_201);
  tcase_add_test(tc, s21_sub_202);

  suite_add_tcase(s, tc);
  return s;
}
