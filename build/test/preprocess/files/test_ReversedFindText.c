#include "ReversedFindText.h"
#include "unity.h"


void setUp(void){}



void tearDown(void){}



void test_reversedFindText_given_A_find_A_should_return_minus_1(void){

  UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((reversedFindText("A", "A"))), (((void *)0)), (_U_UINT)9, UNITY_DISPLAY_STYLE_INT);

}



void test_reversedFindText_given_B_find_C_should_return_minus_1(void){

  UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((reversedFindText("B", "C"))), (((void *)0)), (_U_UINT)13, UNITY_DISPLAY_STYLE_INT);

}



void test_reversedFindText_given_AB_find_B_should_return_minus_1(void){

  UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((reversedFindText("AB", "A"))), (((void *)0)), (_U_UINT)17, UNITY_DISPLAY_STYLE_INT);

}



void test_reversedFindText_given_BOYS_find_OY_should_return_0(void){

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((reversedFindText("BOYS", "OY"))), (((void *)0)), (_U_UINT)21, UNITY_DISPLAY_STYLE_INT);

}



void test_reversedFindText_given_BOYSH_find_OYS_should_return_0(void){

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((reversedFindText("BOYSH", "OYS"))), (((void *)0)), (_U_UINT)25, UNITY_DISPLAY_STYLE_INT);

}



void test_reversedFindText_given_BOSYSH_find_SH_should_return_3(void){

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((reversedFindText("BOSYSH", "SH"))), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_INT);

}



void test_reversedFindText_given_BOSYSH_find_SX_should_return_minus_1(void){

  UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((reversedFindText("BOSYSH", "SX"))), (((void *)0)), (_U_UINT)33, UNITY_DISPLAY_STYLE_INT);

}



void test_reversedFindText_given_WORLDRL_find_RL_should_return_4(void){

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((reversedFindText("WORLDRL","RL"))), (((void *)0)), (_U_UINT)37, UNITY_DISPLAY_STYLE_INT);

}



void test_reversedFindText_given_WORSDRL_find_RL_should_return_4(void){

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((reversedFindText("WORSDRL","RL"))), (((void *)0)), (_U_UINT)41, UNITY_DISPLAY_STYLE_INT);

}



void test_reversedFindText_given_alladin_find_lad_should_return_1(void){

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((reversedFindText("alladin", "lad"))), (((void *)0)), (_U_UINT)45, UNITY_DISPLAY_STYLE_INT);

}



void test_reversedFindText_given_alladin_find_las_should_return_minus_1(void){

  UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((reversedFindText("alladin", "las"))), (((void *)0)), (_U_UINT)49, UNITY_DISPLAY_STYLE_INT);

}



void test_reversedFindText_given_alladin_find_all_should_return_minus_1(void){

  UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((reversedFindText("alladin", "all"))), (((void *)0)), (_U_UINT)53, UNITY_DISPLAY_STYLE_INT);

}



void test_reversedFindText_given_RRARARATATUI_find_RARAT_should_return_minus_1(void){

  UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((reversedFindText("RRARARATATUI", "RRARA"))), (((void *)0)), (_U_UINT)57, UNITY_DISPLAY_STYLE_INT);

}



void test_reversedFindText_given_SAD_find_empty_should_return_minus_1(void){

  UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((reversedFindText("SAD", " "))), (((void *)0)), (_U_UINT)61, UNITY_DISPLAY_STYLE_INT);

}



void test_reversedFindText_given_empty_find_SAD_should_return_minus_1(void){

  UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((reversedFindText(" ", "SAD"))), (((void *)0)), (_U_UINT)65, UNITY_DISPLAY_STYLE_INT);

}



void test_reversedFindText_given_asfasfasfasd_find_fasd_should_return_7(void){

  UnityAssertEqualNumber((_U_SINT)((7)), (_U_SINT)((reversedFindText("wadwadwadwas", "dwas"))), (((void *)0)), (_U_UINT)69, UNITY_DISPLAY_STYLE_INT);

}



void test_reversedFindText_given_Hello_my_name_is_Alladin_find_lad_should_return_18(void){

  UnityAssertEqualNumber((_U_SINT)((18)), (_U_SINT)((reversedFindText("Hello my name is Alladin", "lad"))), (((void *)0)), (_U_UINT)73, UNITY_DISPLAY_STYLE_INT);

}
