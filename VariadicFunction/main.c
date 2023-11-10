#include "stdarg.h"
#include "stdio.h"

#define LOG(...) printf(__VA_ARGS__)

int main() {
    LOG("Hello Minh Duc\n");
    int age = 23;
    LOG("Duc is %d years old\n", age);
    LOG("His point is %d + %d = %d", age, 2, age + 2);
}