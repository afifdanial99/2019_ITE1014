#include <stdio.h>
void main() {
	int dan;
	printf("Input dan.\n");
	scanf_s("%d", &dan);
	printf("**********%ddan**********\n", dan);
	int a = 1;
	while (a < 10) {
		int result = dan * a;
		printf("%d*%d=%d\n", dan, a, result);
		a += 1;
	}
	printf("************************");
}