#include <stdio.h>
void main() {
	int n;
	scanf_s("%d", &n);
	int c = n;
	int b = 1; /*ศฆผ๖*/
	int a = 1; /*มู ผ๖*/
	int n_1 = n - 2;
	int n_2 = 2 * b - 1;
	int x=1;

	for (x = 1; x <= n - 1; x++) {
		printf(" ");
	}
	printf("*\n");
	while (a < n - 1) {
		for (x = 1; x <= n_1; x++) {
			printf(" ");
		}
		printf("*");
		for (x = 1; x <= n_2; x++) {
			printf(" ");
		}
		printf("*\n");
		n_1 -= 1;
		b += 1;
		n_2 = 2 * b - 1;
		a += 1;
	}

	for (x = 1; x <= (2 * c - 1); x++) {
		printf("*");
	}
}