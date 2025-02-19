#include "test_me.h"

START_TEST(s21_div_1) {
  int true_res = 3;
  s21_decimal val1 = {{0x78D7B7B9, 0xF444012B, 0xD96CD8B4, 0x80060000}};
  s21_decimal val2 = {{0, 0, 0, 0x80060000}};
  s21_decimal output;
  int s21_res = s21_div(val1, val2, &output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_2) {
  int true_res = 3;
  s21_decimal val1 = {{0x78D7B7B9, 0xF444012B, 0xD96CD8B4, 0x80060000}};
  s21_decimal val2 = {{0, 0, 0, 0}};
  s21_decimal output;
  int s21_res = s21_div(val1, val2, &output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_3) {
  int true_res = 0;
  s21_decimal val1 = {{0x00000002, 0, 0, 0}};
  s21_decimal val2 = {{0x00000002, 0, 0, 0}};
  s21_decimal output = {{0x00000002, 123, 44, 1231234}};
  s21_decimal result = {{0x00000001, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
// Overflow positive
START_TEST(s21_div_4) {
  int true_res = 1;
  s21_decimal val1 = {{42123000, 0, 775, 0x00000000}};
  s21_decimal val2 = {{0x0, 0x0, 1, 0x001B0000}};
  s21_decimal output = {0};
  int s21_res = s21_div(val1, val2, &output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
// Overflow positive
START_TEST(s21_div_5) {
  int true_res = 1;
  s21_decimal val1 = {{42123000, 0, 775, 0x00000000}};
  s21_decimal val2 = {{0x0, 0x0, 1, 0x001B0000}};
  s21_decimal output;
  int s21_res = s21_div(val1, val2, &output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
// Overflow negative
START_TEST(s21_div_6) {
  int true_res = 2;
  s21_decimal val1 = {{42123000, 0, 775, 0x80000000}};
  s21_decimal val2 = {{0x0, 0x0, 1, 0x001B0000}};
  s21_decimal output;
  int s21_res = s21_div(val1, val2, &output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_7) {
  int true_res = 0;
  s21_decimal val1 = {{0xE13498A8, 0x1EFB2EA6, 0x40FFBE88, 0x80020000}};
  s21_decimal val2 = {{0x453D7F2A, 0xDC84E6BE, 0x91C9AB62, 0x001C0000}};
  s21_decimal output;
  s21_decimal result = {{0x1AAB2DB8, 0xF208B0DC, 0x900F93B9, 0x80030000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_8) {
  int true_res = 0;
  s21_decimal val1 = {{0x07B3315D, 0xCB00648F, 0x581C3EF5, 0x80040000}};
  s21_decimal val2 = {{0x79AFE448, 0x7CE13DFA, 0x653B308C, 0x800D0000}};
  s21_decimal output;
  s21_decimal result = {{0x12DE8D36, 0x2B3A6E2E, 0x1C1FAC4F, 0x00130000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_9) {
  int true_res = 0;
  s21_decimal val1 = {{0x68127BFD, 0xD93954BF, 0x33307E55, 0x80190000}};
  s21_decimal val2 = {{0x780CDEBA, 0xAA4F610E, 0x98EB4021, 0x80110000}};
  s21_decimal output;
  s21_decimal result = {{102138313, 0xD08EA634, 0x00000001, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_10) {
  int true_res = 0;
  s21_decimal val1 = {{0xC11A7B25, 0xB916F64D, 0x7CF4AC12, 0x001B0000}};
  s21_decimal val2 = {{0x0FA2C015, 0x63AD1176, 0xF29D16F8, 0x80000000}};
  s21_decimal output;
  s21_decimal result = {{0x00000005, 0x00000000, 0x00000000, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_11) {
  int true_res = 0;
  s21_decimal val1 = {{0x07B3315D, 0xCB00648F, 0x581C3EF5, 0x80040000}};
  s21_decimal val2 = {{0x79AFE448, 0x7CE13DFA, 0x653B308C, 0x800D0000}};
  s21_decimal output;
  s21_decimal result = {{0x12DE8D36, 0x2B3A6E2E, 0x1C1FAC4F, 0x00130000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_12) {
  int true_res = 0;
  s21_decimal val1 = {{0x6A122F98, 0x08AB8B0E, 0x5505ACE0, 0x80190000}};
  s21_decimal val2 = {{0x740D98A7, 0x943D72F5, 0xC638D50E, 0x800A0000}};
  s21_decimal output;
  s21_decimal result = {{-1432552590, 0x000003E6, 0x00000000, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_13) {
  int true_res = 0;
  s21_decimal val1 = {{0x5C43D001, 0x91D9F1BD, 0xC4093962, 0x00100000}};
  s21_decimal val2 = {{0x90924AF4, 0x1E2B829D, 0x537BEBC0, 0x00190000}};
  s21_decimal output;
  s21_decimal result = {{0xDA019429, 0x4218FA91, 0x4BDFBB29, 0x00130000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_14) {
  int true_res = 0;
  s21_decimal val1 = {{0x1ADE7B08, 0xD4EE7791, 0x2A0B22EF, 0x80040000}};
  s21_decimal val2 = {{0x1232D868, 0x318F19A4, 0xF2F5F909, 0x800F0000}};
  s21_decimal output;
  s21_decimal result = {{0x778260FF, 0x05A65EDB, 0x37EA1076, 0x00120000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_15) {
  int true_res = 0;
  s21_decimal val1 = {{0x02E2D642, 0x7A39D2BC, 0xBC6BCCDE, 0x001A0000}};
  s21_decimal val2 = {{0xBBD639BB, 0xE5486DF8, 0x37E21EED, 0x001A0000}};
  s21_decimal output;
  s21_decimal result = {{0xA9A7C387, 0x356E3AA3, 0x6CF1F6AB, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_16) {
  int true_res = 0;
  s21_decimal val1 = {{0x1E0981BD, 0x21CCA127, 0x844298AF, 0x00080000}};
  s21_decimal val2 = {{0x3DECAB78, 0x0A9E58D8, 0x0CAF5B8A, 0x80040000}};
  s21_decimal output;
  s21_decimal result = {{0x58A42142, 0x1370DF4B, 0x00089FE6, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_17) {
  int true_res = 0;
  s21_decimal val1 = {{0x10B26715, 0xD2715ED8, 0xB84EBE74, 0x00090000}};
  s21_decimal val2 = {{0xCB4E8865, 0x96A76C7A, 0xB31B24E4, 0x001B0000}};
  s21_decimal output;
  s21_decimal result = {{0xDCFEA2AD, 0xC0522A49, 0x214008C6, 0x000A0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_18) {
  int true_res = 0;
  s21_decimal val1 = {{0xDF11ABCA, 0x010EEA3F, 0x0CE4EA2A, 0x800F0000}};
  s21_decimal val2 = {{0x0C3FFF6F, 0x6DB35541, 0xC4375D03, 0x800F0000}};
  s21_decimal output;
  s21_decimal result = {{-12881169, 0x57D4CBF6, 0x021F9344, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_19) {
  int true_res = 0;
  s21_decimal val1 = {{0x67D365CC, 0x328B01A1, 0xA221A284, 0x80020000}};
  s21_decimal val2 = {{0xEDEF3CDE, 0x5D711C6B, 0xBB988E05, 0x800F0000}};
  s21_decimal output;
  s21_decimal result = {{0x2FE00CC6, 0xE86DE780, 0x1BECFAC9, 0x000F0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_20) {
  int true_res = 0;
  s21_decimal val1 = {{0x5670F105, 0xC1AC7B4A, 0xC421E0CA, 0x00000000}};
  s21_decimal val2 = {{0x8170733D, 0x1FB0DF12, 0x11A6FB3F, 0x000C0000}};
  s21_decimal output;
  s21_decimal result = {{0xBBD126C4, 0xD145ED93, 0x23E6B52F, 0x000F0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_21) {
  int true_res = 0;
  s21_decimal val1 = {{0x99F65E4A, 0x0373413A, 0xF5E61A02, 0x000F0000}};
  s21_decimal val2 = {{0x66D3C92B, 0x22264AAF, 0x7AE51BD7, 0x801C0000}};
  s21_decimal output;
  s21_decimal result = {{0xC26D1ED9, 0x9177B2C8, 0x40A6F18E, 0x800F0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_22) {
  int true_res = 0;
  s21_decimal val1 = {{0xC5947D56, 0x85C679ED, 0x7FC00577, 0x00010000}};
  s21_decimal val2 = {{0x0E6BD8DD, 0xA8C4FD1A, 0x0897A8EC, 0x00040000}};
  s21_decimal output;
  s21_decimal result = {{0x69777603, 0xC1BF44FB, 0x300A5343, 0x00180000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_23) {
  int true_res = 0;
  s21_decimal val1 = {{0x5DF273D0, 0x31317D3C, 0xBC91258C, 0x800D0000}};
  s21_decimal val2 = {{0x61804D45, 0xA5D18030, 0x14B543DE, 0x80010000}};
  s21_decimal output;
  s21_decimal result = {{0x387118AC, 0x0143824A, 0x00000000, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_24) {
  int true_res = 0;
  s21_decimal val1 = {{0x0CC43559, 0x3C60AB86, 0x92F34FBB, 0x80190000}};
  s21_decimal val2 = {{0x7D7E6FE2, 0x21479DB1, 0xB6C90373, 0x80010000}};
  s21_decimal output;
  s21_decimal result = {{8040, 0x00000000, 0x00000000, 1835008}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_25) {
  int true_res = 0;
  s21_decimal val1 = {{0xF5578306, 0xC92E9A5F, 0x7FE2E294, 0x80140000}};
  s21_decimal val2 = {{0x48A24F9A, 0xE5B88DF0, 0x4CAD9550, 0x80110000}};
  s21_decimal output;
  s21_decimal result = {{0x47097234, 0x965CA412, 0x000DCBC6, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_26) {
  int true_res = 0;
  s21_decimal val1 = {{0x0CB7BFD5, 0x838EEA15, 0x5AE0749E, 0x80010000}};
  s21_decimal val2 = {{0xD96D129C, 0x9E182058, 0xAFCA0400, 0x00060000}};
  s21_decimal output;
  s21_decimal result = {{0x68202D5F, 0xF49F86A1, 0xA70A524A, 0x80180000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_27) {
  int true_res = 0;
  s21_decimal val1 = {{0x6CB1DCA1, 0x6C6AA4C1, 0x74AC2CE8, 0x00070000}};
  s21_decimal val2 = {{0x33CAD34D, 0x70CCE638, 0x4ADFFF02, 0x000B0000}};
  s21_decimal output;
  s21_decimal result = {{0x72DD8790, 0x6AB6E4CE, 0x3259638E, 0x00180000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_28) {
  int true_res = 0;
  s21_decimal val1 = {{0xC638D69A, 0x0EFF875C, 0xE79C2B02, 0x80090000}};
  s21_decimal val2 = {{0x1AAEB3FE, 0xBDE8F473, 0x6B5B9D27, 0x00100000}};
  s21_decimal output;
  s21_decimal result = {{0x8CCF7293, 0x931DF6E0, 0x45B54CA5, 0x80150000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_29) {
  int true_res = 0;
  s21_decimal val1 = {{0x4EC99C71, 0xF82AD157, 0x6456C15D, 0x000A0000}};
  s21_decimal val2 = {{0x67EFB8D8, 0x01578F35, 0x32CC19F1, 0x80080000}};
  s21_decimal output;
  s21_decimal result = {{0x18A12D9A, 0x32513E02, 0x00A36434, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_30) {
  int true_res = 0;
  s21_decimal val1 = {{0x4EF080FB, 0x13DCE4F6, 0xF4DEA742, 0x00190000}};
  s21_decimal val2 = {{0x318CA2C2, 0xAD15B865, 0x88381776, 0x80030000}};
  s21_decimal output;
  s21_decimal result = {{0x001B6DF1, 0x00000000, 0x00000000, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_31) {
  int true_res = 0;
  s21_decimal val1 = {{0xE324F83D, 0xC54629D3, 0xBD1A82DC, 0x00120000}};
  s21_decimal val2 = {{0x14D1A76D, 0x867060EC, 0x77B78925, 0x80070000}};
  s21_decimal output;
  s21_decimal result = {{0x04315903, 0x02312EC9, 0x00000000, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_32) {
  int true_res = 0;
  s21_decimal val1 = {{0xC95ACBA8, 0x97382D24, 0xA1B7D294, 0x80030000}};
  s21_decimal val2 = {{0xD0AA4899, 0x44E21B63, 0x97686E96, 0x800A0000}};
  s21_decimal output;
  s21_decimal result = {{0x642FBD7E, 0x7F0DCEDE, 0x22831315, 0x00150000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_33) {
  int true_res = 0;
  s21_decimal val1 = {{0xD849978C, 0x3FDDAC7F, 0x68EC3361, 0x80050000}};
  s21_decimal val2 = {{0xA8F4CE2D, 0x2A41D077, 0xCB497253, 0x000C0000}};
  s21_decimal output;
  s21_decimal result = {{0xD8187340, 0xF7327612, 0xA6C559C3, 0x80160000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_34) {
  int true_res = 0;
  s21_decimal val1 = {{0xFBB9B8FB, 0x0F7CADBC, 0xE3185591, 0x800D0000}};
  s21_decimal val2 = {{0xDC234B85, 0x8AD260A5, 0x8F78D9ED, 0x80190000}};
  s21_decimal output;
  s21_decimal result = {{0x704702CA, 0xF8395CBC, 0x33250B66, 0x00100000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_35) {
  int true_res = 0;
  s21_decimal val1 = {{0x1A0A36FC, 0x8F142138, 0x41D1E32A, 0x801A0000}};
  s21_decimal val2 = {{0x22B3FA7E, 0xC10BB865, 0xFB638F47, 0x000E0000}};
  s21_decimal output;
  s21_decimal result = {{-1813408578, 0x00094D48, 0x00000000, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_36) {
  int true_res = 0;
  s21_decimal val1 = {{0xA7CFF44F, 0x826B9CD5, 0x2847332C, 0x801A0000}};
  s21_decimal val2 = {{0x3D093E33, 0xDBC2E6EC, 0x6CE89BB7, 0x800D0000}};
  s21_decimal output;
  s21_decimal result = {{-1230664528, 0x0001505C, 0x00000000, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_37) {
  int true_res = 0;
  s21_decimal val1 = {{0x867009C5, 0x1FF5A3DA, 0xA0CAC274, 0x00170000}};
  s21_decimal val2 = {{0xAE4A4A38, 0x4DF2EB6F, 0xFD8F0B06, 0x80060000}};
  s21_decimal output;
  s21_decimal result = {{0xC3C6832C, 0x0000000E, 0x00000000, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_38) {
  int true_res = 0;
  s21_decimal val1 = {{0x4185EFBE, 0x67C5A8EC, 0x21040911, 0x00050000}};
  s21_decimal val2 = {{0x16F9D85E, 0xA9C5CEC6, 0x6424D41C, 0x001B0000}};
  s21_decimal output;
  s21_decimal result = {{0x68A25CCD, 0xF273CA79, 0x6A86C467, 0x00070000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_39) {
  int true_res = 0;
  s21_decimal val1 = {{0x90420AC9, 0x1A45C8FA, 0xAE8521E6, 0x80070000}};
  s21_decimal val2 = {{0x4A4A15B7, 0x842DFD51, 0x396239FC, 0x80010000}};
  s21_decimal output;
  s21_decimal result = {{-983148364, -1362878316, 1648, 1835008}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_40) {
  int true_res = 0;
  s21_decimal val1 = {{0xA6EC7196, 0x74EFC457, 0x65230306, 0x001A0000}};
  s21_decimal val2 = {{0x707BAB68, 0xE379F943, 0x69BD6547, 0x001B0000}};
  s21_decimal output;
  s21_decimal result = {{0x3C6BA142, 0x2D6D6734, 0x1EE7B7DC, 0x001B0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_41) {
  int true_res = 0;
  s21_decimal val1 = {{0xA7523611, 0x4F31C460, 0xB89487AE, 0x000E0000}};
  s21_decimal val2 = {{0x0D64305E, 0x389BE53D, 0x8B201202, 0x00140000}};
  s21_decimal output;
  s21_decimal result = {{0xA23914D0, 0x66AC95D9, 0x2ADE5D85, 0x00160000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_42) {
  int true_res = 0;
  s21_decimal val1 = {{0x846AA7F7, 0xFF852B45, 0xCF216822, 0x00180000}};
  s21_decimal val2 = {{0x1A3CC703, 0x3A2BC61B, 0xFD2EE6D6, 0x000D0000}};
  s21_decimal output;
  s21_decimal result = {{0x8C5099E6, 0x0122A63B, 0x00000000, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_43) {
  int true_res = 0;
  s21_decimal val1 = {{0x224B790B, 0x9C361F52, 0x5F659C62, 0x80050000}};
  s21_decimal val2 = {{0xB1D59F56, 0x48B1D831, 0x169A2905, 0x00120000}};
  s21_decimal output;
  s21_decimal result = {{351007460, 0x5BB92B2F, 0x8860C2DC, 0x800F0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_44) {
  int true_res = 0;
  s21_decimal val1 = {{0x26C884CF, 0xB1F9D8C6, 0xA83CB679, 0x801B0000}};
  s21_decimal val2 = {{0xFFA0F1D5, 0xE165E072, 0x515F7778, 0x80110000}};
  s21_decimal output;
  s21_decimal result = {{0x6370B71A, 0x1CB12D40, 0x00000000, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_45) {
  int true_res = 0;
  s21_decimal val1 = {{0xA8E98DB0, 0x666F6F23, 0x11494C52, 0x000A0000}};
  s21_decimal val2 = {{0xADFC7B5F, 0x4AC58296, 0xBEA4C6F5, 0x80040000}};
  s21_decimal output;
  s21_decimal result = {{-1029871721, 0x27788122, 0x00000031, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_46) {
  int true_res = 0;
  s21_decimal val1 = {{0xB721E618, 0x790EA5C0, 0x21100945, 0x80050000}};
  s21_decimal val2 = {{0x8EDD29F8, 0xC588DB08, 0x18F311D6, 0x80000000}};
  s21_decimal output;
  s21_decimal result = {{0xE059BF87, 0xD4DBFF3F, 0x00001C0F, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_47) {
  int true_res = 0;
  s21_decimal val1 = {{0xB0648BE5, 0xE8C08CAA, 0x0885453A, 0x80160000}};
  s21_decimal val2 = {{0x421AA66F, 0x7C2A08AC, 0x4E9D0351, 0x00130000}};
  s21_decimal output;
  s21_decimal result = {{-1533270018, 0x30706B99, 0x0000E584, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_48) {
  int true_res = 0;
  s21_decimal val1 = {{0xC3B3F458, 0x6E4ED30D, 0xACCE4288, 0x00000000}};
  s21_decimal val2 = {{0x8BC833C4, 0xD24E0876, 0x5D32CAA1, 0x80020000}};
  s21_decimal output;
  s21_decimal result = {{0xA455B50C, 0x0CFBE2FD, 0x3BE95617, 0x801A0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_49) {
  int true_res = 0;
  s21_decimal val1 = {{0x1A223AB7, 0xEAAA2789, 0x0A2CD444, 0x000E0000}};
  s21_decimal val2 = {{0xC57C92E7, 0x5FFCBEBD, 0x943ECE41, 0x00110000}};
  s21_decimal output;
  s21_decimal result = {{0x98403071, 0x5E80F59A, 0xDDC73093, 0x001B0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_50) {
  int true_res = 0;
  s21_decimal val1 = {{0xEAE3B874, 0x8D8BE02F, 0x2DDAD9A8, 0x800B0000}};
  s21_decimal val2 = {{0xE50D44D2, 0x04BE43FC, 0xA888AD8A, 0x801C0000}};
  s21_decimal output;
  s21_decimal result = {{0xF13A1DF5, 0xF8FD967E, 0x57EA04D0, 0x000C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_51) {
  int true_res = 0;
  s21_decimal val1 = {{0xA6C97F41, 0xA9F6847E, 0xF55EDAA1, 0x00160000}};
  s21_decimal val2 = {{0x935B0060, 0x24B35E37, 0x719A04E2, 0x00010000}};
  s21_decimal output;
  s21_decimal result = {{0x014993E7, 0x00000000, 0x00000000, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_52) {
  int true_res = 0;
  s21_decimal val1 = {{0x533A8C2F, 0x3A2B0B75, 0x4A312680, 0x00000000}};
  s21_decimal val2 = {{0xAFA25702, 0xBB3FF843, 0x952D17C3, 0x00190000}};
  s21_decimal output;
  s21_decimal result = {{0xF22B2182, 0x754F0125, 0xA0B367D2, 0x00040000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_53) {
  int true_res = 0;
  s21_decimal val1 = {{0x8E27B216, 0x525E66EB, 0x9C3C39CB, 0x000E0000}};
  s21_decimal val2 = {{0x964E8D80, 0x3F7A43A9, 0xBB1E6D33, 0x80130000}};
  s21_decimal output;
  s21_decimal result = {{0x7FF5BE66, 0xA76FE33F, 0x1AFA8F95, 0x80170000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_54) {
  int true_res = 0;
  s21_decimal val1 = {{0x4BFDED66, 0xF7C43D0A, 0x52792411, 0x800D0000}};
  s21_decimal val2 = {{0x865F4502, 0xF02DE0C7, 0x95C99A9A, 0x00040000}};
  s21_decimal output;
  s21_decimal result = {{-2033299046, 0x4C694A03, 0x00000000, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_55) {
  int true_res = 0;
  s21_decimal val1 = {{0xBE412068, 0xB9A4C9D7, 0xBDC3F7F4, 0x000F0000}};
  s21_decimal val2 = {{0x8A04937D, 0x0E0EF2FF, 0x6ECF1C23, 0x80120000}};
  s21_decimal output;
  s21_decimal result = {{0xCE26BCC8, 0xF2EFA09F, 0x3755D850, 0x80190000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_56) {
  int true_res = 0;
  s21_decimal val1 = {{0x8EA89BE0, 0x6DEF10F5, 0x6FFFC727, 0x800E0000}};
  s21_decimal val2 = {{0xB572A5BF, 0x93884F3A, 0xCA4DD740, 0x001A0000}};
  s21_decimal output;
  s21_decimal result = {{0xEB6AC46F, 0xB4DFD993, 0xB2E23100, 0x80110000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_57) {
  int true_res = 0;
  s21_decimal val1 = {{0xDF27C6C3, 0x3D961649, 0xFDB92EC0, 0x001C0000}};
  s21_decimal val2 = {{0x15CF92D2, 0xFB0A3964, 0x246DA105, 0x00020000}};
  s21_decimal output;
  s21_decimal result = {{0x000002B8, 0x00000000, 0x00000000, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_58) {
  int true_res = 0;
  s21_decimal val1 = {{0xE0741318, 0x7AD9DF7D, 0xFAAAAD50, 0x80110000}};
  s21_decimal val2 = {{0xF57BBB87, 0xD6884024, 0x36D20509, 0x801A0000}};
  s21_decimal output;
  s21_decimal result = {{0xE182EC70, 0x0B4E5D98, 0x93BEE7CA, 0x00130000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_59) {
  int true_res = 0;
  s21_decimal val1 = {{0xAC405AE1, 0x07461825, 0xAA8AA804, 0x80170000}};
  s21_decimal val2 = {{0xDF2E2452, 0xC034B66F, 0x03A97C46, 0x801C0000}};
  s21_decimal output;
  s21_decimal result = {{0x26227CFA, 0x0038E122, 0x9679C3C2, 0x00160000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_60) {
  int true_res = 0;
  s21_decimal val1 = {{0xB02D4427, 0x5C221181, 0x2518F24F, 0x00070000}};
  s21_decimal val2 = {{0x084C1272, 0xE9C7B6D4, 0xFAB09D5A, 0x00080000}};
  s21_decimal output;
  s21_decimal result = {{0x64D2B150, 0x5F3B221C, 0x2FD0BC71, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_61) {
  int true_res = 0;
  s21_decimal val1 = {{0x90946BFB, 0x05E7E352, 0x42788230, 0x80050000}};
  s21_decimal val2 = {{0x0D5E52B2, 0xD04663F7, 0xEE628123, 0x001A0000}};
  s21_decimal output;
  s21_decimal result = {{0x55E30C40, 0x723AF14C, 0x5A18F05B, 0x80080000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_62) {
  int true_res = 0;
  s21_decimal val1 = {{0x16BC2EBA, 0xA3B86C55, 0x10A10594, 0x80130000}};
  s21_decimal val2 = {{0x7D5001DB, 0x629FC236, 0xC626D8E8, 0x00150000}};
  s21_decimal output;
  s21_decimal result = {{0x0CF4B06C, 0x1DA4C3F3, 0x1B1DBD77, 0x801B0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_63) {
  int true_res = 0;
  s21_decimal val1 = {{0xB179E3B9, 0x7065F248, 0x2E4F1DC8, 0x00130000}};
  s21_decimal val2 = {{0x1195E9D7, 0xB506022F, 0x74559EBB, 0x80050000}};
  s21_decimal output;
  s21_decimal result = {{1064620568, 0x00002434, 0x00000000, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_64) {
  int true_res = 0;
  s21_decimal val1 = {{0xD224BD14, 0x89035440, 0xFF88D12B, 0x00080000}};
  s21_decimal val2 = {{0x4BFFA853, 0xE6C37B64, 0xBC256C6F, 0x80100000}};
  s21_decimal output;
  s21_decimal result = {{0x611DA91E, 0x1C625AC3, 0x2BE28421, 0x80140000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_65) {
  int true_res = 0;
  s21_decimal val1 = {{0x2AAB0015, 0x4CE551C4, 0x7A36E479, 0x800D0000}};
  s21_decimal val2 = {{0x3198AB82, 0x2FF252AA, 0x5706A5D4, 0x00100000}};
  s21_decimal output;
  s21_decimal result = {{0x002D7A10, 0xEBD31B67, 0x2D6076C5, 0x80190000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_66) {
  int true_res = 0;
  s21_decimal val1 = {{0x84877AE6, 0x4A5D3F65, 0xD1C8586F, 0x00180000}};
  s21_decimal val2 = {{0x8EBCC488, 0xB6B15C3F, 0x0C668467, 0x80050000}};
  s21_decimal output;
  s21_decimal result = {{-262542253, 0x00000003, 0x00000000, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_67) {
  int true_res = 0;
  s21_decimal val1 = {{0xA13DE3B5, 0x2D03D11E, 0xF7C59AA6, 0x00180000}};
  s21_decimal val2 = {{0x858D5FC5, 0x5E43BD1C, 0xD95704EC, 0x00130000}};
  s21_decimal output;
  s21_decimal result = {{-1268159355, 0x0FCCCAAA, 0x00001824, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_68) {
  int true_res = 0;
  s21_decimal val1 = {{0xEAF4D1B1, 0xE73B7E55, 0x7CD4A2D0, 0x80060000}};
  s21_decimal val2 = {{0x77F5677D, 0x487D81E8, 0xE2818DA5, 0x00170000}};
  s21_decimal output;
  s21_decimal result = {{0xE7EE52D2, 0xBC4F6D4D, 0xB2130FB2, 0x800C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_69) {
  int true_res = 0;
  s21_decimal val1 = {{0x4D0DADC2, 0x53C693B8, 0x40462D0E, 0x00050000}};
  s21_decimal val2 = {{0x91782F50, 0x18167CBB, 0xC49EFB4A, 0x00060000}};
  s21_decimal output;
  s21_decimal result = {{-1461947917, 0xD584E122, 0x699FFE25, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_70) {
  int true_res = 0;
  s21_decimal val1 = {{0xBE5D102D, 0x7516C0F3, 0xE63D11A6, 0x801B0000}};
  s21_decimal val2 = {{0x41A90E96, 0x5806BA19, 0x327645B3, 0x80190000}};
  s21_decimal output;
  s21_decimal result = {{282619056, 0x428B9A6A, 0x01796913, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_71) {
  int true_res = 0;
  s21_decimal val1 = {{0x2E457ACA, 0xA02ACC94, 0x3FA06B03, 0x00090000}};
  s21_decimal val2 = {{0x7D3EEB2A, 0xD5BCB697, 0xB4A45136, 0x80100000}};
  s21_decimal output;
  s21_decimal result = {{0x5E182BB9, 0xDDDC6CE5, 0x71CF649F, 0x80160000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_72) {
  int true_res = 0;
  s21_decimal val1 = {{0x85DB3E6D, 0xDFFBA5FB, 0xADD3490A, 0x00080000}};
  s21_decimal val2 = {{0xE7FEE638, 0xF2EA3B12, 0xBB4BDDC2, 0x80100000}};
  s21_decimal output;
  s21_decimal result = {{0x535A4D83, 0xA6FD5FD1, 0x1DFCDE51, 0x80140000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_73) {
  int true_res = 0;
  s21_decimal val1 = {{0xCAFB26AC, 0x5E11B852, 0xAF00CEBB, 0x00190000}};
  s21_decimal val2 = {{0x598C3500, 0xD1093348, 0x88510C92, 0x80140000}};
  s21_decimal output;
  s21_decimal result = {{2064394274, 0x7D70A7B7, 0x00001B2F, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_74) {
  int true_res = 0;
  s21_decimal val1 = {{0xD2123D0C, 0xFD359696, 0x5523FB11, 0x80030000}};
  s21_decimal val2 = {{0x5C4097B5, 0x1BC9D3AA, 0x06039968, 0x00150000}};
  s21_decimal output;
  s21_decimal result = {{0xB37D8FB8, 0x84709FFC, 0x2DBE540F, 0x80090000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_75) {
  int true_res = 0;
  s21_decimal val1 = {{0xF68A5D75, 0x906E0FEE, 0xF6616225, 0x80060000}};
  s21_decimal val2 = {{0xA1726151, 0xA0F9A68C, 0x07DA58CA, 0x800F0000}};
  s21_decimal output;
  s21_decimal result = {{0xCBD809C6, 0x19D78BFC, 0x65604724, 0x00120000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_76) {
  int true_res = 0;
  s21_decimal val1 = {{0x5F64B967, 0x58F86692, 0xC0990F2F, 0x00090000}};
  s21_decimal val2 = {{0xF0A31A37, 0x8E3AC1FF, 0xDF46F9A8, 0x00030000}};
  s21_decimal output;
  s21_decimal result = {{1445377390, 0x9D22AFE2, 0x000001D3, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_77) {
  int true_res = 0;
  s21_decimal val1 = {{0x6A7C03F5, 0x50F833A8, 0x0A6C72E7, 0x80080000}};
  s21_decimal val2 = {{0x422F9521, 0x1E8E100A, 0xDA7330AE, 0x80000000}};
  s21_decimal output;
  s21_decimal result = {{-50426467, 0x42383E07, 0x00000000, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_78) {
  int true_res = 0;
  s21_decimal val1 = {{0x6B20C7FF, 0xAF4096E3, 0x6342DA1F, 0x80150000}};
  s21_decimal val2 = {{0xEEDFB4F9, 0xF69AFF5D, 0xEDF2BBB6, 0x000E0000}};
  s21_decimal output;
  s21_decimal result = {{0x65FF8B6B, 0x9D2E5208, 0x00000016, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_79) {
  int true_res = 0;
  s21_decimal val1 = {{0xCB2833AE, 0x7359E8C8, 0x9A603A11, 0x00160000}};
  s21_decimal val2 = {{0x02C1B7AF, 0xDCBD4F1D, 0x021F8A40, 0x801B0000}};
  s21_decimal output;
  s21_decimal result = {{0x7B336747, 0x42464EF9, 0xEAEF6F30, 0x80160000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_80) {
  int true_res = 0;
  s21_decimal val1 = {{0x96E7AE0A, 0xDF76C8C8, 0x0530B3EB, 0x80100000}};
  s21_decimal val2 = {{0x21D081EE, 0x216F9D7B, 0xA9AC6CDF, 0x000D0000}};
  s21_decimal output;
  s21_decimal result = {{0x12D1A302, 0xA798FDC1, 0x000040C6, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_81) {
  int true_res = 0;
  s21_decimal val1 = {{0x5D3D5A01, 0x228964DB, 0x389927EA, 0x00010000}};
  s21_decimal val2 = {{0xCF176265, 0xE37FB337, 0x5B04AAAA, 0x80030000}};
  s21_decimal output;
  s21_decimal result = {{0xD24E8735, 0x56D50E99, 0xC8ECEF77, 0x801B0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_82) {
  int true_res = 0;
  s21_decimal val1 = {{0x50A30283, 0xD7463BA8, 0x0D2639A2, 0x80060000}};
  s21_decimal val2 = {{0x3397F33F, 0x07855C10, 0x8DACB259, 0x00070000}};
  s21_decimal output;
  s21_decimal result = {{1433369002, 0xD0578343, 0x1DFD5A94, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_83) {
  int true_res = 0;
  s21_decimal val1 = {{0x2686B1EC, 0x731D7107, 0xF6999494, 0x00010000}};
  s21_decimal val2 = {{0x42087B29, 0x31071605, 0x63C677CE, 0x00150000}};
  s21_decimal output;
  s21_decimal result = {{0x1FCD8E3E, 0xD9EE15CA, 0x4FDC3676, 0x00080000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_84) {
  int true_res = 0;
  s21_decimal val1 = {{0xE5A97FB0, 0xBA35542F, 0xC96310D8, 0x00180000}};
  s21_decimal val2 = {{0x9B5B2524, 0xEF934FDF, 0x7AA83D60, 0x800B0000}};
  s21_decimal output;
  s21_decimal result = {{0x4F164342, 0x0005D545, 0x00000000, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_85) {
  int true_res = 0;
  s21_decimal val1 = {{0xE73F8628, 0x1F6CB885, 0x30A85DAA, 0x80060000}};
  s21_decimal val2 = {{0x4C3267BB, 0x2E280BDE, 0x92FA6ACD, 0x80170000}};
  s21_decimal output;
  s21_decimal result = {{0xDA542F84, 0x7BFAF6BD, 0x6AF81F7B, 0x000C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_86) {
  int true_res = 0;
  s21_decimal val1 = {{0x58EA7F17, 0x9275A5D5, 0x16AD3DBC, 0x00000000}};
  s21_decimal val2 = {{0xFEBE6352, 0x9468247A, 0x7C3286B1, 0x80130000}};
  s21_decimal output;
  s21_decimal result = {{0xEFFBFB3D, 0x84D15DD0, 0x3AFF2CCF, 0x800A0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_87) {
  int true_res = 0;
  s21_decimal val1 = {{0xE51A8ACB, 0x2F8755AD, 0x2E4FD758, 0x80100000}};
  s21_decimal val2 = {{0x8C8FBAFB, 0x505FE58C, 0x68702ADB, 0x80060000}};
  s21_decimal output;
  s21_decimal result = {{-1159064076, 0x062768CD, 0x00000000, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_88) {
  int true_res = 0;
  s21_decimal val1 = {{0xBE8BCB57, 0x9F0ECA37, 0x1124EE2A, 0x001A0000}};
  s21_decimal val2 = {{0xC8B1EDB3, 0xF51B8AF1, 0x686C26C2, 0x00160000}};
  s21_decimal output;
  s21_decimal result = {{382234019, 1324342035, 8900, 1835008}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_89) {
  int true_res = 0;
  s21_decimal val1 = {{0x387A4FD8, 0xF4995E39, 0x00B2E9F9, 0x800D0000}};
  s21_decimal val2 = {{0x5C185341, 0x956A156C, 0x1A381F18, 0x00180000}};
  s21_decimal output;
  s21_decimal result = {{0x48F0AE7D, 0xE0B398E0, 0x5620CAA6, 0x80130000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_90) {
  int true_res = 0;
  s21_decimal val1 = {{0x03A02977, 0x99666D0A, 0x29DFA454, 0x00030000}};
  s21_decimal val2 = {{0x8B4AB2CE, 0x29AD4211, 0xEEBFE64D, 0x80100000}};
  s21_decimal output;
  s21_decimal result = {{0x17B9D621, 0x94997CFE, 0x38ABAE4B, 0x80100000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_91) {
  int true_res = 0;
  s21_decimal val1 = {{0x5CAD82FC, 0xDE5C99F0, 0x8A1F11D4, 0x000B0000}};
  s21_decimal val2 = {{0x022C6075, 0x9515414B, 0x76F3DFFD, 0x800B0000}};
  s21_decimal output;
  s21_decimal result = {{2089596240, 0xC86C41DD, 0x2584C613, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_92) {
  int true_res = 0;
  s21_decimal val1 = {{0x67FFECF9, 0x53269C59, 0xFDCA8189, 0x000B0000}};
  s21_decimal val2 = {{0xF2712BB5, 0xB4DD7272, 0xD40F1F04, 0x800B0000}};
  s21_decimal output;
  s21_decimal result = {{0x220BFEDB, 0x787CAF8A, 0x26ABA612, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_93) {
  int true_res = 0;
  s21_decimal val1 = {{0x593763B1, 0x04A79282, 0xD381D69D, 0x000F0000}};
  s21_decimal val2 = {{0xDED94379, 0x804E39BE, 0xF3CF015F, 0x001A0000}};
  s21_decimal output;
  s21_decimal result = {{0x16D02F27, 0x9F016B20, 0x1C07E690, 0x00110000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_94) {
  int true_res = 0;
  s21_decimal val1 = {{0x507071BF, 0x26D1AD0D, 0x9374F366, 0x000A0000}};
  s21_decimal val2 = {{0x63B79780, 0xE644DA70, 0xE13BD6AD, 0x00020000}};
  s21_decimal output;
  s21_decimal result = {{0x5B6BDCFA, 0x8C8E56AB, 0x00000003, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_95) {
  int true_res = 0;
  s21_decimal val1 = {{0x93B094D3, 0xFE4D1916, 0x618AEABB, 0x80160000}};
  s21_decimal val2 = {{0x9F2EB63C, 0x504BA44B, 0x55E1D14E, 0x00090000}};
  s21_decimal output;
  s21_decimal result = {{0xF57E966A, 0x000408FA, 0x00000000, 0x801C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_96) {
  int true_res = 0;
  s21_decimal val1 = {{0xCA141372, 0xFD62A40F, 0x11E844F3, 0x80110000}};
  s21_decimal val2 = {{0x7876FE25, 0xE9649B3B, 0x48836FC0, 0x00160000}};
  s21_decimal output;
  s21_decimal result = {{0x9B464DDB, 0x323F4825, 0x4FCB5A64, 0x80180000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_97) {
  int true_res = 0;
  s21_decimal val1 = {{0x2BD6B789, 0x6C2F5321, 0x47776320, 0x800D0000}};
  s21_decimal val2 = {{0xBF881E61, 0xDA7B9865, 0xD0F881A0, 0x00130000}};
  s21_decimal output;
  s21_decimal result = {{0xEA202C47, 0x3BE4303C, 0x6E80EE41, 0x80170000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_98) {
  int true_res = 0;
  s21_decimal val1 = {{0xA2FF80F4, 0x942E358A, 0x1F3841A4, 0x00040000}};
  s21_decimal val2 = {{0x7D90ADB0, 0x6E7198D3, 0x3BEE9473, 0x00140000}};
  s21_decimal output;
  s21_decimal result = {{0xCE64F696, 0x8FE98457, 0xA8517DA9, 0x000D0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_99) {
  int true_res = 0;
  s21_decimal val1 = {{0x7954B258, 0xE95CC737, 0xFD5519C4, 0x001A0000}};
  s21_decimal val2 = {{0xFC37F20E, 0x21AD3BB7, 0x42294084, 0x000D0000}};
  s21_decimal output;
  s21_decimal result = {{0x853503BB, 0x000D9A79, 0x00000000, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_100) {
  int true_res = 0;
  s21_decimal val1 = {{0x6D8E73F2, 0xF1BBC8E5, 0xE37662E8, 0x00070000}};
  s21_decimal val2 = {{0x0F51A1C9, 0x56A5D5E4, 0x1C6E8598, 0x00130000}};
  s21_decimal output;
  s21_decimal result = {{0x3FA583B1, 0x4DE6AE20, 0x19D9B23C, 0x000F0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_101) {
  int true_res = 0;
  s21_decimal val1 = {{0x0CE5D73F, 0x2480850B, 0x290404E5, 0x80000000}};
  s21_decimal val2 = {{0xB462DE94, 0x453EA7BC, 0xC9DDB56D, 0x80020000}};
  s21_decimal output;
  s21_decimal result = {{0x31451E89, 0x001AF745, 0x41A6E227, 0x001B0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_102) {
  int true_res = 0;
  s21_decimal val1 = {{0x9F5F1F2B, 0x85D25C35, 0xCCDA93C9, 0x00050000}};
  s21_decimal val2 = {{0xEB072A64, 0x9FB4643A, 0x80EAB254, 0x00030000}};
  s21_decimal output;
  s21_decimal result = {{0x0DA7C8F2, 0x8C478D37, 0x00837136, 0x001C0000}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_div_103) {
  int true_res = 0;
  s21_decimal val1 = {{135, 0, 0, 0x001C0000}};
  s21_decimal val2 = {{10, 0, 0, 0}};
  s21_decimal output;
  s21_decimal result = {{14, 0, 0, 1835008}};
  int s21_res = s21_div(val1, val2, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_104) {
  int true_res = 1;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
  s21_decimal val2 = {{1, 0, 0, 0x001C0000}};
  s21_decimal output;
  int s21_res = s21_div(val1, val2, &output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_105) {
  int true_res = 1;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
  s21_decimal val2 = {{1, 0, 0, 0x000C0000}};
  s21_decimal output;
  int s21_res = s21_div(val1, val2, &output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_106) {
  int true_res = 1;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
  s21_decimal val2 = {{1, 0, 0, 0x000C0000}};
  s21_decimal output;
  int s21_res = s21_div(val1, val2, &output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_107) {
  int true_res = 1;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
  s21_decimal val2 = {{0, 1, 0, 0x000C0000}};
  s21_decimal output;
  int s21_res = s21_div(val1, val2, &output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST
START_TEST(s21_div_108) {
  int true_res = 0;
  s21_decimal val1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
  s21_decimal val2 = {{0, 0, 1, 0x000C0000}};
  s21_decimal output;
  int s21_res = s21_div(val1, val2, &output);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

Suite *test_div(void) {
  Suite *s = suite_create("\033[45m-=S21_DIV=-\033[0m");
  TCase *tc = tcase_create("s21_div_tc");

  tcase_add_test(tc, s21_div_1);
  tcase_add_test(tc, s21_div_2);
  tcase_add_test(tc, s21_div_3);
  tcase_add_test(tc, s21_div_4);
  tcase_add_test(tc, s21_div_5);
  tcase_add_test(tc, s21_div_6);
  tcase_add_test(tc, s21_div_7);
  tcase_add_test(tc, s21_div_8);
  tcase_add_test(tc, s21_div_9);
  tcase_add_test(tc, s21_div_10);
  tcase_add_test(tc, s21_div_11);
  tcase_add_test(tc, s21_div_12);
  tcase_add_test(tc, s21_div_13);
  tcase_add_test(tc, s21_div_14);
  tcase_add_test(tc, s21_div_15);
  tcase_add_test(tc, s21_div_16);
  tcase_add_test(tc, s21_div_17);
  tcase_add_test(tc, s21_div_18);
  tcase_add_test(tc, s21_div_19);
  tcase_add_test(tc, s21_div_20);
  tcase_add_test(tc, s21_div_21);
  tcase_add_test(tc, s21_div_22);
  tcase_add_test(tc, s21_div_23);
  tcase_add_test(tc, s21_div_24);
  tcase_add_test(tc, s21_div_25);
  tcase_add_test(tc, s21_div_26);
  tcase_add_test(tc, s21_div_27);
  tcase_add_test(tc, s21_div_28);
  tcase_add_test(tc, s21_div_29);
  tcase_add_test(tc, s21_div_30);
  tcase_add_test(tc, s21_div_31);
  tcase_add_test(tc, s21_div_32);
  tcase_add_test(tc, s21_div_33);
  tcase_add_test(tc, s21_div_34);
  tcase_add_test(tc, s21_div_35);
  tcase_add_test(tc, s21_div_36);
  tcase_add_test(tc, s21_div_37);
  tcase_add_test(tc, s21_div_38);
  tcase_add_test(tc, s21_div_39);
  tcase_add_test(tc, s21_div_40);
  tcase_add_test(tc, s21_div_41);
  tcase_add_test(tc, s21_div_42);
  tcase_add_test(tc, s21_div_43);
  tcase_add_test(tc, s21_div_44);
  tcase_add_test(tc, s21_div_45);
  tcase_add_test(tc, s21_div_46);
  tcase_add_test(tc, s21_div_47);
  tcase_add_test(tc, s21_div_48);
  tcase_add_test(tc, s21_div_49);
  tcase_add_test(tc, s21_div_50);
  tcase_add_test(tc, s21_div_51);
  tcase_add_test(tc, s21_div_52);
  tcase_add_test(tc, s21_div_53);
  tcase_add_test(tc, s21_div_54);
  tcase_add_test(tc, s21_div_55);
  tcase_add_test(tc, s21_div_56);
  tcase_add_test(tc, s21_div_57);
  tcase_add_test(tc, s21_div_58);
  tcase_add_test(tc, s21_div_59);
  tcase_add_test(tc, s21_div_60);
  tcase_add_test(tc, s21_div_61);
  tcase_add_test(tc, s21_div_62);
  tcase_add_test(tc, s21_div_63);
  tcase_add_test(tc, s21_div_64);
  tcase_add_test(tc, s21_div_65);
  tcase_add_test(tc, s21_div_66);
  tcase_add_test(tc, s21_div_67);
  tcase_add_test(tc, s21_div_68);
  tcase_add_test(tc, s21_div_69);
  tcase_add_test(tc, s21_div_70);
  tcase_add_test(tc, s21_div_71);
  tcase_add_test(tc, s21_div_72);
  tcase_add_test(tc, s21_div_73);
  tcase_add_test(tc, s21_div_74);
  tcase_add_test(tc, s21_div_75);
  tcase_add_test(tc, s21_div_76);
  tcase_add_test(tc, s21_div_77);
  tcase_add_test(tc, s21_div_78);
  tcase_add_test(tc, s21_div_79);
  tcase_add_test(tc, s21_div_80);
  tcase_add_test(tc, s21_div_81);
  tcase_add_test(tc, s21_div_82);
  tcase_add_test(tc, s21_div_83);
  tcase_add_test(tc, s21_div_84);
  tcase_add_test(tc, s21_div_85);
  tcase_add_test(tc, s21_div_86);
  tcase_add_test(tc, s21_div_87);
  tcase_add_test(tc, s21_div_88);
  tcase_add_test(tc, s21_div_89);
  tcase_add_test(tc, s21_div_90);
  tcase_add_test(tc, s21_div_91);
  tcase_add_test(tc, s21_div_92);
  tcase_add_test(tc, s21_div_93);
  tcase_add_test(tc, s21_div_94);
  tcase_add_test(tc, s21_div_95);
  tcase_add_test(tc, s21_div_96);
  tcase_add_test(tc, s21_div_97);
  tcase_add_test(tc, s21_div_98);
  tcase_add_test(tc, s21_div_99);
  tcase_add_test(tc, s21_div_100);
  tcase_add_test(tc, s21_div_101);
  tcase_add_test(tc, s21_div_102);
  tcase_add_test(tc, s21_div_103);
  tcase_add_test(tc, s21_div_104);
  tcase_add_test(tc, s21_div_105);
  tcase_add_test(tc, s21_div_106);
  tcase_add_test(tc, s21_div_107);
  tcase_add_test(tc, s21_div_108);
  suite_add_tcase(s, tc);
  return s;
}
