#include "stdio.h"

typedef void (*callback)(int);

// callback CALLBACK_FUNC_1;


void func_callback_1(int n){
    printf("Call to %s with value = %d\n",__func__,n);
    // return n*10;
}

void func_callback_2(int n1, int n2){
    int value = n1+n2;
    printf("Call to %s with value = %d\n",__func__,value);
    // return n*10;
}

void process(int num, callback f1){
    printf("Call to %s\n",__func__);
    f1(num);
}

int main(){
    process(10,func_callback_1);
    return 0;
}