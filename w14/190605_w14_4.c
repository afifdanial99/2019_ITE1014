#include <stdio.h>
#include <string.h>
int main(void) {
	printf("Please input the last number\n");
	int a;
	scanf_s("%d", &a);
	printf("-------- start --------\n");
	for (int j = 1; j <= a; j++) {
		clap(j);
	}
	return 0;
}

int clap(int n) {
	int a = n / 100;
	int b = (n - a * 100) / 10;
	int c = n - a * 100 - b * 10;
	int n_1[10] = { a, b, c };
	int cp = 0;
	for (int i = 0; i <= 3; i++) {
		if ((n_1[i] == 3) || (n_1[i] == 6) || (n_1[i] == 9)) {
			cp++;
		}
	}
	if (cp > 0) {
		for (int i = 0; i < cp; i++) {
			printf("clap ");
		}
		printf("\n");
	}
	else {
		printf("%d\n", n);
	}

	return 0;
}