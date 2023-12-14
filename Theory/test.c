#include "stdio.h"

int main() {
    int a[4] = {4, 5, 12, 9};
    int *p = a;  // con trỏ p sẽ trỏ đến địa chỉ của index đầu tiên của mảng a, tức là a[0]
    /*
        a và &a là địa chỉ của mảng a, địa chỉ của phần tử đầu tiên của mảng
        *a là giá trị của phần tử đầu tiên của mảng

    */
    printf("a = 0x%x, *a = 0x%x, &a = 0x%x\n", a, *a, &a);
    /*
        p: địa chỉ mà con trỏ p trỏ tới
        *p: giá trị tại địa chỉ trỏ tới
        &p: địa chỉ riêng của con trỏ
    */
    printf("p = 0x%x, *p = 0x%x, &p = 0x%x\n", p, *p, &p);
    printf("(a+1) = 0x%x, *(a+1) = 0x%x, *a+1 = 0x%x, &a+1 = 0x%x\n", (a + 1), *(a + 1), *a + 1, &a + 1);
    printf("(p+1) = 0x%x, *(p+1) = 0x%x, *p+1 = 0x%x, &p + 1 = 0x%x\n", (p + 1), *(p + 1), *p + 1, &p + 1);
    return 0;
}