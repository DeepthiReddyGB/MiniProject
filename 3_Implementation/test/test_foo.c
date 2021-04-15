#include "unity.h"
#include "foo.h"

/* Modify these two lines according to the project */
#include "foo.h"
#define PROJECT_NAME    "foo"

/* Prototypes for all the test functions */
void sort(nodetype*);
void desd(nodetype*);
void sortyear(nodetype*);
void sortname(nodetype*);
void sortcolour(nodetype*);

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
  RUN_TEST(sort);
  RUN_TEST(desd);
  RUN_TEST(sortyear);
  RUN_TEST(sortname);
  RUN_TEST(sortcolour);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void Sort(nodetype*) {
   int expected[]={100, 123};
   int list[]={123,100};
   int* actual=Sort(list,2);
   TEST_ASSERT_EQUAL_INT_ARRAY(expected,actual,2);
  

/* Write all the test functions 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
  TEST_ASSERT_EQUAL(-30, add(-10, -20));
  TEST_ASSERT_EQUAL(10, add(-10, 20));
}
void test_add_testcase2(void) {
 
  /* Dummy fail
  // TEST_ASSERT_EQUAL(1500, add(750, 7500));
}
void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  /* Dummy fail
  // TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail
  // TEST_ASSERT_EQUAL(2, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail
  // TEST_ASSERT_EQUAL(3, divide(2, 2));
}
*/