#include <stdio.h>

int main(void) {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int* ptr = &arr;
	int sum = 0;
	int length = sizeof(arr) / sizeof(int);
	for (int i = 0; i < length; i++) {
		sum += *(ptr + i);
	}
	printf("sum: %d\n", sum);
	for (int i = length - 1; i >= 0; i--) {
		printf("%d ", *(ptr + i));
	}
	return 0;
}