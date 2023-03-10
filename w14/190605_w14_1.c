#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int arr_2d[3][4] = { {10, 20, 30, 40}, {50, 60, 70, 80}, {90, 100, 110, 120} };
	printf("Get the stored numbers with [] operators\n");
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 3; j++) {
			printf("%4d", arr_2d[i][j]);
		}
		printf("\n");
	}
	printf("Get the stored numbers with * operators\n");
	for (int i = 0; i <= 2; i++) {

		for (int j = 0; j <= 3; j++) {
			printf("%4d", *(*(arr_2d+i)+j));
		}
		printf("\n");
	}
	return 0;
}