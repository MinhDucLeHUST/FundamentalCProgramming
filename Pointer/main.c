#include "stdio.h"
#include "stdlib.h"

int number = 0;

int main() {
    int **p_to_p = NULL;
    int col = 3, row = 4;
    p_to_p = (int **)malloc(row * sizeof(int *));
    // Cấp phát bộ nhớ cho từng con trỏ cấp 1
    for (int i = 0; i < row; i++) {
        p_to_p[i] = (int *)calloc(col, sizeof(int));
    }
    // Gán giá trị vào mảng 2 chiều
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            p_to_p[i][j] = number;
            number++;
        }
    }
    // In mảng 2 chiều
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", p_to_p[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++) {  // giải phóng bộ nhớ cho từng hàng
        free(p_to_p[i]);
    }
    free(p_to_p);  // giải phóng bộ nhớ của double pointer
    return 0;
}