#include <stdio.h>
#include <string.h>
void bubbleSort(int arr[], int offset, int count){
	for(int i = offset; i <= count-1; i++){
		for(int j = i + 1; j <= count; j++){
			if(arr[i] > arr[j]){
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

}
void invert(int input[], int num_element){
	for(int i = 0; i <= num_element/2; i++){
		int tmp = input[i];
		input[i] = input[num_element-i-1];
		input[num_element-i-1] = tmp;
	}
}
void invert1(int input[], int num_element, int output[]){
	memcpy(output, input, num_element*4);
	for(int i = 0; i <= num_element/2; i++){
		int tmp = output[i];
		output[i] = output[num_element-i-1];
		output[num_element-i-1] = tmp;
	}
}
void swap(int **a, int **b, int **c){
	int* tmp1 = *a;
	int* tmp2 = *b;
	int* tmp3 = *c;

	*c = tmp1;
	*a = tmp2;
	*b = tmp3;
}
int main(){
	int x = 10, y = 20, z = 30;
	int *p, *q, *r;

	p = &x;
	q = &y;
	r = &z;
	printf("x = %d p = %#x *p = %d\n", x, p, *p);
	printf("y = %d q = %#x *q = %d\n", y, q, *q);
	printf("z = %d r = %#x *r = %d\n", z, r, *r);
	printf("Swapping pointers\n");
	swap(&p, &q, &r);
	printf("x = %d p = %#x *p = %d\n", x, p, *p);
	printf("y = %d q = %#x *q = %d\n", y, q, *q);
	printf("z = %d r = %#x *r = %d\n", z, r, *r);
	return 0;
}