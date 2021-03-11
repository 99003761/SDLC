#include "unity.h"
#include <conversion.h>

/* Modify these two lines according to the project */
#include <conversion.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_add_testcase2(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_add_testcase2);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  ////////99003761/////
  RUN_TEST(test_temp_C_F);


  ////////END of 99003761///////


  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
}


void test_add_testcase2(void) {
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1500, add(750, 7500));
}
void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(2, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3, divide(2, 2));
}
///////////////////////////////99003761 Test_Case//////////////////////////////////////////////////////////
void test_temp_C_F(void)
{
  TEST_ASSERT_EQUAL(96.6200, temp_C_F(35.9));
  TEST_ASSERT_EQUAL(140.00, temp_C_F(60));
}

void test_temp_F_C(void)
{
  TEST_ASSERT_EQUAL(62.7777, temp_F_C(145));
  TEST_ASSERT_EQUAL(36.444443, temp_F_C(97.6));
  TEST_ASSERT_EQUAL(35.9, temp_F_C(96.62));
}

void test_Len_M_F(void)
{
  TEST_ASSERT_EQUAL(8.2021, Len_M_F(2.5));
  TEST_ASSERT_EQUAL(9.8425, Len_M_F(3));
}
void test_Len_F_M (void)
{
  TEST_ASSERT_EQUAL(3.048,Len_F_M(10));
  TEST_ASSERT_EQUAL(2.49,Len_F_M(8.2));
}
void test_current_DC_AC(void)
{
  TEST_ASSERT_EQUAL(15.723,current_DC_AC(10));
  TEST_ASSERT_EQUAL(19.654,current_DC_AC(12.5));
}
void test_current_AC_DC(void)
{
  TEST_ASSERT_EQUAL(12.7200,current_AC_DC(20));
  TEST_ASSERT_EQUAL(9.99,current_AC_DC(15.723));
}
