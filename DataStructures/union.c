#include "stdbool.h"
#include "stdio.h"
#include "string.h"

typedef union {
    char name[20];
    int age;
    float kpi;
} employee;

int main() {
    employee coder;
    coder.age = 23;
    strcpy(coder.name, "Le Minh Duc");
    coder.kpi = 8.5;
    printf("coder.age = %d\n", coder.age);
    printf("coder.kpi = %f\n", coder.kpi);
    printf("coder.name = %s", coder.name);
    return 0;
}