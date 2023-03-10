#include <stdio.h>
void main() {
	int n;
	scanf_s("%d", &n);
	int a = 1;
	int x;
	while (a <= n) {
		for (x = 1; x <= a; x++) {
			printf("%d ", x);
		}
		printf("\n");
		a += 1;
	}
	a -= 1;
	while (a != 0) {
		for (x = 1; x <= a; x++) {
			printf("%d ", x);
		}
		printf("\n");
		a -= 1;
	}
}