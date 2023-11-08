#include <stdio.h>

void print(int *pointerArray, int sizeArray);
void print1(char *pointerArray, int sizeArray);

int main() {
    int array1[5] = {11, 12, 13, 14, 15};
    int array2[5] = {21, 22, 23, 24, 25};
    int array3[5] = {31, 32, 33, 34, 35};

    char *fullName[] = {
        "Duc",
        "Anh",
        "Ronaldo"};

    int *pointerArray[3];
    pointerArray[0] = array1;
    pointerArray[1] = array2;
    pointerArray[2] = array3;
    // print(fullName, 5);
    for (int i = 0; i < 3; i++) {
        printf("%s \n", fullName[i]);
    }
    return 0;
}

void print(int *pointerArray, int sizeArray) {
    for (int i = 0; i < sizeArray; i++) {
        printf("%d ", pointerArray[i]);
    }
}

void print1(char *pointerArray, int sizeArray) {
    for (int i = 0; i < sizeArray; i++) {
        printf("%s ", pointerArray[i]);
    }
}
