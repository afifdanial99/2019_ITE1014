#include <stdio.h>
void main() {
	int n;
	printf("input n: ");
	scanf_s("%d", &n);
	printf("%d", fibo(n));
}
int fibo(int num) {
	if (num == 0) {
		return 0;
	}
	else if (num == 1) {
		return 1;
	}
	else {
		return fibo(num - 1) + fibo(num - 2);
	}
}