#include "stdbool.h"
#include "stdio.h"

/*
    Khi sử dụng bit field với kiểu "bool", chỉ cần sử dụng 1 bit để lưu trữ giá trị boolean.
*/

struct time_using_bitField {
    bool isRaiseHand : 1;
    char keyWord : 1;
    unsigned int hours : 5;  // unsigned int: 4 bytes
    // unsigned int minutes : 6;
    // unsigned int seconds : 6;
};

struct time {
    unsigned int hours;  // unsigned int: 4 bytes
    unsigned int minutes;
    unsigned int seconds;
};

int main() {
    // struct time_using_bitField time_t = {
    //     .hours = 8,
    //     .minutes = 3,
    //     .seconds = 5};
    // printf("Time: %d : %d : %d\n", time_t.hours, time_t.minutes, time_t.seconds);
    printf("Size of struct time: %ld bytes\n", sizeof(struct time));
    printf("Size of struct time: %ld bytes\n", sizeof(struct time_using_bitField));
}

// add