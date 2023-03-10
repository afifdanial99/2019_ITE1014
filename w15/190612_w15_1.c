#include <stdio.h>

void square(double *dvar) {
	*dvar = (*dvar) * (*dvar);
}

void getSumDiff(int a, int b, int* pSum, int* pDiff) {
	*pSum = a + b;
	*pDiff = a - b;
	if (*pDiff < 0) {
		*pDiff = *pDiff * (-1);
	}
}
int main(void) {
	//첫 번째 문제: square 함수 구현하기
	printf("첫 번째 문제: 실수 1개를 입력하시오.\n");
	double dvar;
	scanf_s("%lf", &dvar);
	square(&dvar);
	printf("%lf\n", dvar);
	//두 번째 문제: pSum과 pDiff 구현하기
	printf("두 번째 문제: 두 개의 정수를 입력하시오.\n(띄어쓰기로 구분하여 입력)\n");
	int a, b;
	scanf_s("%d %d", &a, &b);
	int pSum, pDiff;
	getSumDiff(a, b, &pSum, &pDiff);
	printf("a: %d, b: %d ,SUM: %d, DIFFERENCE: %d\n", a, b, pSum, pDiff);

	return 0;
}