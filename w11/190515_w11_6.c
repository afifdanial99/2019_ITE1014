#include <stdio.h>
void main() {
	int h;
	scanf_s("%d", &h);
	int x = 1;
	for (x = 1; x <= 2 * h - 1; x++) {
		printf("*");
	}
	printf("\n");
	int a = h - 1;
	int b = 1;
	int total = 2 * h - 1;
	while (a >= 1) {
		for (x = 1; x <= a; x++) {
			printf("*");
		}
		for (x = 1; x <= b; x++) {
			printf(" ");
		}
		for (x = 1; x <= a; x++) {
			printf("*");
		}
		printf("\n");
		total += 2 * a;
		b += 2;
		a -= 1;
	}
	b -= 4;
	a = 2;
	while (a <= h - 1) {
		for (x = 1; x <= a; x++) {
			printf("*");
		}
		for (x = 1; x <= b; x++) {
			printf(" ");
		}
		for (x = 1; x <= a; x++) {
			printf("*");
		}
		printf("\n");
		total += 2 * a;
		b -= 2;
		a += 1;
	}
	for (x = 1; x <= 2 * h - 1; x++) {
		printf("*");
	}
	printf("\n");
	total += (2 * h - 1);
	printf(total);

}