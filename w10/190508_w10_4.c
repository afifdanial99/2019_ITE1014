#include <stdio.h>
void main() {
	int x, n = 1;
	scanf_s("%d", &x);
	int a = 0, b = 2 * x - 1;
	for (n = 1; n <= x; n++) {
		for (int q = 1; q <= a; q++) {
			printf(" ");
		}
		for (int w = 1; w <= b; w++) {
			printf("*");
		}
		for (int q = 1; q <= a; q++) {
			printf(" ");
		}
		printf("\n");
		a += 1;
		b -= 2;
	}
	a -= 2;
	b += 4;
	for (n = 1; n < x; n++) {
		for (int q = 1; q <= a; q++) {
			printf(" ");
		}
		for (int w = 1; w <= b; w++) {
			printf("*");
		}
		for (int q = 1; q <= a; q++) {
			printf(" ");
		}
		printf("\n");
		a -= 1;
		b += 2;

	}
}