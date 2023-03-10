#include <stdio.h>

int main(void) {
	int arr_1d[] = { 10,20,30,40,50,60,70,80,90,100,110,120 };
	int i, j;
	int* ptr = &arr_1d;
	printf("arr_1d 출력: \n");
	for (i = 0; i <= 11; i++) {
		printf("%d ", *(ptr + i));
	}
	printf("\n");
	int arr_2d[3][4];
	int z = 0;
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 3; j++) {
			arr_2d[i][j] = *(ptr + z);
			z++;
		}
	}
	printf("\narr_2d 출력: \n");
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 3; j++) {
			printf("%4d", arr_2d[i][j]);
		}
		printf("\n");
	}
	z = 0;
	printf("reversed arr_1d 출력: \n");
	for (i = 2; i >= 0; i--) {
		for (j = 3; j >= 0; j--) {
			arr_1d[z] = arr_2d[i][j];
			z++;
		}
	}
	for (i = 0; i <= 11; i++) {
		printf("%d ", *(ptr + i));
	}
	
	return 0;
}