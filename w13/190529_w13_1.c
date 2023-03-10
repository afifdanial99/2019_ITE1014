#include <stdio.h>

int main(void) {
	/*Step 1. Initialize an integer array with N numbers.*/
	int arr[] = { 1,2,3,4,5,6,7 };
	printf("int arr[] = { 1,2,3,4,5,6,7 }\n");
	/*Step 2.Find the number of elements in the array.*/
	int a = sizeof(arr);
	int b = sizeof(int);
	printf("the number of elements in the array: %d\n", a / b);

	printf("with float type arrays\n");
	float arr_1[] = { 1.2, 4.6, 7.8, 1.0, 9.3 };
	printf("arr_1[] = { 1.2, 4.6, 7.8, 1.0, 9.3 }\n");
	int c = sizeof(arr_1);
	int d = sizeof(float);
	printf("the number of elements in the array: %d\n", c / d);

	printf("with double type arrays\n");
	double arr_2[] = { 1.2, 4.6, 7.8, 1.0, 9.3 };
	printf("arr_2[] = { 1.2, 4.6, 7.8, 1.0, 9.3 }\n");
	int e = sizeof(arr_2);
	int f = sizeof(double);
	printf("the number of elements in the array: %d\n", e / f);
	return 0;
}