#include "stdio.h"
#include "stdlib.h"

void bubbleSort(int* arr, int sizeArr, int (*order)(int, int));
int CheckSmaller(int a, int b);
int CheckBigger(int a, int b);
void swap(int* a, int* b);
void printArray(int arrayPrint[], int sizeArray);

int main() {
    int arrayNumber[] = {8, 54, 12, 43, 62, 48, 16, 1, 8, 9};
    int sizeArray = sizeof(arrayNumber) / sizeof(arrayNumber[0]);
    printf("*Original array: \n");
    printArray(arrayNumber, sizeArray);

    bubbleSort(arrayNumber, sizeArray, CheckSmaller);

    printf("*Sorted array: \n");
    printArray(arrayNumber, sizeArray);
    return 0;
}

/*
    Thuật toán này cho phép duyệt phần tử của 1 mảng 2 lần:
        duyệt 2 lần xuôi
        duyệt 1 lần xuô + 1 lần ngược
    Cả 2 cách duyệt trên đều tuân theo ý tưởng của thuật toán là 'nổi bọt':
        tức là ta sẽ lấy phần tử nhỏ nhất / lớn nhất để sắp sếp về phía đầu hoặc cuối của mảng
        sau đấy lại cho duyệt các phần tử còn lại để sắp xếp
*/
void bubbleSort(int* arr, int sizeArr, int (*order)(int, int)) {
    for (int i = 0; i < sizeArr; i++) {
        for (int j = sizeArr - 1; j > i; j--) {
            if (order(arr[j], arr[j - 1])) {
                swap(&arr[j], &arr[j - 1]);
            }
        }
    }
}
int CheckBigger(int a, int b) {
    return a > b;
}

int CheckSmaller(int a, int b) {
    return a < b;
}

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void printArray(int arrayPrint[], int sizeArray) {
    for (int i = 0; i < sizeArray; i++) {
        printf("%d ", arrayPrint[i]);
    }
    printf("\n");
}