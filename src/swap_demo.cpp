//
// Created by cbq on 2024/8/27.
//
#include <cstdio>

void swap1(int a, int b);
void swap2(int *a, int *b);
void swap3(int &a, int &b);

int main() {
    int a = 10;
    int b = 20;
    printf("===================== swap1 start =======================\n");
    printf("[main-before] : a=%d, b=%d\n", a, b);
    swap1(a, b);
    printf("[main-after] : a=%d, b=%d\n", a, b);
    printf("===================== swap1 end =========================\n\n");

    printf("===================== swap2 start =======================\n");
    printf("[main-before] : a=%d, b=%d\n", a, b);
    swap2(&a, &b);
    printf("[main-after] : a=%d, b=%d\n", a, b);
    printf("===================== swap2 end =========================\n\n");

    printf("===================== swap3 start =======================\n");
    printf("[main-before] : a=%d, b=%d\n", a, b);
    swap3(a, b);
    printf("[main-after] : a=%d, b=%d\n", a, b);
    printf("===================== swap3 end =========================\n\n");
    return 0;
}


/**
 *
 * @param a a
 * @param b b
 */
void swap1(int a, int b) {
    printf("[swap1-before] : a=%d, b=%d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("[swap1-after] : a=%d, b=%d\n", a, b);
}

/**
 *
 * @param a &a
 * @param b &b
 */
void swap2(int *a, int *b) {
    printf("[swap1-before] : a=%d, b=%d\n", *a, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("[swap1-after] : a=%d, b=%d\n", *a, *b);
}

/**
 *
 * @param a a ref
 * @param b b ref
 */
void swap3(int &a, int &b) {
    printf("[swap1-before] : a=%d, b=%d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("[swap1-after] : a=%d, b=%d\n", a, b);
}