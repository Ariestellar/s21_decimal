#include "test_me.h"

START_TEST(s21_add_1) {
  int true_res = 1;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000}};
  s21_decimal val2 = {{0x99E35D6E, 0x6CA630CA, 0xCF624DAD, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_2) {
  int true_res = 1;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000}};
  s21_decimal val2 = {{0x04F7C106, 0xA2FEA10C, 0xF1091372, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_3) {
  int true_res = 1;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000}};
  s21_decimal val2 = {{0xE8C2D4C2, 0xE1725129, 0x0985A7F3, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_4) {
  int true_res = 1;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000}};
  s21_decimal val2 = {{0x29CEC056, 0x8DB581DE, 0x65064497, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_5) {
  int true_res = 1;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000}};
  s21_decimal val2 = {{0x79AB2B97, 0x9FFD68A3, 0xB812D6BE, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_6) {
  int true_res = 1;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000}};
  s21_decimal val2 = {{0x02F8BB19, 0xECF08C3C, 0x46136FC1, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_7) {
  int true_res = 1;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000}};
  s21_decimal val2 = {{0x8BB73C89, 0x308AA456, 0x66D11F15, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_8) {
  int true_res = 1;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000}};
  s21_decimal val2 = {{0xFCCC97DC, 0x496B3152, 0x68F1A3D3, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_9) {
  int true_res = 1;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000}};
  s21_decimal val2 = {{0x61AD0970, 0xD01EF748, 0xA95E3E4E, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_10) {
  int true_res = 1;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000}};
  s21_decimal val2 = {{0x422BDB6F, 0xEA71081D, 0xFB7D9F9E, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_11) {
  int true_res = 1;
  s21_decimal val1 = {{0xBCA1FF4F, 0x87371DE0, 0xD78DBBFD, 0x00000000}};
  s21_decimal val2 = {{0x17C5B270, 0x1E5ADF3C, 0xC5A48DE8, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_12) {
  int true_res = 0;
  s21_decimal val1 = {{0x92FA1A66, 0xE00ED360, 0x94A84013, 0x00000000}};
  s21_decimal val2 = {{0x98027081, 0x7EC7F0D0, 0x164D19F2, 0x00000000}};
  s21_decimal val3 = {{0x2AFC8AE7, 0x5ED6C431, 0xAAF55A06, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_13) {
  int true_res = 0;
  s21_decimal val1 = {{0xDB2D5C8D, 0x441B0D84, 0x43FF3812, 0x00000000}};
  s21_decimal val2 = {{0xABDBFC70, 0xA040A059, 0x90466ED1, 0x00000000}};
  s21_decimal val3 = {{0x870958FD, 0xE45BADDE, 0xD445A6E3, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_14) {
  int true_res = 1;
  s21_decimal val1 = {{0xAF73C954, 0x45E8074E, 0xE30C397B, 0x00000000}};
  s21_decimal val2 = {{0x84C2C337, 0x73A8BB9D, 0xA4F7A6F1, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_15) {
  int true_res = 0;
  s21_decimal val1 = {{0x14A1D0CE, 0x89BC108A, 0x17C39287, 0x00000000}};
  s21_decimal val2 = {{0x3CFDBF53, 0xB24F4A86, 0x921E04AD, 0x00000000}};
  s21_decimal val3 = {{0x519F9021, 0x3C0B5B10, 0xA9E19735, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_16) {
  int true_res = 0;
  s21_decimal val1 = {{0x2DD0081B, 0x3D141BC1, 0x30DDBCDC, 0x00000000}};
  s21_decimal val2 = {{0xA969CE2B, 0x9E885F96, 0x5A6BF3CC, 0x00000000}};
  s21_decimal val3 = {{0xD739D646, 0xDB9C7B57, 0x8B49B0A8, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_17) {
  int true_res = 0;
  s21_decimal val1 = {{0x0373547A, 0x94B4BB58, 0x6C4AAEC2, 0x00000000}};
  s21_decimal val2 = {{0xEA2E3A5C, 0x0FE32F92, 0x2018BC55, 0x00000000}};
  s21_decimal val3 = {{0xEDA18ED6, 0xA497EAEA, 0x8C636B17, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_18) {
  int true_res = 0;
  s21_decimal val1 = {{0xB0D142A9, 0xA32FBE97, 0xCC4E1D6C, 0x00000000}};
  s21_decimal val2 = {{0x4867B02F, 0x6243A388, 0x3063D98C, 0x00000000}};
  s21_decimal val3 = {{0xF938F2D8, 0x0573621F, 0xFCB1F6F9, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_19) {
  int true_res = 1;
  s21_decimal val1 = {{0x0B36CEB8, 0x0677C683, 0x816391C3, 0x00000000}};
  s21_decimal val2 = {{0xB2B61E9E, 0xFDE02A81, 0x9DA257D8, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_20) {
  int true_res = 0;
  s21_decimal val1 = {{0xDF07EF71, 0x6F49DE93, 0x3F31ED88, 0x00000000}};
  s21_decimal val2 = {{0x12CFB5E6, 0xA2F268F7, 0x12FC495E, 0x00000000}};
  s21_decimal val3 = {{0xF1D7A557, 0x123C478A, 0x522E36E7, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_21) {
  int true_res = 0;
  s21_decimal val1 = {{0x67817E33, 0xCD60203A, 0x9CF02879, 0x00000000}};
  s21_decimal val2 = {{0x4E02F455, 0x096AB54D, 0x4B46379D, 0x00000000}};
  s21_decimal val3 = {{0xB5847288, 0xD6CAD587, 0xE8366016, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_22) {
  int true_res = 0;
  s21_decimal val1 = {{0xB87FD00F, 0x1EFC6ADA, 0x402670B1, 0x00000000}};
  s21_decimal val2 = {{0x0DD2EF43, 0x7D23F843, 0x5D7C061D, 0x00000000}};
  s21_decimal val3 = {{0xC652BF52, 0x9C20631D, 0x9DA276CE, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_23) {
  int true_res = 0;
  s21_decimal val1 = {{0x556802E7, 0x56E1B3E6, 0x00656BEE, 0x00000000}};
  s21_decimal val2 = {{0x5D0EAB37, 0x9DF8EDD1, 0x017600A0, 0x00000000}};
  s21_decimal val3 = {{0xB276AE1E, 0xF4DAA1B7, 0x01DB6C8E, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_24) {
  int true_res = 0;
  s21_decimal val1 = {{0x4DE94910, 0x8259CFAB, 0x9B728457, 0x00000000}};
  s21_decimal val2 = {{0xD48A4E60, 0xAB3A815F, 0x3AD7E3E4, 0x00000000}};
  s21_decimal val3 = {{0x22739770, 0x2D94510B, 0xD64A683C, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_25) {
  int true_res = 0;
  s21_decimal val1 = {{0xD2C19D34, 0xEACD081A, 0x238E12B9, 0x00000000}};
  s21_decimal val2 = {{0xB8F3747B, 0x2F69D27E, 0x746E7B34, 0x00000000}};
  s21_decimal val3 = {{0x8BB511AF, 0x1A36DA99, 0x97FC8DEE, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_26) {
  int true_res = 0;
  s21_decimal val1 = {{0x7D769E77, 0xDFD8C6B7, 0x37A4FBF1, 0x00000000}};
  s21_decimal val2 = {{0x1D5C89C1, 0x8FC0BAE9, 0xA6B07D36, 0x00000000}};
  s21_decimal val3 = {{0x9AD32838, 0x6F9981A0, 0xDE557928, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_27) {
  int true_res = 1;
  s21_decimal val1 = {{0x7E74F485, 0x4BE945A4, 0xF0B06C89, 0x00000000}};
  s21_decimal val2 = {{0x3A92E30E, 0x1A381856, 0x8DC3FE43, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_28) {
  int true_res = 0;
  s21_decimal val1 = {{0x2AA358A6, 0xA647BA02, 0x276CE548, 0x00000000}};
  s21_decimal val2 = {{0xF513E6A8, 0x6471254F, 0xAC1139AC, 0x00000000}};
  s21_decimal val3 = {{0x1FB73F4E, 0x0AB8DF52, 0xD37E1EF5, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_29) {
  int true_res = 0;
  s21_decimal val1 = {{0xDD8B5E7C, 0x02AF4C56, 0x9697DD3E, 0x00000000}};
  s21_decimal val2 = {{0x2E3A7716, 0x87857269, 0x33AEB041, 0x00000000}};
  s21_decimal val3 = {{0x0BC5D592, 0x8A34BEC0, 0xCA468D7F, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_30) {
  int true_res = 1;
  s21_decimal val1 = {{0xFFB739BC, 0x919656C0, 0xCCFFD8BC, 0x00000000}};
  s21_decimal val2 = {{0x2DA813E7, 0x4FB95A98, 0xD956FBE6, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_31) {
  int true_res = 0;
  s21_decimal val1 = {{0xCB28B0DE, 0xB0B29103, 0x056ACB0B, 0x00000000}};
  s21_decimal val2 = {{0x02D5AADF, 0x3839DD73, 0xD2347494, 0x00000000}};
  s21_decimal val3 = {{0xCDFE5BBD, 0xE8EC6E76, 0xD79F3F9F, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_32) {
  int true_res = 0;
  s21_decimal val1 = {{0x0078717E, 0x0ADBBEA7, 0x7AAC0AD0, 0x00000000}};
  s21_decimal val2 = {{0x5AAA09E5, 0x773C562E, 0x72A134B3, 0x00000000}};
  s21_decimal val3 = {{0x5B227B63, 0x821814D5, 0xED4D3F83, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_33) {
  int true_res = 0;
  s21_decimal val1 = {{0xED98E695, 0x8956B488, 0x1CD18F85, 0x00000000}};
  s21_decimal val2 = {{0x7E3BD0E2, 0xF738FDEC, 0x5EA1659F, 0x00000000}};
  s21_decimal val3 = {{0x6BD4B777, 0x808FB275, 0x7B72F525, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_34) {
  int true_res = 0;
  s21_decimal val1 = {{0xB205DC96, 0xD2D82076, 0x70B08D0C, 0x00000000}};
  s21_decimal val2 = {{0xF7091E26, 0x16FF2CD6, 0x1BC9A32B, 0x00000000}};
  s21_decimal val3 = {{0xA90EFABC, 0xE9D74D4D, 0x8C7A3037, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_35) {
  int true_res = 0;
  s21_decimal val1 = {{0xC81F20A5, 0x69E411C0, 0xA2FF4083, 0x00000000}};
  s21_decimal val2 = {{0x257D9F52, 0x4862E69F, 0x22F896FC, 0x00000000}};
  s21_decimal val3 = {{0xED9CBFF7, 0xB246F85F, 0xC5F7D77F, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_36) {
  int true_res = 1;
  s21_decimal val1 = {{0xC7033B69, 0x1729C193, 0x0FB84946, 0x00000000}};
  s21_decimal val2 = {{0x28E774CA, 0xA22766F0, 0xF579CE27, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_37) {
  int true_res = 1;
  s21_decimal val1 = {{0xD2A8F24B, 0x366C93AD, 0x7FFBA042, 0x00000000}};
  s21_decimal val2 = {{0x073A1706, 0xCD082ED2, 0xD957255C, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_38) {
  int true_res = 0;
  s21_decimal val1 = {{0x6D9D0B5A, 0x4CE2D390, 0x4077B783, 0x00000000}};
  s21_decimal val2 = {{0xA330DB4D, 0xFAB06286, 0x6028470E, 0x00000000}};
  s21_decimal val3 = {{0x10CDE6A7, 0x47933617, 0xA09FFE92, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_39) {
  int true_res = 1;
  s21_decimal val1 = {{0xF8899D96, 0x620AD64C, 0x488E6F3F, 0x00000000}};
  s21_decimal val2 = {{0x1A0FA53C, 0x80AE9B02, 0xC78F558A, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_40) {
  int true_res = 0;
  s21_decimal val1 = {{0xFBCD477F, 0xD4285233, 0x7B3F361F, 0x00000000}};
  s21_decimal val2 = {{0x6F90CA3A, 0x98083F81, 0x031BB4FD, 0x00000000}};
  s21_decimal val3 = {{0x6B5E11B9, 0x6C3091B5, 0x7E5AEB1D, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_41) {
  int true_res = 0;
  s21_decimal val1 = {{0xB56F8CF0, 0x3A0B6325, 0x7C17216E, 0x00000000}};
  s21_decimal val2 = {{0x5252AEC5, 0xC356405E, 0x7EFF596F, 0x00000000}};
  s21_decimal val3 = {{0x07C23BB5, 0xFD61A384, 0xFB167ADD, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_42) {
  int true_res = 1;
  s21_decimal val1 = {{0x9ED33ED2, 0x2394934B, 0xB310031F, 0x00000000}};
  s21_decimal val2 = {{0x05FA8B58, 0x0C743382, 0xD931DB3F, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_43) {
  int true_res = 0;
  s21_decimal val1 = {{0x265520F6, 0xB44D594F, 0x36AE5D2F, 0x00000000}};
  s21_decimal val2 = {{0x6748E8AD, 0x8334A8D1, 0x6F3D3F64, 0x00000000}};
  s21_decimal val3 = {{0x8D9E09A3, 0x37820220, 0xA5EB9C94, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_44) {
  int true_res = 1;
  s21_decimal val1 = {{0x473B255D, 0x2CC0027B, 0xAA8E51AE, 0x00000000}};
  s21_decimal val2 = {{0xBC2A78B7, 0x4EF54EDD, 0xA8B192AC, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_45) {
  int true_res = 0;
  s21_decimal val1 = {{0x83410125, 0x36D38FEE, 0x7A860FDF, 0x00000000}};
  s21_decimal val2 = {{0x2F408CB7, 0x8AB676CC, 0x7154D2D0, 0x00000000}};
  s21_decimal val3 = {{0xB2818DDC, 0xC18A06BA, 0xEBDAE2AF, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_46) {
  int true_res = 1;
  s21_decimal val1 = {{0x019FE568, 0xE5BB6DB2, 0xDFD282CF, 0x00000000}};
  s21_decimal val2 = {{0x667699A1, 0x83500B4C, 0xE48680F2, 0x00000000}};
  s21_decimal val3 = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_47) {
  int true_res = 0;
  s21_decimal val1 = {{0x03BFFEF6, 0xB62DB938, 0x1137A1C3, 0x00000000}};
  s21_decimal val2 = {{0x438DC059, 0xB2FA7720, 0xB099CCF0, 0x00000000}};
  s21_decimal val3 = {{0x474DBF4F, 0x69283058, 0xC1D16EB4, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_48) {
  int true_res = 0;
  s21_decimal val1 = {{0x2F712412, 0xFD82F27E, 0x0715895C, 0x00000000}};
  s21_decimal val2 = {{0x79EFA668, 0xF110DEA5, 0xC92176E2, 0x00000000}};
  s21_decimal val3 = {{0xA960CA7A, 0xEE93D123, 0xD037003F, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_49) {
  int true_res = 0;
  s21_decimal val1 = {{0xC56A1CF5, 0xF4DF5932, 0x7406761F, 0x00000000}};
  s21_decimal val2 = {{0x0561E022, 0x4F48A2F8, 0x63C83F18, 0x00000000}};
  s21_decimal val3 = {{0xCACBFD17, 0x4427FC2A, 0xD7CEB538, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_50) {
  int true_res = 0;
  s21_decimal val1 = {{0xFC31F0DD, 0xD6D5D0B3, 0x63FA9395, 0x00000000}};
  s21_decimal val2 = {{0x5D70A07F, 0x6DDE13C0, 0x2DA0684A, 0x00000000}};
  s21_decimal val3 = {{0x59A2915C, 0x44B3E474, 0x919AFBE0, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_51) {
  int true_res = 0;
  s21_decimal val1 = {{0x1ED2B538, 0xF99A9EBF, 0x96C08FFA, 0x00160000}};
  s21_decimal val2 = {{0xA84C9220, 0x52129027, 0x9B406D71, 0x001B0000}};
  s21_decimal val3 = {{0x0B438871, 0xE20E2C6F, 0x96C0F5B9, 0x00160000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_52) {
  int true_res = 0;
  s21_decimal val1 = {{0xF5F8933E, 0x854032CD, 0xC03D0673, 0x00080000}};
  s21_decimal val2 = {{0xC3CCB57B, 0xF00DEC8B, 0x3AA7F6FE, 0x00160000}};
  s21_decimal val3 = {{0x24F28286, 0x8540D7E8, 0xC03D0673, 0x00080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_53) {
  int true_res = 0;
  s21_decimal val1 = {{0xB26A15AB, 0xAF211089, 0x28ED0991, 0x00130000}};
  s21_decimal val2 = {{0x53813E26, 0xC05894F3, 0xD1E11A09, 0x00180000}};
  s21_decimal val3 = {{0xA5315D30, 0x9693FFCE, 0x28ED931D, 0x00130000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_54) {
  int true_res = 0;
  s21_decimal val1 = {{0x6E1C525C, 0xB633739B, 0x4365CE32, 0x000C0000}};
  s21_decimal val2 = {{0x9FEA0AB2, 0xE344377F, 0x8FDBB5AB, 0x00110000}};
  s21_decimal val3 = {{0x0D86A756, 0x1E98F576, 0x43662C7A, 0x000C0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_55) {
  int true_res = 0;
  s21_decimal val1 = {{0xB03E6466, 0x96151C98, 0xC466CC2C, 0x00090000}};
  s21_decimal val2 = {{0x5B144F15, 0x26F476E4, 0x2764B380, 0x001A0000}};
  s21_decimal val3 = {{0x1309688C, 0x96151CB5, 0xC466CC2C, 0x00090000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_56) {
  int true_res = 0;
  s21_decimal val1 = {{0x2B746B5F, 0x4F237220, 0xE58FC7FF, 0x00110000}};
  s21_decimal val2 = {{0x5469093A, 0x9E8BFCB3, 0x713AEDEE, 0x000B0000}};
  s21_decimal val3 = {{0xC306E400, 0x064E7814, 0x713AFCFA, 0x000B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_57) {
  int true_res = 0;
  s21_decimal val1 = {{0x2C81576E, 0xBA02CFC6, 0x9865FE15, 0x00030000}};
  s21_decimal val2 = {{0x33537A03, 0xA170B3EF, 0xD84C7FCD, 0x00130000}};
  s21_decimal val3 = {{0xC5698BC0, 0xBA02D5DC, 0x9865FE15, 0x00030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_58) {
  int true_res = 0;
  s21_decimal val1 = {{0x38449339, 0xF22545D8, 0xCFF0320E, 0x00000000}};
  s21_decimal val2 = {{0x4941F642, 0x4A118553, 0xAEBE405A, 0x000D0000}};
  s21_decimal val3 = {{0x74CDED8E, 0xF2387C6D, 0xCFF0320E, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_59) {
  int true_res = 0;
  s21_decimal val1 = {{0xBFB23944, 0x74D6702E, 0x3CCC69D5, 0x00090000}};
  s21_decimal val2 = {{0xE714A694, 0xC9420FF9, 0xEF1201A6, 0x00060000}};
  s21_decimal val3 = {{0xE4B65D6B, 0x2F01C3CC, 0xEF219224, 0x00060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_60) {
  int true_res = 0;
  s21_decimal val1 = {{0x8AA4257F, 0xD0E19E8B, 0xD5F6A759, 0x001B0000}};
  s21_decimal val2 = {{0xCA9B7C38, 0xCB410E1A, 0x1A746590, 0x00040000}};
  s21_decimal val3 = {{0xCAA596E1, 0xCB410E1A, 0x1A746590, 0x00040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};

  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_61) {
  int true_res = 0;
  s21_decimal val1 = {{0x37BC13AB, 0xFEC5663B, 0x95485D0F, 0x00190000}};
  s21_decimal val2 = {{0x32BA5875, 0xCA4E6FA0, 0xBCECEEAB, 0x000D0000}};
  s21_decimal val3 = {{0x3B3DB945, 0xCAF292F6, 0xBCECEEAB, 0x000D0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_62) {
  int true_res = 0;
  s21_decimal val1 = {{0x124D5599, 0x8D026547, 0x082D978D, 0x00080000}};
  s21_decimal val2 = {{0xE66E072C, 0x9D08A578, 0x82AD3CC7, 0x00160000}};
  s21_decimal val3 = {{0xA3274E79, 0x822652FF, 0x51C7EB87, 0x00090000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_63) {
  int true_res = 0;
  s21_decimal val1 = {{0x5B22690A, 0x91E1225D, 0x255805D5, 0x001C0000}};
  s21_decimal val2 = {{0xFD005CAA, 0xA556F7B0, 0x97C6FCC2, 0x00140000}};
  s21_decimal val3 = {{0xDCFD16B4, 0xE93ED1E2, 0x97C6FCC8, 0x00140000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_64) {
  int true_res = 0;
  s21_decimal val1 = {{0x71187A70, 0x61C3323A, 0x9E335437, 0x00080000}};
  s21_decimal val2 = {{0x838380FC, 0xE06C8B78, 0x21B5BDAF, 0x00130000}};
  s21_decimal val3 = {{0xD01E6269, 0x6335D73B, 0x9E335437, 0x00080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_65) {
  int true_res = 0;
  s21_decimal val1 = {{0x16C163AA, 0x10E024B9, 0x27BC9969, 0x00080000}};
  s21_decimal val2 = {{0x7304E1AD, 0x892811B3, 0x79217526, 0x001A0000}};
  s21_decimal val3 = {{0xD138EAFA, 0x10E024C1, 0x27BC9969, 0x00080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_66) {
  int true_res = 0;
  s21_decimal val1 = {{0x5E668C21, 0x77148BD1, 0x07D4FD59, 0x00030000}};
  s21_decimal val2 = {{0x529CB7DD, 0xBFBDE053, 0x44BC5BCF, 0x000C0000}};
  s21_decimal val3 = {{0x06ECD07E, 0x2EFB4F7A, 0x4E51E58A, 0x00040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_67) {
  int true_res = 0;
  s21_decimal val1 = {{0x7B56B93F, 0x10113641, 0x36B20610, 0x00170000}};
  s21_decimal val2 = {{0x68BFE8FA, 0x472E844F, 0x05F52CEA, 0x00190000}};
  s21_decimal val3 = {{0x32257156, 0x0BA8B794, 0x36C14683, 0x00170000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_68) {
  int true_res = 0;
  s21_decimal val1 = {{0xEE25E1A7, 0x8174CFD6, 0x591D2F9F, 0x00000000}};
  s21_decimal val2 = {{0x56933B3C, 0x91E03338, 0x9DED8CB0, 0x00050000}};
  s21_decimal val3 = {{0x444EE635, 0x6A50BB1D, 0x591D971F, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_69) {
  int true_res = 0;
  s21_decimal val1 = {{0x46774D85, 0x1E2137B7, 0x31C1ED46, 0x00150000}};
  s21_decimal val2 = {{0x76F8B65E, 0x93F2A0B1, 0x23CCD351, 0x001C0000}};
  s21_decimal val3 = {{0xB77CC65C, 0x2E27C815, 0x31C1ED82, 0x00150000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_70) {
  int true_res = 0;
  s21_decimal val1 = {{0x53349A9F, 0xF05C3772, 0x1662261A, 0x001B0000}};
  s21_decimal val2 = {{0x42AA52B5, 0xEF68097F, 0xB9C768BB, 0x000D0000}};
  s21_decimal val3 = {{0x320F756A, 0xEF684880, 0xB9C768BB, 0x000D0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_71) {
  int true_res = 0;
  s21_decimal val1 = {{0x481C973E, 0xE9C187CF, 0x821206A8, 0x00040000}};
  s21_decimal val2 = {{0x23548E91, 0x9D0A25BE, 0x4058D641, 0x00030000}};
  s21_decimal val3 = {{0xAA8A9DB1, 0xE79D801F, 0x4D5AA3B8, 0x00030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_72) {
  int true_res = 0;
  s21_decimal val1 = {{0x7F844515, 0xD2A26FFB, 0x53F32DC1, 0x000B0000}};
  s21_decimal val2 = {{0x3971F825, 0x1800EFE6, 0x74B68BCA, 0x001C0000}};
  s21_decimal val3 = {{0x9947316E, 0xD2A2704F, 0x53F32DC1, 0x000B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_73) {
  int true_res = 0;
  s21_decimal val1 = {{0x32D933E7, 0xE7611169, 0x7D77142B, 0x001C0000}};
  s21_decimal val2 = {{0xEAE5D868, 0xA9AAF5B4, 0x1CF3B2BD, 0x00050000}};
  s21_decimal val3 = {{0xEAEBC530, 0xA9AAF5B4, 0x1CF3B2BD, 0x00050000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_74) {
  int true_res = 0;
  s21_decimal val1 = {{0xF6D8BAE9, 0x3DAC90CA, 0x60DC83A2, 0x00060000}};
  s21_decimal val2 = {{0x30C6E158, 0xC64ECFE3, 0x530BA17D, 0x00180000}};
  s21_decimal val3 = {{0xF2C3B2F5, 0x3DAC90D0, 0x60DC83A2, 0x00060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_75) {
  int true_res = 0;
  s21_decimal val1 = {{0xECAD0742, 0x113912CB, 0xD26C779B, 0x00020000}};
  s21_decimal val2 = {{0x0A541E5F, 0x5C38BB1A, 0x237AC5EB, 0x001A0000}};
  s21_decimal val3 = {{0xECAD3226, 0x113912CB, 0xD26C779B, 0x00020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_76) {
  int true_res = 0;
  s21_decimal val1 = {{0x43511643, 0x83958FA3, 0x6C184A04, 0x000F0000}};
  s21_decimal val2 = {{0x2E31EA12, 0xA18216BC, 0x32642AA9, 0x00060000}};
  s21_decimal val3 = {{0xF735B92F, 0x71C5AA66, 0x32642AAB, 0x00060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_77) {
  int true_res = 0;
  s21_decimal val1 = {{0x21F394B4, 0x1226498F, 0xA185CD04, 0x00010000}};
  s21_decimal val2 = {{0xE87080F9, 0x845F51CB, 0xA4E2670A, 0x00000000}};
  s21_decimal val3 = {{0x6BD5A971, 0x52FCBF8D, 0xB50961F1, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_78) {
  int true_res = 0;
  s21_decimal val1 = {{0xCDA8FD5F, 0x13278DC3, 0xD4F89EC5, 0x001B0000}};
  s21_decimal val2 = {{0xD3CE1F3C, 0x2ED4BFF6, 0x6DE648D6, 0x001A0000}};
  s21_decimal val3 = {{0xCEC56BC6, 0xB0BF1AF0, 0x833258B6, 0x001A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_79) {
  int true_res = 0;
  s21_decimal val1 = {{0xE76C38CC, 0xF98172B6, 0x0DD4B375, 0x00150000}};
  s21_decimal val2 = {{0x8496D2CE, 0xA8764F68, 0x181F8C21, 0x001A0000}};
  s21_decimal val3 = {{0xA5AF1276, 0xD04D5DD0, 0x8A4FA0B3, 0x00160000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_80) {
  int true_res = 0;
  s21_decimal val1 = {{0xA085975E, 0xFC783FE2, 0x7419E32B, 0x000B0000}};
  s21_decimal val2 = {{0x08E0896A, 0xE6784A71, 0xD21F4C3D, 0x000B0000}};
  s21_decimal val3 = {{0xC423D014, 0x96B1A76E, 0x209F518A, 0x000A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_81) {
  int true_res = 0;
  s21_decimal val1 = {{0xEE590146, 0x33781B35, 0x34201E29, 0x00080000}};
  s21_decimal val2 = {{0x18BAE6DA, 0xAA7EEE30, 0x70FBA949, 0x001C0000}};
  s21_decimal val3 = {{0x03307A8F, 0x33781B36, 0x34201E29, 0x00080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_82) {
  int true_res = 0;
  s21_decimal val1 = {{0x97616426, 0xAB6CC4CF, 0xC822056B, 0x00070000}};
  s21_decimal val2 = {{0x33830268, 0x2FBD747F, 0x95FCC12C, 0x00040000}};
  s21_decimal val3 = {{0x76FDBB15, 0xFF87092C, 0x962FFD14, 0x00040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_83) {
  int true_res = 0;
  s21_decimal val1 = {{0xE15C7315, 0x329CC10D, 0xB9CC809F, 0x00190000}};
  s21_decimal val2 = {{0x66C0E7F1, 0x4E5574B8, 0x36A7E791, 0x00120000}};
  s21_decimal val3 = {{0xB1CAE8C8, 0x0653B1BE, 0x36A7E8C9, 0x00120000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_84) {
  int true_res = 0;
  s21_decimal val1 = {{0x74585EC2, 0x10282F64, 0x31F08DD3, 0x00110000}};
  s21_decimal val2 = {{0x13A94A9E, 0xB0927940, 0x920751AF, 0x000D0000}};
  s21_decimal val3 = {{0x327ECDE7, 0x8AF7A61B, 0x920898F8, 0x000D0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_85) {
  int true_res = 0;
  s21_decimal val1 = {{0xA0F50985, 0x39D31E82, 0xE1CB8378, 0x00130000}};
  s21_decimal val2 = {{0x77D4B6D1, 0x7B584C5C, 0x79E8FEAB, 0x00040000}};
  s21_decimal val3 = {{0xB5F1CACB, 0x7B588BEA, 0x79E8FEAB, 0x00040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_86) {
  int true_res = 0;
  s21_decimal val1 = {{0x05B30A27, 0xD8D9A4AC, 0x18B8E8AE, 0x00050000}};
  s21_decimal val2 = {{0xF0632E62, 0xF6AE2BC9, 0x467B6E5A, 0x00140000}};
  s21_decimal val3 = {{0xF74F025A, 0x7881351B, 0xF73916D4, 0x00060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_87) {
  int true_res = 0;
  s21_decimal val1 = {{0xD7FDA2A2, 0x21B82066, 0x7F5E2698, 0x00170000}};
  s21_decimal val2 = {{0x51438D7D, 0x45DC10FA, 0x4763B451, 0x00140000}};
  s21_decimal val3 = {{0x615A140D, 0xF811C123, 0x47844F7D, 0x00140000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_88) {
  int true_res = 0;
  s21_decimal val1 = {{0xCA17248E, 0x4BEF1138, 0x84A2691A, 0x00000000}};
  s21_decimal val2 = {{0xDDF4358B, 0x788328F8, 0x9F5F163F, 0x00010000}};
  s21_decimal val3 = {{0xAD15F6B6, 0x3E629551, 0x949251BA, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_89) {
  int true_res = 0;
  s21_decimal val1 = {{0x0425619B, 0x3A1729A4, 0xB56C0EAD, 0x00150000}};
  s21_decimal val2 = {{0xF5D7E556, 0x9F69F9B8, 0xA76C865D, 0x00110000}};
  s21_decimal val3 = {{0x720E11B6, 0x6596E154, 0xA7712B55, 0x00110000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_90) {
  int true_res = 0;
  s21_decimal val1 = {{0x4894F9E0, 0x2C9DB9C0, 0x1B119A9D, 0x00130000}};
  s21_decimal val2 = {{0x6AC56211, 0xAC04A431, 0x1C2DE10E, 0x00040000}};
  s21_decimal val3 = {{0xED5C2E0F, 0xAC04ABCF, 0x1C2DE10E, 0x00040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_91) {
  int true_res = 0;
  s21_decimal val1 = {{0xAA517339, 0x9E76C5EF, 0xFFBC7772, 0x001C0000}};
  s21_decimal val2 = {{0xD15D637D, 0xB98C4EFA, 0x16C0F16E, 0x00090000}};
  s21_decimal val3 = {{0x9B25EF34, 0x3F7B15DE, 0xE3896E53, 0x000A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_92) {
  int true_res = 0;
  s21_decimal val1 = {{0x4B2FB712, 0xCD7CB714, 0xD60A0B45, 0x00160000}};
  s21_decimal val2 = {{0x54BB40E0, 0xB7F934A3, 0x49045F82, 0x00110000}};
  s21_decimal val3 = {{0xB2022492, 0x8B189D91, 0x4904EBC8, 0x00110000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_93) {
  int true_res = 0;
  s21_decimal val1 = {{0x9865D827, 0xE9770FDE, 0x99EE6350, 0x00120000}};
  s21_decimal val2 = {{0xB06B3488, 0x0A8BC7BA, 0x759A9A81, 0x000A0000}};
  s21_decimal val3 = {{0xF1CBCC67, 0xDDD7415C, 0x759A9A9A, 0x000A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_94) {
  int true_res = 0;
  s21_decimal val1 = {{0x7738AC5D, 0x3F5D8EB9, 0x45FA67F3, 0x000D0000}};
  s21_decimal val2 = {{0xFE3A0312, 0xE4A32281, 0x66362431, 0x00030000}};
  s21_decimal val3 = {{0xB760EEF2, 0x02B15048, 0x66362432, 0x00030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_95) {
  int true_res = 0;
  s21_decimal val1 = {{0x5D4F8835, 0x6BB194B6, 0x6AF431F9, 0x00080000}};
  s21_decimal val2 = {{0x8DB261E1, 0x08B97803, 0xC6DEECAA, 0x00060000}};
  s21_decimal val3 = {{0x2D5993E2, 0xC4AE71D2, 0xC7F0B9F6, 0x00060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_96) {
  int true_res = 0;
  s21_decimal val1 = {{0xAB91E3B6, 0x2585D3D3, 0x02357305, 0x000F0000}};
  s21_decimal val2 = {{0xD8D40472, 0x8FFCD273, 0x383906B3, 0x00190000}};
  s21_decimal val3 = {{0xD4978E08, 0x17068317, 0xDCE0EE0C, 0x00110000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_97) {
  int true_res = 0;
  s21_decimal val1 = {{0xAF8A9857, 0x431A57D7, 0x312375AA, 0x00110000}};
  s21_decimal val2 = {{0x3A75A27C, 0xE0F7F6F9, 0xA3932470, 0x000A0000}};
  s21_decimal val3 = {{0xA1ACA597, 0x51CCBC52, 0xA39324C3, 0x000A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_98) {
  int true_res = 0;
  s21_decimal val1 = {{0x92FC2BA9, 0x677E1B10, 0xF953FD7F, 0x00190000}};
  s21_decimal val2 = {{0x2B96FDC1, 0xF5B46504, 0x46828C26, 0x00080000}};
  s21_decimal val3 = {{0xD480FED8, 0xF5B465B7, 0x46828C26, 0x00080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_99) {
  int true_res = 0;
  s21_decimal val1 = {{0x4DE1EB62, 0xB3AE2060, 0x29F3D7CC, 0x000E0000}};
  s21_decimal val2 = {{0xEB4151BE, 0x591A4EFF, 0x52C88D59, 0x001A0000}};
  s21_decimal val3 = {{0x6CF1F95E, 0xB40925D5, 0x29F3D7CC, 0x000E0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_100) {
  int true_res = 0;
  s21_decimal val1 = {{0x1416BC57, 0x45C9083D, 0xEFE79A38, 0x000D0000}};
  s21_decimal val2 = {{0x51F78F34, 0x83EE7C46, 0xE4F92C17, 0x00070000}};
  s21_decimal val3 = {{0xE841B7F0, 0x72C25932, 0xE4F93BD0, 0x00070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_101) {
  int true_res = 0;
  s21_decimal val1 = {{0x41EC97A0, 0xEF7491A5, 0x0D58D86C, 0x00170000}};
  s21_decimal val2 = {{0x020BA0FC, 0xF8D20A24, 0x26FD589E, 0x001A0000}};
  s21_decimal val3 = {{0xBC38EB4D, 0x622963C1, 0x85DC4480, 0x00180000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_102) {
  int true_res = 0;
  s21_decimal val1 = {{0x4B71F6B4, 0x2F0AF313, 0xD38E8623, 0x801A0000}};
  s21_decimal val2 = {{0x731F98A4, 0x3BFF1685, 0xBFAAC19C, 0x000B0000}};
  s21_decimal val3 = {{0x2E306E6C, 0x3BFEDAF9, 0xBFAAC19C, 0x000B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_103) {
  int true_res = 0;
  s21_decimal val1 = {{0x9D26F74F, 0xE84A1B6F, 0x1B9A4BB7, 0x000F0000}};
  s21_decimal val2 = {{0xC23266F5, 0x2EA96D83, 0x6E1973CE, 0x00150000}};
  s21_decimal val3 = {{0xC41912AF, 0x11B63CB4, 0x1B9A52EF, 0x000F0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_104) {
  int true_res = 0;
  s21_decimal val1 = {{0xFD89A0B8, 0x0A1E6A42, 0xCE2A182B, 0x80050000}};
  s21_decimal val2 = {{0xB7BA61DB, 0x8D48B22C, 0xA2CAD85A, 0x00070000}};
  s21_decimal val3 = {{0x6219AF1A, 0x88B4BA66, 0xCC895890, 0x80050000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_105) {
  int true_res = 0;
  s21_decimal val1 = {{0x9E311EF4, 0xF55B8C09, 0x867C311A, 0x000B0000}};
  s21_decimal val2 = {{0xFF678C86, 0x2B594994, 0x078EE97F, 0x80100000}};
  s21_decimal val3 = {{0xA0EC643D, 0xE4F9C993, 0x867C2C26, 0x000B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_106) {
  int true_res = 0;
  s21_decimal val1 = {{0x06650F1A, 0xCE431E2A, 0xFE617371, 0x801C0000}};
  s21_decimal val2 = {{0x8D323CA1, 0xCA16D2A2, 0x3E616995, 0x80080000}};
  s21_decimal val3 = {{0xBC1F0634, 0xCA16D2A2, 0x3E616995, 0x80080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_107) {
  int true_res = 0;
  s21_decimal val1 = {{0xB1D5256E, 0x58B7A3E9, 0xED80E0E3, 0x800F0000}};
  s21_decimal val2 = {{0x47AF2BB0, 0xAD061785, 0xB8D664A5, 0x80070000}};
  s21_decimal val3 = {{0xDD7A2AE5, 0x85B7F013, 0xB8D664CD, 0x80070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_108) {
  int true_res = 0;
  s21_decimal val1 = {{0x7F447AA5, 0xD3DFFCC1, 0x6849BB1F, 0x00010000}};
  s21_decimal val2 = {{0x945A5412, 0xCB380011, 0x9F3D0E3C, 0x80030000}};
  s21_decimal val3 = {{0x0A957EEC, 0xFACD81E0, 0x66B21494, 0x00010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_109) {
  int true_res = 0;
  s21_decimal val1 = {{0x68EA4399, 0xFECCC86F, 0x273DD702, 0x000A0000}};
  s21_decimal val2 = {{0x2394A52E, 0xA7756911, 0x476F5479, 0x00120000}};
  s21_decimal val3 = {{0x4298CE0B, 0xFAE79FFD, 0x273DD70E, 0x000A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_110) {
  int true_res = 0;
  s21_decimal val1 = {{0xC87083B3, 0x240604D3, 0x14EAC546, 0x001C0000}};
  s21_decimal val2 = {{0xF9F35A63, 0xEA3DFCB5, 0x190C80B2, 0x00060000}};
  s21_decimal val3 = {{0xC3E44F0E, 0x266BDF1B, 0xFA7D06FD, 0x00070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_111) {
  int true_res = 0;
  s21_decimal val1 = {{0x28F01DF3, 0x62AAA569, 0x91F228FC, 0x001B0000}};
  s21_decimal val2 = {{0x4A433BA1, 0x12AA6DDF, 0xEA7D7503, 0x00030000}};
  s21_decimal val3 = {{0x4A43EC11, 0x12AA6DDF, 0xEA7D7503, 0x00030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_112) {
  int true_res = 0;
  s21_decimal val1 = {{0x4C435E85, 0xE175D294, 0xC1867CDE, 0x000C0000}};
  s21_decimal val2 = {{0x5C57E95D, 0xE87DE4E0, 0x8035041A, 0x00000000}};
  s21_decimal val3 = {{0xF420A1C2, 0xE952AD6A, 0x8035041A, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_113) {
  int true_res = 0;
  s21_decimal val1 = {{0x4514ACB2, 0x5B1AC62E, 0x1CE74088, 0x80020000}};
  s21_decimal val2 = {{0x61CADBC4, 0xF718A77F, 0x30C16AA3, 0x800C0000}};
  s21_decimal val3 = {{0xF2BD03B8, 0x700B8071, 0x1CE74088, 0x80020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_114) {
  int true_res = 0;
  s21_decimal val1 = {{0x2CAF9279, 0x54D93F69, 0xAD9AF742, 0x00090000}};
  s21_decimal val2 = {{0x84B747CD, 0xDCCABF5E, 0x393632F9, 0x000E0000}};
  s21_decimal val3 = {{0x0E203967, 0xDD4FC719, 0xAD9B1CC0, 0x00090000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_115) {
  int true_res = 0;
  s21_decimal val1 = {{0x88AB60C7, 0xE927B01D, 0x5C04A586, 0x000E0000}};
  s21_decimal val2 = {{0x544392A4, 0xAB2046C5, 0x28F1E6BC, 0x00020000}};
  s21_decimal val3 = {{0xE120E513, 0xAB857393, 0x28F1E6BC, 0x00020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_116) {
  int true_res = 0;
  s21_decimal val1 = {{0x7985AEC0, 0x5B925393, 0xACCC6D7B, 0x001A0000}};
  s21_decimal val2 = {{0xD4B691F1, 0x2C4EBFA6, 0xFA337C53, 0x001A0000}};
  s21_decimal val3 = {{0xD49FA012, 0xA7301B85, 0x2A4CCA94, 0x00190000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_117) {
  int true_res = 0;
  s21_decimal val1 = {{0x9A981543, 0xEA7FF612, 0x2BF7C59E, 0x800D0000}};
  s21_decimal val2 = {{0xBD9460FB, 0xF6043930, 0x2CED484D, 0x00000000}};
  s21_decimal val3 = {{0xECF5BA5F, 0xF5FF639A, 0x2CED484D, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_118) {
  int true_res = 0;
  s21_decimal val1 = {{0x686F39DF, 0x5981F925, 0x3CB2D64C, 0x80190000}};
  s21_decimal val2 = {{0x973DAE72, 0xC0742400, 0x94F79760, 0x80110000}};
  s21_decimal val3 = {{0xF7CEEF08, 0xEF701CC3, 0x94F7976A, 0x80110000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_119) {
  int true_res = 0;
  s21_decimal val1 = {{0xCD332DDA, 0x17B9DC9B, 0xA406B84C, 0x800E0000}};
  s21_decimal val2 = {{0x9EDAAD09, 0x0D2B1489, 0xD8C8089D, 0x80030000}};
  s21_decimal val3 = {{0xB5FC32F8, 0x14369162, 0xD8C8089D, 0x80030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_120) {
  int true_res = 0;
  s21_decimal val1 = {{0x62418D7D, 0x674BCC55, 0x4DF7812C, 0x00070000}};
  s21_decimal val2 = {{0x02A9F782, 0x0B5D29AA, 0xFFC5F864, 0x80120000}};
  s21_decimal val3 = {{0xCC199C79, 0x5C4F8A6F, 0x4DF7812C, 0x00070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_121) {
  int true_res = 0;
  s21_decimal val1 = {{0x54827616, 0x95AE62AD, 0xB6905EA5, 0x00170000}};
  s21_decimal val2 = {{0x6A519DB9, 0x04B18FBE, 0xCCB1EBAA, 0x00090000}};
  s21_decimal val3 = {{0x99E01F74, 0x04B3919D, 0xCCB1EBAA, 0x00090000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_122) {
  int true_res = 0;
  s21_decimal val1 = {{0x3C06BD2C, 0xA78DE192, 0xE0DA5B0D, 0x001A0000}};
  s21_decimal val2 = {{0x34C7B948, 0x67CCD677, 0x36C4FEAC, 0x800B0000}};
  s21_decimal val3 = {{0xD7EC44B8, 0x67CC972C, 0x36C4FEAC, 0x800B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_123) {
  int true_res = 0;
  s21_decimal val1 = {{0x19B7740E, 0x78B5DACF, 0xFE58F0DF, 0x80140000}};
  s21_decimal val2 = {{0xC3F44516, 0x0A4F92DD, 0xD5486C59, 0x80080000}};
  s21_decimal val3 = {{0x4AA7DB89, 0x0B673B4D, 0xD5486C59, 0x80080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_124) {
  int true_res = 0;
  s21_decimal val1 = {{0x4F89C0BB, 0x83D075F2, 0x5571F886, 0x00000000}};
  s21_decimal val2 = {{0xEA6789B8, 0x268AFA23, 0xFDB00488, 0x000D0000}};
  s21_decimal val3 = {{0xE5D16326, 0x83EC5A9D, 0x5571F886, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_125) {
  int true_res = 0;
  s21_decimal val1 = {{0xE6B0CCD1, 0x22D24A1D, 0x45E2F58B, 0x801A0000}};
  s21_decimal val2 = {{0x7A2BD545, 0xAAE52C11, 0xFC20E30B, 0x00020000}};
  s21_decimal val3 = {{0x7A2B80C8, 0xAAE52C11, 0xFC20E30B, 0x00020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_126) {
  int true_res = 0;
  s21_decimal val1 = {{0x42F59E27, 0x33DC2077, 0xE79904F0, 0x80010000}};
  s21_decimal val2 = {{0x2328FC66, 0xA5265E05, 0xBE3C27C1, 0x80060000}};
  s21_decimal val3 = {{0xFF8D6C73, 0x561B4CE1, 0xE799819C, 0x80010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_127) {
  int true_res = 0;
  s21_decimal val1 = {{0x5176A7EF, 0xB7104D91, 0x2D76D34F, 0x80000000}};
  s21_decimal val2 = {{0xE34964BF, 0xCB9255CE, 0xACB306D8, 0x801B0000}};
  s21_decimal val3 = {{0x5176A824, 0xB7104D91, 0x2D76D34F, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_128) {
  int true_res = 0;
  s21_decimal val1 = {{0x94846B80, 0x2C9BF8F1, 0x9AE7DF76, 0x00080000}};
  s21_decimal val2 = {{0x266DE263, 0x01CC1452, 0xBC62D098, 0x00010000}};
  s21_decimal val3 = {{0x030C9C19, 0xE54FCC4D, 0xBC62D19B, 0x00010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_129) {
  int true_res = 0;
  s21_decimal val1 = {{0x9BB48121, 0x5E64F852, 0x0A012F30, 0x80100000}};
  s21_decimal val2 = {{0x358D7DB4, 0x5B54CB27, 0xB8351915, 0x00140000}};
  s21_decimal val3 = {{0xC97A36F0, 0x1D2A30F9, 0x63DCAFAC, 0x80110000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_130) {
  int true_res = 0;
  s21_decimal val1 = {{0xE8B2BD7F, 0xB75F5474, 0xC3AE6800, 0x00030000}};
  s21_decimal val2 = {{0x04185223, 0x4C03CD28, 0xCD480459, 0x80090000}};
  s21_decimal val3 = {{0x98CCB101, 0xAAD5078C, 0xC3AE5A8C, 0x00030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_131) {
  int true_res = 0;
  s21_decimal val1 = {{0xA38D6725, 0x1EF44850, 0x665345F6, 0x00050000}};
  s21_decimal val2 = {{0x9B0495BA, 0x8466D783, 0x559517CE, 0x80020000}};
  s21_decimal val3 = {{0x8C84B310, 0x164A7004, 0x557AE5D1, 0x80020000}};
  s21_decimal output;
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_132) {
  int true_res = 0;
  s21_decimal val1 = {{0x4B46CEAE, 0x328C5D6A, 0x019A559B, 0x80160000}};
  s21_decimal val2 = {{0x6B6C8139, 0xDCA120E0, 0x5F7B48B4, 0x00170000}};
  s21_decimal val3 = {{0x7AA86E6D, 0xE3257AB9, 0x4F73F0A4, 0x00170000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_133) {
  int true_res = 0;
  s21_decimal val1 = {{0x243DCCD5, 0x177AC320, 0x62CBC8A8, 0x00120000}};
  s21_decimal val2 = {{0x7C7B7349, 0xE12B33BF, 0xA0B98139, 0x801A0000}};
  s21_decimal val3 = {{0xA248748F, 0x2068C9A8, 0x62CBC88D, 0x00120000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_134) {
  int true_res = 0;
  s21_decimal val1 = {{0x7972AACB, 0x717CFBA7, 0x9062B948, 0x80090000}};
  s21_decimal val2 = {{0x6B7DD528, 0x8B919EB4, 0x8496893E, 0x80010000}};
  s21_decimal val3 = {{0x23FBD196, 0xC4E28468, 0x84968956, 0x80010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_135) {
  int true_res = 0;
  s21_decimal val1 = {{0x0220F255, 0x10CE8447, 0x44CC307F, 0x80110000}};
  s21_decimal val2 = {{0xCB3DDE0F, 0xB4170C3E, 0x3BA8764B, 0x00070000}};
  s21_decimal val3 = {{0x94BD1A1B, 0x968AAB89, 0x3BA8764B, 0x00070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_136) {
  int true_res = 0;
  s21_decimal val1 = {{0x62E0862D, 0x4C6794C1, 0x88C7028E, 0x00140000}};
  s21_decimal val2 = {{0x384FAB63, 0x0B066271, 0xA2DC7BA8, 0x00160000}};
  s21_decimal val3 = {{0x99333DA6, 0xFA9848F0, 0x8A67EF4F, 0x00140000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_137) {
  int true_res = 0;
  s21_decimal val1 = {{0x34CFF1E2, 0x08D30233, 0xE46D904C, 0x001C0000}};
  s21_decimal val2 = {{0x5573F2FD, 0x4EAED014, 0x5CF435BD, 0x000B0000}};
  s21_decimal val3 = {{0xEEFA7547, 0x4EAED0B8, 0x5CF435BD, 0x000B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_138) {
  int true_res = 0;
  s21_decimal val1 = {{0x028578C0, 0x559A8C70, 0xFD130977, 0x80090000}};
  s21_decimal val2 = {{0x5F8CC2C8, 0xDC405BF2, 0x4929AACD, 0x00020000}};
  s21_decimal val3 = {{0xD9E8C44C, 0x45A3DB64, 0x4929A925, 0x00020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_139) {
  int true_res = 0;
  s21_decimal val1 = {{0xB82CBFE8, 0x1E7064E7, 0xB26C1596, 0x800D0000}};
  s21_decimal val2 = {{0xC1CA9457, 0x72B159F8, 0x4DFE02E8, 0x000C0000}};
  s21_decimal val3 = {{0x2F5FB459, 0x3C72E97B, 0x3C266726, 0x000C0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_140) {
  int true_res = 0;
  s21_decimal val1 = {{0x25AFBF36, 0xA7E62FFD, 0xDA07D918, 0x00170000}};
  s21_decimal val2 = {{0x38710745, 0x3F644DEF, 0x6A2749E3, 0x00050000}};
  s21_decimal val3 = {{0xEE65B13B, 0x3F644DFE, 0x6A2749E3, 0x00050000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_141) {
  int true_res = 0;
  s21_decimal val1 = {{0xDAA80EAE, 0x3D24AF56, 0xB704A961, 0x801B0000}};
  s21_decimal val2 = {{0xB39E55B6, 0x9DFC328A, 0x5EB365FF, 0x801C0000}};
  s21_decimal val3 = {{0x8637E40D, 0x33578131, 0xC07D0061, 0x801B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_142) {
  int true_res = 0;
  s21_decimal val1 = {{0x275DA453, 0x9E5B6B43, 0xEF903006, 0x00060000}};
  s21_decimal val2 = {{0x5B286B95, 0xB2CCD2CA, 0xF7854884, 0x00160000}};
  s21_decimal val3 = {{0xBA5A03C7, 0x9E5B723A, 0xEF903006, 0x00060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_143) {
  int true_res = 0;
  s21_decimal val1 = {{0x2B0C0476, 0x497AAC88, 0xAFC58F23, 0x00130000}};
  s21_decimal val2 = {{0x5CF4FD4C, 0xC9DCF3E4, 0x052190B4, 0x80120000}};
  s21_decimal val3 = {{0x897A1F7E, 0x66D9259C, 0x7C75E813, 0x00130000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_144) {
  int true_res = 0;
  s21_decimal val1 = {{0x4BE8C669, 0xCF73F28A, 0x009E9847, 0x001C0000}};
  s21_decimal val2 = {{0xE17FB81F, 0x80B592F9, 0xBD0699F5, 0x80180000}};
  s21_decimal val3 = {{0x46681130, 0x22B5FF6B, 0xBD0695E6, 0x80180000}};
  s21_decimal output;
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_145) {
  int true_res = 0;
  s21_decimal val1 = {{0x86D015A2, 0xBAE20DCC, 0x9A5C2D35, 0x001A0000}};
  s21_decimal val2 = {{0xCD8FCB1E, 0x816D086E, 0x32A3FB29, 0x00160000}};
  s21_decimal val3 = {{0x65D80EB4, 0xB87580E8, 0x32A7EEC6, 0x00160000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_146) {
  int true_res = 0;
  s21_decimal val1 = {{0xB64D6712, 0xE3246C52, 0xAB7D52EF, 0x80010000}};
  s21_decimal val2 = {{0xD646640C, 0xB96AF33A, 0x79AAC392, 0x00020000}};
  s21_decimal val3 = {{0x3A799044, 0x9D668733, 0x9F52A5C7, 0x80010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_147) {
  int true_res = 0;
  s21_decimal val1 = {{0xE833B3E9, 0x1A16175D, 0x951DAB88, 0x801C0000}};
  s21_decimal val2 = {{0xF9E4D475, 0x2331BFED, 0x8C49E496, 0x80130000}};
  s21_decimal val3 = {{0xFE5B0BB3, 0xA3A46A04, 0x8C49E498, 0x80130000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_148) {
  int true_res = 0;
  s21_decimal val1 = {{0x082846B8, 0x55B20F51, 0xEBA108B8, 0x80140000}};
  s21_decimal val2 = {{0x58F9A937, 0xD3B93AF4, 0xF3207DDC, 0x80100000}};
  s21_decimal val3 = {{0x2429CB04, 0xC18142CA, 0xF3268614, 0x80100000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_149) {
  int true_res = 0;
  s21_decimal val1 = {{0xDFA9604C, 0x3B122E6B, 0x16975B11, 0x00140000}};
  s21_decimal val2 = {{0xB3F4A4F2, 0x30DEAA6E, 0x9E5E4B7C, 0x000A0000}};
  s21_decimal val3 = {{0xB0EB02D1, 0x3A92991E, 0x9E5E4B7C, 0x000A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_150) {
  int true_res = 0;
  s21_decimal val1 = {{0xBFD06870, 0x8F8795BD, 0x4A246E03, 0x00120000}};
  s21_decimal val2 = {{0xE400265C, 0x40FC45BF, 0x76FEF1F5, 0x00120000}};
  s21_decimal val3 = {{0xA3D08ECC, 0xD083DB7D, 0xC1235FF8, 0x00120000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_151) {
  int true_res = 0;
  s21_decimal val1 = {{0xEF241A8E, 0x58761F2D, 0x90155230, 0x80140000}};
  s21_decimal val2 = {{0x2F81DA02, 0xAADF4FBF, 0x78747075, 0x80120000}};
  s21_decimal val3 = {{0x909E5F65, 0xABC1C5D1, 0x79E54AE1, 0x80120000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_152) {
  int true_res = 0;
  s21_decimal val1 = {{0xEC81C37F, 0x8F3837DD, 0xABA582F6, 0x00070000}};
  s21_decimal val2 = {{0x50AF00A3, 0xCD73F124, 0x14FB373D, 0x001B0000}};
  s21_decimal val3 = {{0xF06093FD, 0x8F3837DD, 0xABA582F6, 0x00070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_153) {
  int true_res = 0;
  s21_decimal val1 = {{0x878A3F87, 0x29E2939D, 0x819C59DD, 0x001A0000}};
  s21_decimal val2 = {{0x5E5DC2E9, 0xD49C08D6, 0x0F227410, 0x800E0000}};
  s21_decimal val3 = {{0x596DDC6B, 0x4887428E, 0x975888A8, 0x800F0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_154) {
  int true_res = 0;
  s21_decimal val1 = {{0xFDF44E67, 0x2B0EF1AD, 0xEBFD2825, 0x00130000}};
  s21_decimal val2 = {{0xF1E3925E, 0x285D63C6, 0x3C9B1BD1, 0x00030000}};
  s21_decimal val3 = {{0x6C8FD221, 0x285D6A6B, 0x3C9B1BD1, 0x00030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_155) {
  int true_res = 0;
  s21_decimal val1 = {{0x15868CF6, 0x204FB230, 0x6A467B82, 0x800F0000}};
  s21_decimal val2 = {{0x4D90C645, 0x9C2A0D69, 0xEA989E85, 0x80190000}};
  s21_decimal val3 = {{0xE2EA10EB, 0x8511D14D, 0x6A467B82, 0x800F0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_156) {
  int true_res = 0;
  s21_decimal val1 = {{0x55C56CD3, 0xD3CCFF86, 0x236B5FDB, 0x00060000}};
  s21_decimal val2 = {{0x5F14B5E1, 0x970246FA, 0xEFA16AAB, 0x800B0000}};
  s21_decimal val3 = {{0xCDF6556C, 0x7EBCF6FF, 0x236AC2D0, 0x00060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_157) {
  int true_res = 0;
  s21_decimal val1 = {{0x50213984, 0x3A810BE4, 0xDA64DB9F, 0x800C0000}};
  s21_decimal val2 = {{0xF4CA3F44, 0x60D3D42B, 0x258AF9BA, 0x00000000}};
  s21_decimal val3 = {{0x7B395A1C, 0x5FE3B3BB, 0x258AF9BA, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_158) {
  int true_res = 0;
  s21_decimal val1 = {{0xEC495A43, 0x2E1E4FF7, 0xE4AC9D2C, 0x00080000}};
  s21_decimal val2 = {{0xF55DEE05, 0xA738CBE7, 0x06F99E69, 0x80120000}};
  s21_decimal val3 = {{0xEB30E7A1, 0x2B1F651A, 0xE4AC9D2C, 0x00080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_159) {
  int true_res = 0;
  s21_decimal val1 = {{0x60509CB8, 0x6E2D7D6F, 0x790C3B07, 0x001A0000}};
  s21_decimal val2 = {{0x580C3E2C, 0x3E1BE266, 0xC55DD996, 0x80110000}};
  s21_decimal val3 = {{0xEF51ECF6, 0x3636728C, 0xC55DD994, 0x80110000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_160) {
  int true_res = 0;
  s21_decimal val1 = {{0xA49C4BBD, 0x82847CE9, 0xD907847B, 0x00120000}};
  s21_decimal val2 = {{0x55F857BF, 0xB7A47B3B, 0xF8E5DAE1, 0x00120000}};
  s21_decimal val3 = {{0x4C421059, 0x85D0E59D, 0x2E97BCBC, 0x00110000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_161) {
  int true_res = 0;
  s21_decimal val1 = {{0x61AA723D, 0xA235AF0B, 0xF6960466, 0x80090000}};
  s21_decimal val2 = {{0x26CD59BF, 0x86F203BD, 0x0C338E6C, 0x00190000}};
  s21_decimal val3 = {{0x7611FFDA, 0xA235AEB3, 0xF6960466, 0x80090000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_162) {
  int true_res = 0;
  s21_decimal val1 = {{0xBA303B24, 0xCBB70F5A, 0xEBF88237, 0x80010000}};
  s21_decimal val2 = {{0x650E5E29, 0x810BC668, 0xD1DE43F1, 0x800D0000}};
  s21_decimal val3 = {{0x07D48205, 0xCC9DD002, 0xEBF88237, 0x80010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_163) {
  int true_res = 0;
  s21_decimal val1 = {{0x2AD5CBEA, 0x7B34F0FD, 0xA80621FA, 0x80150000}};
  s21_decimal val2 = {{0x6361EB1B, 0xF6711FF9, 0x0335FA01, 0x00010000}};
  s21_decimal val3 = {{0xABE01D30, 0xA06B3FBC, 0x201BC413, 0x00020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_164) {
  int true_res = 0;
  s21_decimal val1 = {{0x51352710, 0xC5BA26AD, 0xB9863147, 0x80000000}};
  s21_decimal val2 = {{0xAD057500, 0xCA36B45D, 0xED46F01C, 0x80130000}};
  s21_decimal val3 = {{0x06E8187B, 0xC5BA26AF, 0xB9863147, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_165) {
  int true_res = 0;
  s21_decimal val1 = {{0xBBB69EC4, 0x46023ABF, 0x4587D464, 0x000D0000}};
  s21_decimal val2 = {{0x992C6838, 0x5AEBB7C7, 0xC131F0B0, 0x001B0000}};
  s21_decimal val3 = {{0x7579C6AB, 0x46045A8B, 0x4587D464, 0x000D0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_166) {
  int true_res = 0;
  s21_decimal val1 = {{0x4EBD7A78, 0xBCAAE747, 0x55F10EB4, 0x00170000}};
  s21_decimal val2 = {{0x0D79E459, 0x1DEF823D, 0xB6CE77C3, 0x80010000}};
  s21_decimal val3 = {{0x0D514EA4, 0x1DEF823D, 0xB6CE77C3, 0x80010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_167) {
  int true_res = 0;
  s21_decimal val1 = {{0xBED58AAC, 0xB4D95BCA, 0xFA5D47A1, 0x80090000}};
  s21_decimal val2 = {{0x29666336, 0xC2D1DACD, 0x4FC56FEE, 0x80090000}};
  s21_decimal val3 = {{0x30D2CAFD, 0xA5911F0F, 0x210378C1, 0x80080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_168) {
  int true_res = 0;
  s21_decimal val1 = {{0x091A6B1C, 0x5F7CD52F, 0x1ABF1ACD, 0x80190000}};
  s21_decimal val2 = {{0xAADA39F2, 0x56EB07CE, 0x41128C23, 0x00140000}};
  s21_decimal val3 = {{0xB4F8D754, 0x055F9A9D, 0x41127A9C, 0x00140000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_169) {
  int true_res = 0;
  s21_decimal val1 = {{0x3C6AD506, 0xED6515B8, 0x57FA16FE, 0x000C0000}};
  s21_decimal val2 = {{0x9C1C7611, 0xABF5827F, 0x9DF0CD55, 0x80070000}};
  s21_decimal val3 = {{0x5FC18A07, 0x984D0C46, 0x9DF093AD, 0x80070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_170) {
  int true_res = 0;
  s21_decimal val1 = {{0xF8581E84, 0xD2DEA6CA, 0x16040ACB, 0x00090000}};
  s21_decimal val2 = {{0x361DE5F0, 0x9438B9DB, 0x4E4E464E, 0x000D0000}};
  s21_decimal val3 = {{0xD920D682, 0xE445010A, 0xDC3C77CE, 0x000A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_171) {
  int true_res = 0;
  s21_decimal val1 = {{0x2A328069, 0xF7ADE21E, 0x00B507CD, 0x00140000}};
  s21_decimal val2 = {{0x5B36446B, 0x555A45FF, 0x0F96EEF1, 0x80050000}};
  s21_decimal val3 = {{0x01E81EE1, 0x5586B9FC, 0x9BE5556D, 0x80060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_172) {
  int true_res = 0;
  s21_decimal val1 = {{0x557E6245, 0x7C022676, 0x34444253, 0x80150000}};
  s21_decimal val2 = {{0x4DBB0086, 0xAFC50F24, 0xEFA6F74E, 0x80010000}};
  s21_decimal val3 = {{0x575F3965, 0xAFC50F24, 0xEFA6F74E, 0x80010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_173) {
  int true_res = 0;
  s21_decimal val1 = {{0x09574209, 0x9F2F76A0, 0xED8232FD, 0x800A0000}};
  s21_decimal val2 = {{0x558594CB, 0xD6105AC3, 0x0231A30B, 0x801C0000}};
  s21_decimal val3 = {{0x31CFA14E, 0x9F2F76A0, 0xED8232FD, 0x800A0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_174) {
  int true_res = 0;
  s21_decimal val1 = {{0xACE23BDE, 0xEF014ED0, 0x6F575287, 0x00010000}};
  s21_decimal val2 = {{0x917ED51F, 0x2316A0A7, 0x632D6CAA, 0x80190000}};
  s21_decimal val3 = {{0xACE1C3F8, 0xEF014ED0, 0x6F575287, 0x00010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_175) {
  int true_res = 0;
  s21_decimal val1 = {{0x5AC2C2C8, 0x46F00A2C, 0x5C9FA7FF, 0x00120000}};
  s21_decimal val2 = {{0x58E081F5, 0x6DCF7752, 0x6B059D4C, 0x80190000}};
  s21_decimal val3 = {{0xA1A6F980, 0xB95E3C57, 0x5C9FA74B, 0x00120000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_176) {
  int true_res = 0;
  s21_decimal val1 = {{0xC669D231, 0x513275F6, 0x16D09441, 0x00180000}};
  s21_decimal val2 = {{0xBBB2D0A3, 0x6D4BA5A5, 0xAC76F270, 0x00080000}};
  s21_decimal val3 = {{0x2181A51B, 0x6D4BA64A, 0xAC76F270, 0x00080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_177) {
  int true_res = 0;
  s21_decimal val1 = {{0xB8102A33, 0x05489F2E, 0xDA0177D6, 0x000E0000}};
  s21_decimal val2 = {{0xE666A32D, 0x9DE2835D, 0x8FFC091B, 0x80190000}};
  s21_decimal val3 = {{0x294927B2, 0xFF197ECE, 0xDA0177D5, 0x000E0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_178) {
  int true_res = 0;
  s21_decimal val1 = {{0x3021AD33, 0x602F391F, 0xD8F0C36D, 0x800D0000}};
  s21_decimal val2 = {{0x632B9E60, 0xBA3215E5, 0x60ED08E1, 0x80080000}};
  s21_decimal val3 = {{0xE517EAD0, 0x4CF2D800, 0x60ED970E, 0x80080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_179) {
  int true_res = 0;
  s21_decimal val1 = {{0x04644DB4, 0x2E902B48, 0xA8537C4C, 0x80180000}};
  s21_decimal val2 = {{0x87C72881, 0x2AB1BF1B, 0xD6905D5C, 0x00090000}};
  s21_decimal val3 = {{0x5B01B16B, 0x2AB18FBA, 0xD6905D5C, 0x00090000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_180) {
  int true_res = 0;
  s21_decimal val1 = {{0x47FC0339, 0x9A918FA6, 0x67E27A95, 0x800F0000}};
  s21_decimal val2 = {{0x32182C51, 0xEA6EBBBE, 0xE39B2DDB, 0x00080000}};
  s21_decimal val3 = {{0xAEB5CC68, 0xA04D0B3D, 0xE39B2D2D, 0x00080000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_181) {
  int true_res = 0;
  s21_decimal val1 = {{0x8F96A2E5, 0xD4568112, 0xD8CEB6FF, 0x800C0000}};
  s21_decimal val2 = {{0xB3851B77, 0x75EFFC54, 0x69C9A140, 0x80060000}};
  s21_decimal val3 = {{0xE29CC0DE, 0xE2F9114E, 0x69C9AF75, 0x80060000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_182) {
  int true_res = 0;
  s21_decimal val1 = {{0xAFD49013, 0x5E90B67E, 0x72E32557, 0x80010000}};
  s21_decimal val2 = {{0xFFFB83F3, 0xA8417790, 0x9AA43312, 0x80060000}};
  s21_decimal val3 = {{0x172CCA64, 0xE44E75F2, 0x72E38AAF, 0x80010000}};
  s21_decimal output;
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_183) {
  int true_res = 0;
  s21_decimal val1 = {{0x04CC6428, 0x1E2971B8, 0x945A5AB1, 0x00070000}};
  s21_decimal val2 = {{0x4DD9AEA9, 0xF2A4B4D4, 0x0E9114DF, 0x80190000}};
  s21_decimal val3 = {{0xF816FA78, 0x1E2971B6, 0x945A5AB1, 0x00070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_184) {
  int true_res = 0;
  s21_decimal val1 = {{0x1F39386C, 0xFEC89F31, 0xD891AF1A, 0x80150000}};
  s21_decimal val2 = {{0xC4276170, 0x4D93693B, 0xDB7BCF9A, 0x000B0000}};
  s21_decimal val3 = {{0x5639E3FB, 0xF08F639C, 0xDB7BCF99, 0x000B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_185) {
  int true_res = 0;
  s21_decimal val1 = {{0xF2914A1B, 0x519B76A5, 0x82AA46C1, 0x00030000}};
  s21_decimal val2 = {{0x1A58F02E, 0xA9AA6E36, 0x30AB579C, 0x000B0000}};
  s21_decimal val3 = {{0x0EF993B5, 0x7BF02342, 0x82AA46C9, 0x00030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_186) {
  int true_res = 0;
  s21_decimal val1 = {{0x313038D7, 0x6A2186C1, 0xA5623836, 0x000F0000}};
  s21_decimal val2 = {{0xEBB10812, 0x155546D0, 0xF06D6213, 0x800D0000}};
  s21_decimal val3 = {{0x6DC27824, 0x7FCAB38C, 0xEEC6003B, 0x800D0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_187) {
  int true_res = 0;
  s21_decimal val1 = {{0xBF1845F3, 0x3DBE85C9, 0x9A6E4684, 0x80180000}};
  s21_decimal val2 = {{0x89D39136, 0xC3641622, 0xEC8DF95F, 0x80030000}};
  s21_decimal val3 = {{0x8CACD88C, 0xC3641622, 0xEC8DF95F, 0x80030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_188) {
  int true_res = 0;
  s21_decimal val1 = {{0xB3211CF2, 0x9CA31CB7, 0x4812F768, 0x80040000}};
  s21_decimal val2 = {{0xBD38259D, 0x3C58C842, 0x00ED95A2, 0x800A0000}};
  s21_decimal val3 = {{0xD131D726, 0x2EA4CC7D, 0x4812F778, 0x80040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_189) {
  int true_res = 0;
  s21_decimal val1 = {{0xC18F0DFC, 0xE4480E20, 0xDADDFDFD, 0x000B0000}};
  s21_decimal val2 = {{0xF862D6A2, 0x10DCA8BB, 0x83E04420, 0x800E0000}};
  s21_decimal val3 = {{0x62559C9E, 0x1776F043, 0xDABC3B5D, 0x000B0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_190) {
  int true_res = 0;
  s21_decimal val1 = {{0x96479C6E, 0x9CC5F92B, 0x610EC514, 0x00110000}};
  s21_decimal val2 = {{0x995264EB, 0x2C0DB5D5, 0x75689000, 0x00070000}};
  s21_decimal val3 = {{0xF75B0E9A, 0x55BD5111, 0x75689000, 0x00070000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_191) {
  int true_res = 0;
  s21_decimal val1 = {{0x3B8E77BD, 0x6CB0A6AD, 0xEE6666A4, 0x80190000}};
  s21_decimal val2 = {{0xB01E222D, 0xDC1BF53F, 0x64DDA8A3, 0x00190000}};
  s21_decimal val3 = {{0x8B705590, 0x9094B16D, 0x8988BE00, 0x80190000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_192) {
  int true_res = 0;
  s21_decimal val1 = {{0x310176E1, 0x3A7FCF0D, 0x797358A1, 0x00020000}};
  s21_decimal val2 = {{0xDA7304A1, 0xA40E81EB, 0x8BFE9656, 0x80130000}};
  s21_decimal val3 = {{0x5094FE33, 0x3A7FCEA8, 0x797358A1, 0x00020000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_193) {
  int true_res = 0;
  s21_decimal val1 = {{0xA922646E, 0xDCDEE60B, 0xDD22B876, 0x80030000}};
  s21_decimal val2 = {{0x891D897A, 0x16AD9D73, 0x38282B52, 0x80060000}};
  s21_decimal val3 = {{0xBE84FB5A, 0x7D263D7F, 0xDD3118C3, 0x80030000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_194) {
  int true_res = 0;
  s21_decimal val1 = {{0x7B04EA39, 0x8665558F, 0x2352F28C, 0x00160000}};
  s21_decimal val2 = {{0x0B24BE72, 0xF415B706, 0x3A2BD613, 0x80010000}};
  s21_decimal val3 = {{0x0A7DEE55, 0xF415B706, 0x3A2BD613, 0x80010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_195) {
  int true_res = 0;
  s21_decimal val1 = {{0xE32DEB8E, 0x1DC56834, 0x74ABC804, 0x800E0000}};
  s21_decimal val2 = {{0xD8BA084C, 0x2E05A300, 0x73ED059B, 0x00120000}};
  s21_decimal val3 = {{0xF73A64F3, 0xC91B7943, 0x74A8D048, 0x800E0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_196) {
  int true_res = 0;
  s21_decimal val1 = {{0xD669CD99, 0xCD677DD3, 0x3BB75E45, 0x000E0000}};
  s21_decimal val2 = {{0x831B8288, 0xB1FE7DEE, 0xDF679083, 0x000E0000}};
  int s21_res = s21_add(val1, val2, NULL);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_197) {
  int true_res = 0;
  s21_decimal val1 = {{0x029AEDF4, 0x80AC9D63, 0x6EE5043F, 0x800C0000}};
  s21_decimal val2 = {{0x0266E158, 0x895852BE, 0x02DFF6DC, 0x00170000}};
  int s21_res = s21_add(val1, val2, NULL);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_198) {
  int true_res = 0;
  s21_decimal val1 = {{0x3A42F72A, 0x6D127F7F, 0xDAD8F9CC, 0x80040000}};
  s21_decimal val2 = {{0xBA4EBDBB, 0x547FBCC8, 0x884AF169, 0x00150000}};
  s21_decimal val3 = {{0x04B000BD, 0x6D127F1D, 0xDAD8F9CC, 0x80040000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_199) {
  int true_res = 0;
  s21_decimal val1 = {{0x14911C41, 0xD5274247, 0xB71122F9, 0x800F0000}};
  s21_decimal val2 = {{0x992ADC38, 0xC0EEC5A1, 0x2E9BA2CA, 0x801A0000}};
  s21_decimal val3 = {{0x77FE8246, 0xD727B800, 0xB71122F9, 0x800F0000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_200) {
  int true_res = 1;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000}};
  s21_decimal val2 = {{0x00000005, 0x00000000, 0x00000000, 0x00010000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_add_201) {
  int true_res = 0;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00010000}};
  s21_decimal val2 = {{0x00000005, 0x00000000, 0x00000000, 0x00020000}};
  s21_decimal val3 = {{0x9999999a, 0x99999999, 0x19999999, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x80000000, 0x00000000}};
  int s21_res = s21_add(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(output.bits[i], val3.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

Suite *test_add(void) {
  Suite *s = suite_create("\033[45m-=S21_ADD=-\033[0m");
  TCase *tc = tcase_create("s21_add_tc");

  tcase_add_test(tc, s21_add_1);
  tcase_add_test(tc, s21_add_2);
  tcase_add_test(tc, s21_add_3);
  tcase_add_test(tc, s21_add_4);
  tcase_add_test(tc, s21_add_5);
  tcase_add_test(tc, s21_add_6);
  tcase_add_test(tc, s21_add_7);
  tcase_add_test(tc, s21_add_8);
  tcase_add_test(tc, s21_add_9);
  tcase_add_test(tc, s21_add_10);
  tcase_add_test(tc, s21_add_11);
  tcase_add_test(tc, s21_add_12);
  tcase_add_test(tc, s21_add_13);
  tcase_add_test(tc, s21_add_14);
  tcase_add_test(tc, s21_add_15);
  tcase_add_test(tc, s21_add_16);
  tcase_add_test(tc, s21_add_17);
  tcase_add_test(tc, s21_add_18);
  tcase_add_test(tc, s21_add_19);
  tcase_add_test(tc, s21_add_20);
  tcase_add_test(tc, s21_add_21);
  tcase_add_test(tc, s21_add_22);
  tcase_add_test(tc, s21_add_23);
  tcase_add_test(tc, s21_add_24);
  tcase_add_test(tc, s21_add_25);
  tcase_add_test(tc, s21_add_26);
  tcase_add_test(tc, s21_add_27);
  tcase_add_test(tc, s21_add_28);
  tcase_add_test(tc, s21_add_29);
  tcase_add_test(tc, s21_add_30);
  tcase_add_test(tc, s21_add_31);
  tcase_add_test(tc, s21_add_32);
  tcase_add_test(tc, s21_add_33);
  tcase_add_test(tc, s21_add_34);
  tcase_add_test(tc, s21_add_35);
  tcase_add_test(tc, s21_add_36);
  tcase_add_test(tc, s21_add_37);
  tcase_add_test(tc, s21_add_38);
  tcase_add_test(tc, s21_add_39);
  tcase_add_test(tc, s21_add_40);
  tcase_add_test(tc, s21_add_41);
  tcase_add_test(tc, s21_add_42);
  tcase_add_test(tc, s21_add_43);
  tcase_add_test(tc, s21_add_44);
  tcase_add_test(tc, s21_add_45);
  tcase_add_test(tc, s21_add_46);
  tcase_add_test(tc, s21_add_47);
  tcase_add_test(tc, s21_add_48);
  tcase_add_test(tc, s21_add_49);
  tcase_add_test(tc, s21_add_50);
  tcase_add_test(tc, s21_add_51);
  tcase_add_test(tc, s21_add_52);
  tcase_add_test(tc, s21_add_53);
  tcase_add_test(tc, s21_add_54);
  tcase_add_test(tc, s21_add_55);
  tcase_add_test(tc, s21_add_56);
  tcase_add_test(tc, s21_add_57);
  tcase_add_test(tc, s21_add_58);
  tcase_add_test(tc, s21_add_59);
  tcase_add_test(tc, s21_add_60);
  tcase_add_test(tc, s21_add_61);
  tcase_add_test(tc, s21_add_62);
  tcase_add_test(tc, s21_add_63);
  tcase_add_test(tc, s21_add_64);
  tcase_add_test(tc, s21_add_65);
  tcase_add_test(tc, s21_add_66);
  tcase_add_test(tc, s21_add_67);
  tcase_add_test(tc, s21_add_68);
  tcase_add_test(tc, s21_add_69);
  tcase_add_test(tc, s21_add_70);
  tcase_add_test(tc, s21_add_71);
  tcase_add_test(tc, s21_add_72);
  tcase_add_test(tc, s21_add_73);
  tcase_add_test(tc, s21_add_74);
  tcase_add_test(tc, s21_add_75);
  tcase_add_test(tc, s21_add_76);
  tcase_add_test(tc, s21_add_77);
  tcase_add_test(tc, s21_add_78);
  tcase_add_test(tc, s21_add_79);
  tcase_add_test(tc, s21_add_80);
  tcase_add_test(tc, s21_add_81);
  tcase_add_test(tc, s21_add_82);
  tcase_add_test(tc, s21_add_83);
  tcase_add_test(tc, s21_add_84);
  tcase_add_test(tc, s21_add_85);
  tcase_add_test(tc, s21_add_86);
  tcase_add_test(tc, s21_add_87);
  tcase_add_test(tc, s21_add_88);
  tcase_add_test(tc, s21_add_89);
  tcase_add_test(tc, s21_add_90);
  tcase_add_test(tc, s21_add_91);
  tcase_add_test(tc, s21_add_92);
  tcase_add_test(tc, s21_add_93);
  tcase_add_test(tc, s21_add_94);
  tcase_add_test(tc, s21_add_95);
  tcase_add_test(tc, s21_add_96);
  tcase_add_test(tc, s21_add_97);
  tcase_add_test(tc, s21_add_98);
  tcase_add_test(tc, s21_add_99);
  tcase_add_test(tc, s21_add_100);
  tcase_add_test(tc, s21_add_101);
  tcase_add_test(tc, s21_add_102);
  tcase_add_test(tc, s21_add_103);
  tcase_add_test(tc, s21_add_104);
  tcase_add_test(tc, s21_add_105);
  tcase_add_test(tc, s21_add_106);
  tcase_add_test(tc, s21_add_107);
  tcase_add_test(tc, s21_add_108);
  tcase_add_test(tc, s21_add_109);
  tcase_add_test(tc, s21_add_110);
  tcase_add_test(tc, s21_add_111);
  tcase_add_test(tc, s21_add_112);
  tcase_add_test(tc, s21_add_113);
  tcase_add_test(tc, s21_add_114);
  tcase_add_test(tc, s21_add_115);
  tcase_add_test(tc, s21_add_116);
  tcase_add_test(tc, s21_add_117);
  tcase_add_test(tc, s21_add_118);
  tcase_add_test(tc, s21_add_119);
  tcase_add_test(tc, s21_add_120);
  tcase_add_test(tc, s21_add_121);
  tcase_add_test(tc, s21_add_122);
  tcase_add_test(tc, s21_add_123);
  tcase_add_test(tc, s21_add_124);
  tcase_add_test(tc, s21_add_125);
  tcase_add_test(tc, s21_add_126);
  tcase_add_test(tc, s21_add_127);
  tcase_add_test(tc, s21_add_128);
  tcase_add_test(tc, s21_add_129);
  tcase_add_test(tc, s21_add_130);
  tcase_add_test(tc, s21_add_131);
  tcase_add_test(tc, s21_add_132);
  tcase_add_test(tc, s21_add_133);
  tcase_add_test(tc, s21_add_134);
  tcase_add_test(tc, s21_add_135);
  tcase_add_test(tc, s21_add_136);
  tcase_add_test(tc, s21_add_137);
  tcase_add_test(tc, s21_add_138);
  tcase_add_test(tc, s21_add_139);
  tcase_add_test(tc, s21_add_140);
  tcase_add_test(tc, s21_add_141);
  tcase_add_test(tc, s21_add_142);
  tcase_add_test(tc, s21_add_143);
  tcase_add_test(tc, s21_add_144);
  tcase_add_test(tc, s21_add_145);
  tcase_add_test(tc, s21_add_146);
  tcase_add_test(tc, s21_add_147);
  tcase_add_test(tc, s21_add_148);
  tcase_add_test(tc, s21_add_149);
  tcase_add_test(tc, s21_add_150);
  tcase_add_test(tc, s21_add_151);
  tcase_add_test(tc, s21_add_152);
  tcase_add_test(tc, s21_add_153);
  tcase_add_test(tc, s21_add_154);
  tcase_add_test(tc, s21_add_155);
  tcase_add_test(tc, s21_add_156);
  tcase_add_test(tc, s21_add_157);
  tcase_add_test(tc, s21_add_158);
  tcase_add_test(tc, s21_add_159);
  tcase_add_test(tc, s21_add_160);
  tcase_add_test(tc, s21_add_161);
  tcase_add_test(tc, s21_add_162);
  tcase_add_test(tc, s21_add_163);
  tcase_add_test(tc, s21_add_164);
  tcase_add_test(tc, s21_add_165);
  tcase_add_test(tc, s21_add_166);
  tcase_add_test(tc, s21_add_167);
  tcase_add_test(tc, s21_add_168);
  tcase_add_test(tc, s21_add_169);
  tcase_add_test(tc, s21_add_170);
  tcase_add_test(tc, s21_add_171);
  tcase_add_test(tc, s21_add_172);
  tcase_add_test(tc, s21_add_173);
  tcase_add_test(tc, s21_add_174);
  tcase_add_test(tc, s21_add_175);
  tcase_add_test(tc, s21_add_176);
  tcase_add_test(tc, s21_add_177);
  tcase_add_test(tc, s21_add_178);
  tcase_add_test(tc, s21_add_179);
  tcase_add_test(tc, s21_add_180);
  tcase_add_test(tc, s21_add_181);
  tcase_add_test(tc, s21_add_182);
  tcase_add_test(tc, s21_add_183);
  tcase_add_test(tc, s21_add_184);
  tcase_add_test(tc, s21_add_185);
  tcase_add_test(tc, s21_add_186);
  tcase_add_test(tc, s21_add_187);
  tcase_add_test(tc, s21_add_188);
  tcase_add_test(tc, s21_add_189);
  tcase_add_test(tc, s21_add_190);
  tcase_add_test(tc, s21_add_191);
  tcase_add_test(tc, s21_add_192);
  tcase_add_test(tc, s21_add_193);
  tcase_add_test(tc, s21_add_194);
  tcase_add_test(tc, s21_add_195);
  tcase_add_test(tc, s21_add_196);
  tcase_add_test(tc, s21_add_197);
  tcase_add_test(tc, s21_add_198);
  tcase_add_test(tc, s21_add_199);
  tcase_add_test(tc, s21_add_200);
  tcase_add_test(tc, s21_add_201);

  suite_add_tcase(s, tc);
  return s;
}
