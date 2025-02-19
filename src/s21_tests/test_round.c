#include "test_me.h"

START_TEST(s21_round_1) {
  int true_res = 1;
  s21_decimal val1 = {{0x73087F8F, 0x4C5533F2, 0x343E591A, 0x80140000}};
  int s21_res = s21_round(val1, NULL);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_2) {
  int true_res = 0;
  s21_decimal val1 = {{0x00007E39, 0, 0, 0x00050000}};
  s21_decimal result = {{0, 0, 0, 0}};
  s21_decimal output = {0};
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_3) {
  int true_res = 0;
  s21_decimal val1 = {{0x00007E39, 0, 0, 0x80050000}};
  s21_decimal result = {{0, 0, 0, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_4) {
  int true_res = 0;
  s21_decimal val1 = {{0xFAE888A3, 0xCA95D994, 0x55D4D7E1, 0x800E0000}};
  s21_decimal result = {{0x0E373FB1, 0x0000F198, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_5) {
  int true_res = 0;
  s21_decimal val1 = {{0xF56A9A9F, 0xB49F7346, 0xF61193F7, 0x001C0000}};
  s21_decimal result = {{0x00000008, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_6) {
  int true_res = 0;
  s21_decimal val1 = {{0xFC545E06, 0xD7B65C00, 0xD8C91A79, 0x80090000}};
  s21_decimal result = {{0x1FAA61BA, 0xA3163E85, 0x00000003, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_7) {
  int true_res = 0;
  s21_decimal val1 = {{0xDD7BE426, 0xFD2FE36E, 0x89DE1AA6, 0x000F0000}};
  s21_decimal result = {{0x6839D693, 0x000026CE, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_8) {
  int true_res = 0;
  s21_decimal val1 = {{0xBC20A2E0, 0xC887B67D, 0x795E9437, 0x80010000}};
  s21_decimal result = {{0x92D0104A, 0x60DA5F0C, 0x0C230ED2, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_9) {
  int true_res = 0;
  s21_decimal val1 = {{0xF9096864, 0x1199F27B, 0xCACC6B13, 0x001A0000}};
  s21_decimal result = {{0x00000274, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_10) {
  int true_res = 0;
  s21_decimal val1 = {{0xC3D0EFE1, 0x2B345D1B, 0x00335C00, 0x000D0000}};
  s21_decimal result = {{0xA3516437, 0x000005A5, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_11) {
  int true_res = 0;
  s21_decimal val1 = {{0x299A89F8, 0xC7D0D493, 0x62AE39EE, 0x00140000}};
  s21_decimal result = {{0x12340EE8, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_12) {
  int true_res = 0;
  s21_decimal val1 = {{0x41725485, 0x934A431D, 0x9CAD5D07, 0x000E0000}};
  s21_decimal result = {{0xD23F68CA, 0x0001B901, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_13) {
  int true_res = 0;
  s21_decimal val1 = {{0xD5F208B3, 0x8431856D, 0x76C296C0, 0x00050000}};
  s21_decimal result = {{0xE386FA7A, 0xA401524A, 0x00004DD4, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_14) {
  int true_res = 0;
  s21_decimal val1 = {{0x6AE0FD75, 0x04D8CAF8, 0x757A92C2, 0x000C0000}};
  s21_decimal result = {{0xCFC4F1FB, 0x00812B57, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_15) {
  int true_res = 0;
  s21_decimal val1 = {{0x0657A1CE, 0x5E4F07E9, 0xC6A6C395, 0x80100000}};
  s21_decimal result = {{0x6F31A3CF, 0x00000597, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_16) {
  int true_res = 0;
  s21_decimal val1 = {{0x0C0AE632, 0xCAA89C4D, 0x13F51E02, 0x80000000}};
  s21_decimal result = {{0x0C0AE632, 0xCAA89C4D, 0x13F51E02, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_17) {
  int true_res = 0;
  s21_decimal val1 = {{0x0C9D0EF5, 0xDA681480, 0x77004C4C, 0x80140000}};
  s21_decimal result = {{0x15F3ABCD, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_18) {
  int true_res = 0;
  s21_decimal val1 = {{0x2A2F3E24, 0x1BC134D3, 0x1343AE4D, 0x801C0000}};
  s21_decimal result = {{0x00000001, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_19) {
  int true_res = 0;
  s21_decimal val1 = {{0x8E954029, 0x22C81485, 0x64C3930E, 0x80190000}};
  s21_decimal result = {{0x00000C2E, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_20) {
  int true_res = 0;
  s21_decimal val1 = {{0x5C6246F9, 0x3B1A57C9, 0x9BF6B01D, 0x00110000}};
  s21_decimal result = {{0x6235F148, 0x00000070, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_21) {
  int true_res = 0;
  s21_decimal val1 = {{0xF109D0CF, 0x4ACC5CE4, 0x8EF564E4, 0x00020000}};
  s21_decimal result = {{0x4A17235E, 0x33F2AF02, 0x016DF954, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_22) {
  int true_res = 0;
  s21_decimal val1 = {{0x6A324E70, 0xB232FFC0, 0x54C04E2D, 0x80060000}};
  s21_decimal result = {{0x92FB20DD, 0xE39A1254, 0x0000058D, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_23) {
  int true_res = 0;
  s21_decimal val1 = {{0xDD9D2FBB, 0x22B67F32, 0x1869DD4A, 0x80120000}};
  s21_decimal result = {{0xC259A639, 0x00000001, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_24) {
  int true_res = 0;
  s21_decimal val1 = {{0x362194F6, 0x4B1BE080, 0x345AA60E, 0x80100000}};
  s21_decimal result = {{0x4042F74A, 0x00000179, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_25) {
  int true_res = 0;
  s21_decimal val1 = {{0x8F4CEC8A, 0xC0DE3D83, 0xF3632D8E, 0x00030000}};
  s21_decimal result = {{0x8E392A38, 0x36FA1407, 0x003E4EA3, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_26) {
  int true_res = 0;
  s21_decimal val1 = {{0xB86CED1E, 0xBC7F5780, 0x97426233, 0x800C0000}};
  s21_decimal result = {{0x05C4E03B, 0x00A64FB6, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_27) {
  int true_res = 0;
  s21_decimal val1 = {{0x159B557C, 0xDC471F4A, 0x9ECAD99F, 0x00030000}};
  s21_decimal result = {{0x712C717E, 0x1CA2E31A, 0x0028A69E, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_28) {
  int true_res = 0;
  s21_decimal val1 = {{0x781FB433, 0x7201668D, 0x98516393, 0x00010000}};
  s21_decimal result = {{0xBF365ED2, 0xF1CCF0A7, 0x0F3B56C1, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_29) {
  int true_res = 0;
  s21_decimal val1 = {{0x844F3CEE, 0x95C5857D, 0x898CA1B4, 0x000B0000}};
  s21_decimal result = {{0xC4E6B8E6, 0x05E85EFA, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_30) {
  int true_res = 0;
  s21_decimal val1 = {{0x69744AF1, 0x792CBEEC, 0xCC8B5D5A, 0x801A0000}};
  s21_decimal result = {{0x00000279, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_31) {
  int true_res = 0;
  s21_decimal val1 = {{0x3447574A, 0x9E206082, 0x759DFA55, 0x80040000}};
  s21_decimal result = {{0xC3D860DB, 0xC03F07CA, 0x000302D0, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_32) {
  int true_res = 0;
  s21_decimal val1 = {{0xE4CCFAD3, 0x8709840B, 0xB51CB5EE, 0x80180000}};
  s21_decimal result = {{0x0000DAF3, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_33) {
  int true_res = 0;
  s21_decimal val1 = {{0x295D72A7, 0x45208BC3, 0xDC5E0AC1, 0x001B0000}};
  s21_decimal result = {{0x00000044, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_34) {
  int true_res = 0;
  s21_decimal val1 = {{0x72C6CDD8, 0x5FEEA3FE, 0x7780FA0A, 0x800E0000}};
  s21_decimal result = {{0x92F83773, 0x0001505F, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_35) {
  int true_res = 0;
  s21_decimal val1 = {{0x5BBF6513, 0xE5B67ECB, 0xF8126E57, 0x80130000}};
  s21_decimal result = {{0xC99CB022, 0x00000001, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_36) {
  int true_res = 0;
  s21_decimal val1 = {{0x6FA20EBA, 0x73E12A2C, 0x07768487, 0x00140000}};
  s21_decimal result = {{0x01606DA6, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_37) {
  int true_res = 0;
  s21_decimal val1 = {{0xA4B7EA9C, 0x6326FA14, 0x8D6A6D66, 0x001A0000}};
  s21_decimal result = {{0x000001B6, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_38) {
  int true_res = 0;
  s21_decimal val1 = {{0xC0B9B2B2, 0x7454DC2C, 0xFDB2FA7F, 0x00190000}};
  s21_decimal result = {{0x00001EAC, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_39) {
  int true_res = 0;
  s21_decimal val1 = {{0xAD6B62F5, 0x1FFF1898, 0x796B215A, 0x00040000}};
  s21_decimal result = {{0x89702A12, 0x67119CDA, 0x00031BBA, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_40) {
  int true_res = 0;
  s21_decimal val1 = {{0xD182E836, 0xEE1B390B, 0x5420E857, 0x80060000}};
  s21_decimal result = {{0x3F75505D, 0x7159C36B, 0x00000583, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_41) {
  int true_res = 0;
  s21_decimal val1 = {{0x4465AEB7, 0x52846BE4, 0x0799C78A, 0x800E0000}};
  s21_decimal result = {{0xE1DC3044, 0x00001564, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_42) {
  int true_res = 0;
  s21_decimal val1 = {{0xD66367DF, 0x9E733821, 0x171777B5, 0x80050000}};
  s21_decimal result = {{0x3F2A3F01, 0x23B0C786, 0x00000F22, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_43) {
  int true_res = 0;
  s21_decimal val1 = {{0xC0081863, 0x93421D30, 0x6EBA97EC, 0x80050000}};
  s21_decimal result = {{0x2565FD90, 0x39365CBD, 0x00004891, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_44) {
  int true_res = 0;
  s21_decimal val1 = {{0x1CCAF0BA, 0x56D65273, 0xE00CC9FD, 0x00120000}};
  s21_decimal result = {{0x24FE020B, 0x00000010, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_45) {
  int true_res = 0;
  s21_decimal val1 = {{0x87604B38, 0x0B703F93, 0x8022494D, 0x80040000}};
  s21_decimal result = {{0x52D45C94, 0x104EEF9F, 0x000347BD, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_46) {
  int true_res = 0;
  s21_decimal val1 = {{0xA94A7B5F, 0x20B5EC39, 0xF536758B, 0x000B0000}};
  s21_decimal result = {{0x48D1554B, 0x0A88247A, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_47) {
  int true_res = 0;
  s21_decimal val1 = {{0xE5784963, 0x152FA072, 0xA47B28B6, 0x00100000}};
  s21_decimal result = {{0x360EA071, 0x000004A1, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_48) {
  int true_res = 0;
  s21_decimal val1 = {{0xA4B46FC0, 0x13C368A8, 0x2C44317D, 0x00110000}};
  s21_decimal result = {{0xE5B4B2DF, 0x0000001F, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_49) {
  int true_res = 0;
  s21_decimal val1 = {{0x314CDD96, 0x59AD0F84, 0x67690C9A, 0x80100000}};
  s21_decimal result = {{0x266C6668, 0x000002E9, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_50) {
  int true_res = 0;
  s21_decimal val1 = {{0x97627F4F, 0x8CB74025, 0xC9931D00, 0x80010000}};
  s21_decimal result = {{0x28BD0CBB, 0x4145866A, 0x14284FB3, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_51) {
  int true_res = 0;
  s21_decimal val1 = {{0x3E5C3440, 0x897F36AE, 0xED38A0AE, 0x80010000}};
  s21_decimal result = {{0x6CA2D206, 0x40F31F11, 0x17B8DCDE, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_52) {
  int true_res = 0;
  s21_decimal val1 = {{0xDAF53975, 0x1362918D, 0xE2CC777C, 0x00190000}};
  s21_decimal result = {{0x00001B6B, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_53) {
  int true_res = 0;
  s21_decimal val1 = {{0x04DD1E80, 0xCEAD09BD, 0xFF6D45AB, 0x80000000}};
  s21_decimal result = {{0x04DD1E80, 0xCEAD09BD, 0xFF6D45AB, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_54) {
  int true_res = 0;
  s21_decimal val1 = {{0x4446CF49, 0xB2E9780F, 0xBCEBCCB5, 0x00000000}};
  s21_decimal result = {{0x4446CF49, 0xB2E9780F, 0xBCEBCCB5, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_55) {
  int true_res = 0;
  s21_decimal val1 = {{0x359E678F, 0x0407B7FA, 0x4FB396E1, 0x00100000}};
  s21_decimal result = {{0x4F5B2192, 0x0000023E, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_56) {
  int true_res = 0;
  s21_decimal val1 = {{0x30F58741, 0xBBDA7F65, 0x6D811114, 0x001A0000}};
  s21_decimal result = {{0x00000153, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_57) {
  int true_res = 0;
  s21_decimal val1 = {{0x7AE490A4, 0xC775C2DD, 0xC240985F, 0x00190000}};
  s21_decimal result = {{0x0000177C, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_58) {
  int true_res = 0;
  s21_decimal val1 = {{0xE0EC26FD, 0x4AA61B2F, 0x1AEEED00, 0x00150000}};
  s21_decimal result = {{0x007F305E, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_59) {
  int true_res = 0;
  s21_decimal val1 = {{0x10CA1197, 0xF90DB2CA, 0x2C06CD73, 0x00100000}};
  s21_decimal result = {{0x3EB1041F, 0x0000013D, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_60) {
  int true_res = 0;
  s21_decimal val1 = {{0x65F83F6A, 0xBECA22F3, 0x342F6ECE, 0x00120000}};
  s21_decimal result = {{0xC2A609E2, 0x00000003, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_61) {
  int true_res = 0;
  s21_decimal val1 = {{0x650BA76F, 0xB0A559E6, 0x0189E128, 0x00020000}};
  s21_decimal result = {{0x2F172813, 0xE30BE4BD, 0x0003F054, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_62) {
  int true_res = 0;
  s21_decimal val1 = {{0x9BCF773F, 0x532B5414, 0xA3F79264, 0x00060000}};
  s21_decimal result = {{0x84DCF635, 0xE93C4C4B, 0x00000ABE, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_63) {
  int true_res = 0;
  s21_decimal val1 = {{0x7B1E5F81, 0x954B60ED, 0xD51F4315, 0x80090000}};
  s21_decimal result = {{0x55B575C1, 0x935A3F06, 0x00000003, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_64) {
  int true_res = 0;
  s21_decimal val1 = {{0x0C3B7B68, 0x16E0181A, 0x7D4DFA3C, 0x80070000}};
  s21_decimal result = {{0xA5DE772E, 0x39EA6B69, 0x000000D2, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_65) {
  int true_res = 0;
  s21_decimal val1 = {{0xFDD6FA40, 0x4C75910B, 0xF851FFA2, 0x80010000}};
  s21_decimal result = {{0x99624C3A, 0xA13EF4E7, 0x18D4FFF6, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_66) {
  int true_res = 0;
  s21_decimal val1 = {{0xDE158EA6, 0xF6EA331E, 0x66C9DE60, 0x00000000}};
  s21_decimal result = {{0xDE158EA6, 0xF6EA331E, 0x66C9DE60, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_67) {
  int true_res = 0;
  s21_decimal val1 = {{0x02B305B0, 0x685F1502, 0xABDFBBFB, 0x000A0000}};
  s21_decimal result = {{0xE01CD6D6, 0x49D1BDF2, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_68) {
  int true_res = 0;
  s21_decimal val1 = {{0x104851BF, 0xF410BEF6, 0x0CD118DE, 0x00100000}};
  s21_decimal result = {{0x5ACBF1C4, 0x0000005C, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_69) {
  int true_res = 0;
  s21_decimal val1 = {{0xBB929AAF, 0x3CF20CB3, 0xF8CBBC89, 0x80130000}};
  s21_decimal result = {{0xCAF28427, 0x00000001, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_70) {
  int true_res = 0;
  s21_decimal val1 = {{0xA97935B0, 0x8FCFBE84, 0x5D07E346, 0x80100000}};
  s21_decimal result = {{0x5B8EB47F, 0x0000029E, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_71) {
  int true_res = 0;
  s21_decimal val1 = {{0x6EEE7368, 0x64550177, 0x6866CC57, 0x80090000}};
  s21_decimal result = {{0x4958727D, 0xC066B967, 0x00000001, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_72) {
  int true_res = 0;
  s21_decimal val1 = {{0x4391AB72, 0xBF111D13, 0x8C747850, 0x001C0000}};
  s21_decimal result = {{0x00000004, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_73) {
  int true_res = 0;
  s21_decimal val1 = {{0x334F1848, 0xBABEC0D5, 0x38A90346, 0x00000000}};
  s21_decimal result = {{0x334F1848, 0xBABEC0D5, 0x38A90346, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_74) {
  int true_res = 0;
  s21_decimal val1 = {{0x971FC726, 0xD0D14F26, 0x395E89FD, 0x00050000}};
  s21_decimal result = {{0x08C8458D, 0xF8603796, 0x00002598, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_75) {
  int true_res = 0;
  s21_decimal val1 = {{0xB5907BE8, 0xD1651BCF, 0x66292CA3, 0x00140000}};
  s21_decimal result = {{0x12D868BE, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_76) {
  int true_res = 0;
  s21_decimal val1 = {{0xBF88FBE4, 0x8BD9A52A, 0xDA1AFFA0, 0x000A0000}};
  s21_decimal result = {{0x778631CE, 0x5DACF303, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_77) {
  int true_res = 0;
  s21_decimal val1 = {{0x97EAB88D, 0xC248C262, 0x1A3D1012, 0x800C0000}};
  s21_decimal result = {{0x1760C76D, 0x001CD97D, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_78) {
  int true_res = 0;
  s21_decimal val1 = {{0xCE3DF0F7, 0xAF623DD9, 0xAF070340, 0x800C0000}};
  s21_decimal result = {{0xDB9AB892, 0x00C071D4, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_79) {
  int true_res = 0;
  s21_decimal val1 = {{0x874A523C, 0x330B8802, 0xFEB3093E, 0x80000000}};
  s21_decimal result = {{0x874A523C, 0x330B8802, 0xFEB3093E, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_80) {
  int true_res = 0;
  s21_decimal val1 = {{0xD93DD3AB, 0xF3D6987D, 0x0702E8BF, 0x80110000}};
  s21_decimal result = {{0x0D5E4D77, 0x00000005, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_81) {
  int true_res = 0;
  s21_decimal val1 = {{0x0FA13CE0, 0x7BC2831E, 0xD919F946, 0x80120000}};
  s21_decimal result = {{0xA4D0A856, 0x0000000F, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_82) {
  int true_res = 0;
  s21_decimal val1 = {{0xEF78EB60, 0x586A01A2, 0xB6540D49, 0x00050000}};
  s21_decimal result = {{0xF436065F, 0x9E0C2FC8, 0x0000777D, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_83) {
  int true_res = 0;
  s21_decimal val1 = {{0xFCFF3334, 0x36256A4C, 0x6404A227, 0x800E0000}};
  s21_decimal result = {{0xA2CC4E37, 0x00011986, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_84) {
  int true_res = 0;
  s21_decimal val1 = {{0xEECA2A0F, 0x47E97262, 0xB2EF52EF, 0x801B0000}};
  s21_decimal result = {{0x00000037, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_85) {
  int true_res = 0;
  s21_decimal val1 = {{0x3B622F1D, 0xFAFFA2AD, 0x74718F4E, 0x00180000}};
  s21_decimal result = {{0x00008CC6, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_86) {
  int true_res = 0;
  s21_decimal val1 = {{0x42B52B77, 0x4F8B3968, 0x9135D384, 0x80190000}};
  s21_decimal result = {{0x0000118E, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_87) {
  int true_res = 0;
  s21_decimal val1 = {{0x12513385, 0x4360751C, 0x34560E77, 0x00030000}};
  s21_decimal result = {{0x1585B694, 0x0800DD4D, 0x000D65E7, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_88) {
  int true_res = 0;
  s21_decimal val1 = {{0x0CC2371F, 0xDE5C01F5, 0x4B00F553, 0x80100000}};
  s21_decimal result = {{0x757C64AD, 0x0000021C, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_89) {
  int true_res = 0;
  s21_decimal val1 = {{0x10443994, 0x4FF8E50A, 0x7D024751, 0x800A0000}};
  s21_decimal result = {{0xECE7543C, 0x35B0DFBD, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_90) {
  int true_res = 0;
  s21_decimal val1 = {{0xE495BEDD, 0x13A137EC, 0xFF9551B7, 0x80090000}};
  s21_decimal result = {{0xF3A3363B, 0x49B8C941, 0x00000004, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_91) {
  int true_res = 0;
  s21_decimal val1 = {{0xCD6B3561, 0x68E763FF, 0xEA374AB9, 0x80020000}};
  s21_decimal result = {{0xAD92FDF9, 0x88BAA247, 0x025797C9, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_92) {
  int true_res = 0;
  s21_decimal val1 = {{0x2347A607, 0xAAD48D9D, 0x6FC7F9C6, 0x80030000}};
  s21_decimal result = {{0xE08C1A89, 0x9529AF3E, 0x001C9DB0, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_93) {
  int true_res = 0;
  s21_decimal val1 = {{0xC865B9F9, 0xD91B9957, 0xC21A3AB5, 0x80130000}};
  s21_decimal result = {{0x660E4B5B, 0x00000001, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_94) {
  int true_res = 0;
  s21_decimal val1 = {{0xD99E54DD, 0x4EC27481, 0x25744E0C, 0x00000000}};
  s21_decimal result = {{0xD99E54DD, 0x4EC27481, 0x25744E0C, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_95) {
  int true_res = 0;
  s21_decimal val1 = {{0xB0628FD4, 0x16FECEA7, 0x4CEF753F, 0x00160000}};
  s21_decimal result = {{0x002454EB, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_96) {
  int true_res = 0;
  s21_decimal val1 = {{0xE53B1FB2, 0xD3B9C664, 0x2A47F2AD, 0x00180000}};
  s21_decimal result = {{0x0000331D, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_97) {
  int true_res = 0;
  s21_decimal val1 = {{0x98668A94, 0x675DF0A8, 0x18329B20, 0x80070000}};
  s21_decimal result = {{0x208E591D, 0x98D3009A, 0x00000028, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_98) {
  int true_res = 0;
  s21_decimal val1 = {{0xD273E65B, 0xB4CF4F0A, 0x52F454DD, 0x80000000}};
  s21_decimal result = {{0xD273E65B, 0xB4CF4F0A, 0x52F454DD, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_99) {
  int true_res = 0;
  s21_decimal val1 = {{0x799390E5, 0xF6975FC2, 0xE3AC23D2, 0x80170000}};
  s21_decimal result = {{0x000AC064, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_round_100) {
  int true_res = 0;
  s21_decimal val1 = {{0xA6002D0E, 0xA7532A63, 0x4C898D0B, 0x80090000}};
  s21_decimal result = {{0xE21EF8C6, 0x48B9A91B, 0x00000001, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_round(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

Suite *test_round(void) {
  Suite *s = suite_create("\033[45m-=S21_ROUND=-\033[0m");
  TCase *tc = tcase_create("s21_round_tc");

  tcase_add_test(tc, s21_round_1);
  tcase_add_test(tc, s21_round_2);
  tcase_add_test(tc, s21_round_3);
  tcase_add_test(tc, s21_round_4);
  tcase_add_test(tc, s21_round_5);
  tcase_add_test(tc, s21_round_6);
  tcase_add_test(tc, s21_round_7);
  tcase_add_test(tc, s21_round_8);
  tcase_add_test(tc, s21_round_9);
  tcase_add_test(tc, s21_round_10);
  tcase_add_test(tc, s21_round_11);
  tcase_add_test(tc, s21_round_12);
  tcase_add_test(tc, s21_round_13);
  tcase_add_test(tc, s21_round_14);
  tcase_add_test(tc, s21_round_15);
  tcase_add_test(tc, s21_round_16);
  tcase_add_test(tc, s21_round_17);
  tcase_add_test(tc, s21_round_18);
  tcase_add_test(tc, s21_round_19);
  tcase_add_test(tc, s21_round_20);
  tcase_add_test(tc, s21_round_21);
  tcase_add_test(tc, s21_round_22);
  tcase_add_test(tc, s21_round_23);
  tcase_add_test(tc, s21_round_24);
  tcase_add_test(tc, s21_round_25);
  tcase_add_test(tc, s21_round_26);
  tcase_add_test(tc, s21_round_27);
  tcase_add_test(tc, s21_round_28);
  tcase_add_test(tc, s21_round_29);
  tcase_add_test(tc, s21_round_30);
  tcase_add_test(tc, s21_round_31);
  tcase_add_test(tc, s21_round_32);
  tcase_add_test(tc, s21_round_33);
  tcase_add_test(tc, s21_round_34);
  tcase_add_test(tc, s21_round_35);
  tcase_add_test(tc, s21_round_36);
  tcase_add_test(tc, s21_round_37);
  tcase_add_test(tc, s21_round_38);
  tcase_add_test(tc, s21_round_39);
  tcase_add_test(tc, s21_round_40);
  tcase_add_test(tc, s21_round_41);
  tcase_add_test(tc, s21_round_42);
  tcase_add_test(tc, s21_round_43);
  tcase_add_test(tc, s21_round_44);
  tcase_add_test(tc, s21_round_45);
  tcase_add_test(tc, s21_round_46);
  tcase_add_test(tc, s21_round_47);
  tcase_add_test(tc, s21_round_48);
  tcase_add_test(tc, s21_round_49);
  tcase_add_test(tc, s21_round_50);
  tcase_add_test(tc, s21_round_51);
  tcase_add_test(tc, s21_round_52);
  tcase_add_test(tc, s21_round_53);
  tcase_add_test(tc, s21_round_54);
  tcase_add_test(tc, s21_round_55);
  tcase_add_test(tc, s21_round_56);
  tcase_add_test(tc, s21_round_57);
  tcase_add_test(tc, s21_round_58);
  tcase_add_test(tc, s21_round_59);
  tcase_add_test(tc, s21_round_60);
  tcase_add_test(tc, s21_round_61);
  tcase_add_test(tc, s21_round_62);
  tcase_add_test(tc, s21_round_63);
  tcase_add_test(tc, s21_round_64);
  tcase_add_test(tc, s21_round_65);
  tcase_add_test(tc, s21_round_66);
  tcase_add_test(tc, s21_round_67);
  tcase_add_test(tc, s21_round_68);
  tcase_add_test(tc, s21_round_69);
  tcase_add_test(tc, s21_round_70);
  tcase_add_test(tc, s21_round_71);
  tcase_add_test(tc, s21_round_72);
  tcase_add_test(tc, s21_round_73);
  tcase_add_test(tc, s21_round_74);
  tcase_add_test(tc, s21_round_75);
  tcase_add_test(tc, s21_round_76);
  tcase_add_test(tc, s21_round_77);
  tcase_add_test(tc, s21_round_78);
  tcase_add_test(tc, s21_round_79);
  tcase_add_test(tc, s21_round_80);
  tcase_add_test(tc, s21_round_81);
  tcase_add_test(tc, s21_round_82);
  tcase_add_test(tc, s21_round_83);
  tcase_add_test(tc, s21_round_84);
  tcase_add_test(tc, s21_round_85);
  tcase_add_test(tc, s21_round_86);
  tcase_add_test(tc, s21_round_87);
  tcase_add_test(tc, s21_round_88);
  tcase_add_test(tc, s21_round_89);
  tcase_add_test(tc, s21_round_90);
  tcase_add_test(tc, s21_round_91);
  tcase_add_test(tc, s21_round_92);
  tcase_add_test(tc, s21_round_93);
  tcase_add_test(tc, s21_round_94);
  tcase_add_test(tc, s21_round_95);
  tcase_add_test(tc, s21_round_96);
  tcase_add_test(tc, s21_round_97);
  tcase_add_test(tc, s21_round_98);
  tcase_add_test(tc, s21_round_99);
  tcase_add_test(tc, s21_round_100);

  suite_add_tcase(s, tc);
  return s;
}