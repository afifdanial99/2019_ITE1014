#include <stdio.h>
void main() {
	int x, n = 1;
	scanf_s("%d", &x);
	int a = 1,b = x - 1;
	for (n = 1; n <= x; n++) {
		for (int q=1; q <= b; q++) {
			printf(" ");
		}
		for (int w=1; w <= a; w++) {
			printf("*");
		}
		for (int q=1; q <= b; q++) {
			printf(" ");
		}
		printf("\n");
		a += 2;
		b -= 1;
	}
}