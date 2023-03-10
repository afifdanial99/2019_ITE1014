#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int comp(int var1, int var2) {
	if (var1 > var2) {
		return 1;
	}
	else if (var1 < var2) {
		return -1;
	}
	else {
		return 0;
	}
}
void main() {
	srand(time(NULL));
	int a = rand()%101;
	printf("the secret number: %d\n",a);
	int b = -1;
	while (b != a) {
		printf("Number=?\n");
		scanf_s("%d", &b);
		if (comp(b, a) == 1) {
			printf("Smaller than %d\n", b);
		}
		else if (comp(b, a) == -1) {
			printf("Larger than %d\n", b);
		}
		else {
			printf("Yes. Right.");
			break;
		}
	}
}