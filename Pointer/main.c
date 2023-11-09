#include <stdio.h>

int calculateSum(int a, int b) {
    return a + b;
}
int calculateMinus(int a, int b) {
    return a - b;
}
int calculateTimes(int a, int b) {
    return a * b;
}
typedef int (*funPointer)(int, int);
int callFunction(int a, int b, funPointer calculateFunc) {
    return calculateFunc(a, b);
}
int main(int n, char** args) {
    int result = callFunction(10, 20, calculateMinus);
    printf("Value = %d\n", result);
}