#include "unity.h"
#include "arraysum.h"
#include "bintodeci.h"
#include "checkarmstrong.h"
#include "checkmagic.h"
#include "checkneon.h"
#include "checkperfect.h"
#include "checkprime.h"
#include "decitobin.h"
#include "largestinarray.h"
#include "missingnoinarray.h"
#include "smallestinarray.h"
int arr_1[] = {1,2,3};
int arr_2[] = {1,3};
int arr_3[] = {2,3,6,-10};
int arr_4[] = {-1,-3,-19,-81};
void setUp(){}

void tearDown(){}
///ARRAY SUM////
void testarraysum(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(6, arraysum(arr_1,3), "[1,2,3] , 3");
  TEST_ASSERT_EQUAL_MESSAGE(4, arraysum(arr_2,2), "[1,3] , 2");
  TEST_ASSERT_EQUAL_MESSAGE(1, arraysum(arr_3,4), "[2,3,6,-10] , 4");
}

//BIN TO DECI//
void testbintodeci(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(439, bintodeci(110110111), "110110111");
  TEST_ASSERT_EQUAL_MESSAGE(134, bintodeci(00000110), "01110010");
}
//ARMSTRONG NUMBER//
void testarmstrong(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(1, checkarmstrong(153), "153");
  TEST_ASSERT_EQUAL_MESSAGE(0, checkarmstrong(200), "200");
  TEST_ASSERT_EQUAL_MESSAGE(1, checkarmstrong(0), "0");
  TEST_ASSERT_EQUAL_MESSAGE(-1, checkarmstrong(-21), "-21");
}
//MAGIC NUMBER//
// void testmagic(void)
// {
//   TEST_ASSERT_EQUAL_MESSAGE(1, checkmagic(52), "52");
//   TEST_ASSERT_EQUAL_MESSAGE(0, checkmagic(12345), "12345");
// }

//NEON NUMBER//
// void testneon(void)
// {
//   TEST_ASSERT_EQUAL_MESSAGE(0, checkneon(111), "111");
//   TEST_ASSERT_EQUAL_MESSAGE(1, checkneon(9), "9");
//   TEST_ASSERT_EQUAL_MESSAGE(1, checkneon(0), "0");
//   TEST_ASSERT_EQUAL_MESSAGE(-1, checkneon(-9), "-9");
// }
//PERFECT NUMBER//
void testperfect(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(1, checkperfect(496), "496");
  TEST_ASSERT_EQUAL_MESSAGE(0, checkperfect(400), "400");
}
//PRIME NUMBER//
void testprime(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(1, checkprime(23), "23");
  TEST_ASSERT_EQUAL_MESSAGE(0, checkprime(400), "400");
  TEST_ASSERT_EQUAL_MESSAGE(-1, checkprime(-1), "-1");
  TEST_ASSERT_EQUAL_MESSAGE(-1, checkprime(0), "0");
  TEST_ASSERT_EQUAL_MESSAGE(3, checkprime(1), "2");

}
//DECI TO BIN//
// void testdecitobin(void)
// {
//   TEST_ASSERT_EQUAL_MESSAGE(10001, decitobin(17), "17");
//   TEST_ASSERT_EQUAL_MESSAGE(0, decitobin(0), "156");
//   TEST_ASSERT_EQUAL_MESSAGE(-10101, decitobin(-21), "156");
// }
//LARGEST IN ARRAY//
void testlargestinarray(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(3, largestinarray(arr_1, 3), "[1,2,3], 3");
  TEST_ASSERT_EQUAL_MESSAGE(6, largestinarray(arr_3, 4), "[2,3,6,-10], 4");
}
//MISSING IN ARRAY//
void testmissing(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(4, missingnoinarray(arr_1, 3), "[1,2,3], 3");
  TEST_ASSERT_EQUAL_MESSAGE(2, missingnoinarray(arr_2, 2), "[1,3], 2");
}
//SMALLEST IN ARRAY//
void testsmallest(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(1, smallestinarray(arr_1, 3), "[1,2,3], 3");
  TEST_ASSERT_EQUAL_MESSAGE(-10, smallestinarray(arr_3, 4), "[2,3,6,-10], 4");
  TEST_ASSERT_EQUAL_MESSAGE(-81, smallestinarray(arr_4, 4), "[-1,-3,-19,-81], 4");
}


int testMain(void)
{
  UNITY_BEGIN();

  RUN_TEST(testarraysum);
  RUN_TEST(testbintodeci);
  RUN_TEST(testarmstrong);
  RUN_TEST(testmagic);
  RUN_TEST(testneon);
  RUN_TEST(testperfect);
  RUN_TEST(testprime);
  RUN_TEST(testdecitobin);
  RUN_TEST(testlargestinarray);
  RUN_TEST(testmissing);
  RUN_TEST(testsmallest);

  return UNITY_END();
}
