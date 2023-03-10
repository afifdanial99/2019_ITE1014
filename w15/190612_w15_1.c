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
	//ù ��° ����: square �Լ� �����ϱ�
	printf("ù ��° ����: �Ǽ� 1���� �Է��Ͻÿ�.\n");
	double dvar;
	scanf_s("%lf", &dvar);
	square(&dvar);
	printf("%lf\n", dvar);
	//�� ��° ����: pSum�� pDiff �����ϱ�
	printf("�� ��° ����: �� ���� ������ �Է��Ͻÿ�.\n(����� �����Ͽ� �Է�)\n");
	int a, b;
	scanf_s("%d %d", &a, &b);
	int pSum, pDiff;
	getSumDiff(a, b, &pSum, &pDiff);
	printf("a: %d, b: %d ,SUM: %d, DIFFERENCE: %d\n", a, b, pSum, pDiff);

	return 0;
}