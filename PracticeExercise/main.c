#include "stdio.h"
#include "stdlib.h"
typedef int *IntPtrType;
int main() {
    IntPtrType ptr_a, ptr_b, *ptr_c;
    ptr_a = (int *)malloc(sizeof(int));
    *ptr_a = 3;
    ptr_b = ptr_a;
    printf("*ptr_a = %d, * ptr_b = %d\n", *ptr_a, *ptr_b);

    ptr_b = (int *)malloc(sizeof(int));
    *ptr_b = 9;
    printf("*ptr_a = %d, * ptr_b = %d\n", *ptr_a, *ptr_b);

    *ptr_b = *ptr_a;
    printf("*ptr_a = %d, * ptr_b = %d\n", *ptr_a, *ptr_b);

    free(ptr_a);
    ptr_a = ptr_b;
    printf("*ptr_a = %d, *&*&*&*&*ptr_b = %d\n", *ptr_a, *&*&*&*&*ptr_b);

    ptr_c = &ptr_a;
    printf("*ptr_c = 0x%x, **ptr_c = %d\n", *ptr_c, **ptr_c);

    free(ptr_a);
    ptr_a = NULL;
    return 0;
}