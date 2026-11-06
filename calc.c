
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}
int mult(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    if (b == 0) return 0;
    return a / b;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
float add_float(float a, float b) {
    return a + b;
}

float sub_float(float a, float b) {
    return a - b;
}

float mul_float(float a, float b) {
    return a * b;
}

float divide_float(float a, float b) {
    if (b == 0.0f) return 0.0f; // Guard against division by zero
    return a / b;
}
