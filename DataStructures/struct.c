#include "stdio.h"

typedef struct {
    char a;
    // int b;
    // double c;
    // int b;
    // int c;

} tinhsize_t;

int main() {
    tinhsize_t size_cal;
    printf("Size of struct = %ld\n", sizeof(size_cal));
    printf("Dia chi cua a: %ld\n", &size_cal.a);
    // printf("Dia chi cua b: %ld\n", &size_cal.b);
    // printf("Dia chi cua c: %ld\n", &size_cal.c);
    // printf("cach nhau: %d", &size_cal.name - &size_cal.age);
    return 0;
}