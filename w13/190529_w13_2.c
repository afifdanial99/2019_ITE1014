#include <stdio.h>

double mean(int arr[], const int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		
	}

	double ave = sum / n;
	return ave;
}

int main(void) {
	double set[] = { 1.4, 3.76, 8.2, 0.87, 0.19, 7.9 };
	int a = sizeof(set) / sizeof(double);
	printf("%lf", mean(set, a));
	return 0;
}
