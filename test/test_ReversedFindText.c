#include "unity.h"
#include "ReversedFindText.h"

void setUp(void){}

void tearDown(void){}

void test_reversedFindText_given_A_find_A_should_return_minus_1(void){
  TEST_ASSERT_EQUAL(-1, reversedFindText("A", "A"));
}

void test_reversedFindText_given_B_find_C_should_return_minus_1(void){
  TEST_ASSERT_EQUAL(-1, reversedFindText("B", "C"));
}
 
void test_reversedFindText_given_AB_find_B_should_return_minus_1(void){
  TEST_ASSERT_EQUAL(-1, reversedFindText("AB", "A"));
}

void test_reversedFindText_given_BOYS_find_OY_should_return_0(void){
  TEST_ASSERT_EQUAL(0, reversedFindText("BOYS", "OY"));
}

void test_reversedFindText_given_BOYSH_find_OYS_should_return_0(void){
  TEST_ASSERT_EQUAL(0, reversedFindText("BOYSH", "OYS"));
}

void test_reversedFindText_given_BOSYSH_find_SH_should_return_3(void){
  TEST_ASSERT_EQUAL(3, reversedFindText("BOSYSH", "SH"));
}

void test_reversedFindText_given_BOSYSH_find_SX_should_return_minus_1(void){
  TEST_ASSERT_EQUAL(-1, reversedFindText("BOSYSH", "SX"));
}

void test_reversedFindText_given_WORLDRL_find_RL_should_return_4(void){
  TEST_ASSERT_EQUAL(4, reversedFindText("WORLDRL","RL"));
}

void test_reversedFindText_given_WORSDRL_find_RL_should_return_4(void){
  TEST_ASSERT_EQUAL(4, reversedFindText("WORSDRL","RL"));
}

void test_reversedFindText_given_alladin_find_lad_should_return_1(void){
  TEST_ASSERT_EQUAL(1,reversedFindText("alladin", "lad"));
}

void test_reversedFindText_given_alladin_find_las_should_return_minus_1(void){
  TEST_ASSERT_EQUAL(-1, reversedFindText("alladin", "las"));
}

void test_reversedFindText_given_alladin_find_all_should_return_minus_1(void){
  TEST_ASSERT_EQUAL(-1, reversedFindText("alladin", "all"));
}

void test_reversedFindText_given_RRARARATATUI_find_RARAT_should_return_minus_1(void){
  TEST_ASSERT_EQUAL(-1, reversedFindText("RRARARATATUI", "RRARA"));
}

void test_reversedFindText_given_SAD_find_empty_should_return_minus_1(void){
  TEST_ASSERT_EQUAL(-1, reversedFindText("SAD", " "));
}

void test_reversedFindText_given_empty_find_SAD_should_return_minus_1(void){
  TEST_ASSERT_EQUAL(-1, reversedFindText(" ", "SAD"));
}

void test_reversedFindText_given_asfasfasfasd_find_fasd_should_return_7(void){
  TEST_ASSERT_EQUAL(7, reversedFindText("wadwadwadwas", "dwas"));
}

void test_reversedFindText_given_Hello_my_name_is_Alladin_find_lad_should_return_18(void){
  TEST_ASSERT_EQUAL(18, reversedFindText("Hello my name is Alladin", "lad"));
} 