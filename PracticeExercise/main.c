#include "stdio.h"

int main() {
    int x = 1, y = 2, z = 3;
    int *p = &x;
    int *q = &y;
    int *r = &z;

    printf("value x = %d, value y = %d, value z = %d\n", x, y, z);

    return 0;
}