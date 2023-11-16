#include "stdio.h"

int main() {
    int number = 10;
    int *ptr = &number;
    int **p_to_p = &ptr;

    printf("value of number = %d\n", number);
    printf("address of number = %p\n", &number);  // %p: hexadecimal
    printf("*\n");
    printf("value of ptr: %d\n", *ptr);
    printf("address of ptr: %p\n", &ptr);
    printf("address of number: %p\n", ptr);
    printf("*\n");
    printf("value of p_to_p: %d\n", **p_to_p);
    printf("address of p_to_p: %p\n", p_to_p);
    printf("address of ptr: %p\n", *p_to_p);  // the address that p_to_p points
    return 0;
}