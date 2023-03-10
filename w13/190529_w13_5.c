#include <stdio.h>

int main(void) {
	int arr[5] = { 0, };
	scanf_s("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	int n = sizeof(arr) / sizeof(int);
	printf("Maximum: %d\n", getMax(arr, n));

	printf("Minimum: %d\n", getMin(arr, n));
	
	return 0;
}

int getMax(int arr[], const int n) {
	int* ptr = arr;
	int max = *arr;
	for (int i = 0; i < n; i++) {
		if (max < *(ptr + i)) {
			max = *(ptr + i);
		}
	}
	return max;
}

int getMin(int arr[], const int n) {
	int* ptr = arr;
	int min = *arr;
	for (int i = 0; i < n; i++) {
		if (min > *(ptr + i)) {
			min = *(ptr + i);
		}
	}
	return min;
}