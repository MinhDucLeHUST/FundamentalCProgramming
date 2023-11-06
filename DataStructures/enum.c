#include "stdio.h"
#include "string.h"

typedef enum { mon,
               tue,
               wed = 3,
               thus,
               fri,
               sat,
               sun } week_t;

int main() {
    week_t isToday;
    isToday = thus;
    printf("Value = %d\n", isToday);
}