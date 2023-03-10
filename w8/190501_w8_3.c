#include <stdio.h>
#include <math.h>

int main() {
	int a = 1;
	while (a == 1) {
		printf("------------------------------------\n");
		printf("Please input the number : ");
		int b;
		scanf_s("%d", &b);
		float n = sqrt(b);
		int m = n;
		if (m == n) {
			printf("%d is the square number of %d.\n", b, m);

		}
		else {
			printf("%d is not square number.\n", b);
		}
		printf("Try again? [yes<1>, no<2>]\n");
		scanf_s("%d", &a);
	}
	printf("Good Bye~");
}
