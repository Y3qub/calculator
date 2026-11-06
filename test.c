#include "unity.h"
#include "calc.c"

void setUp(void) {}     // Not needed yet
void tearDown(void) {}

void test_add(void) {
    TEST_ASSERT_EQUAL(4, add(2, 2));
}
void test_sub(void) {
    TEST_ASSERT_EQUAL(0, sub(2, 2));
}
void test_mult(void) {
    TEST_ASSERT_EQUAL(6, mult(2,3));
}
void test_divide(void) {
    TEST_ASSERT_EQUAL(2, divide(6, 3));
}

void test_pow(void) {
    TEST_ASSERT_EQUAL(8, power(2, 3));
}
void test_add_float(void) {
    TEST_ASSERT_FLOAT_WITHIN(0.001, 5.5, add_float(2.2, 3.3));
}

void test_sub_float(void) {
    TEST_ASSERT_FLOAT_WITHIN(0.001, 1.1, sub_float(3.3, 2.2));
}

void test_mul_float(void) {
    TEST_ASSERT_FLOAT_WITHIN(0.001, 6.0, mul_float(2.0, 3.0));
}

void test_divide_float(void) {
    TEST_ASSERT_FLOAT_WITHIN(0.001, 2.0, divide_float(6.0, 3.0));
}




int main(void) {
    UNITY_BEGIN();
    // Integer tests
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    RUN_TEST(test_mult);
    RUN_TEST(test_divide);
    RUN_TEST(test_pow);
    // Float tests
    RUN_TEST(test_add_float);
    RUN_TEST(test_sub_float);
    RUN_TEST(test_mul_float);
    RUN_TEST(test_divide_float);
    return UNITY_END();
}
