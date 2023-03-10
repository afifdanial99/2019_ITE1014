#include <stdio.h>
void main() {
	int a;
	int b;
	int c;
	printf("A + B - C = ?\n");
	printf("Input A: ");
	scanf_s("%d", &a);
	printf("Input B: ");
	scanf_s("%d", &b);
	printf("Input C: ");
	scanf_s("%d", &c);
	int d = a + b - c;
	printf("%d + %d - %d = %d", a, b, c, d);
}
