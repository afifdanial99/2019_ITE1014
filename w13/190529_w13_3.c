#include <stdio.h>
int mean(int arr[], const int n) {


}

int main(void) {
//#1
	double arr[5] = { 1.,2.,3.,4.,5. };
//#2
	printf("%p %p\n", arr, &arr[0]);
	printf("%p %p\n", arr+1, &arr[1]);
	printf("%p %p\n\n", arr+2, &arr[2]);
//#3
	printf("%lf %lf\n", arr[0], *arr);
	printf("%lf %lf\n", arr[1], *(arr+1));
	printf("%lf %lf\n\n", arr[2], *(arr+2));
//#4
	double* ptr = NULL;
//#5
	ptr = &arr[0];
//#6
	printf("(1)\n");
	printf("%p %p %p\n", ptr, arr, &arr[0]);
	printf("(2)\n");
	printf("%p %p %p\n", ptr + 2, arr + 2, &arr[2]);
	printf("(3)\n");
	printf("%lf %lf %lf\n", *ptr, *arr, arr[0]);
	printf("(4)\n");
	printf("%lf %lf %lf\n\n", *(ptr + 2), *(arr + 2), arr[2]);
//#7
	int m = 7;
	int* ptr_1 = &m;
	printf("%p %d, m=%d \n", ptr_1, *ptr_1, m);
	*ptr_1 = 5;
	printf("%p %d, m=%d \n", ptr_1, *ptr_1, m);
	
	return 0;
}

