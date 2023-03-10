#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char power[4] = "yes";
	while (1) {
		printf("S T A R T\n");
		printf("============================\n");
		int x, y, z;
		while (1) {
			x = (rand() % 9) + 1;
			srand(time(NULL));
			y = (rand() % 10);
			srand(time(NULL));
			z = (rand() % 10);
			if ((x != y) && (y != z) && (x != z)) {
				break;
			}
		}
		int ju[4] = { x, y, z };
		printf("%d %d %d\n", x, y, z);

		srand(time(NULL));
		char power[4] = "yes";

		while (1) {
			int ans;
			int strike = 0;
			int ball = 0;
			scanf_s("%d", &ans);
			int a = ans / 100;
			int b = (ans - a * 100) / 10;
			int c = ans - a * 100 - b * 10;
			int an[4] = { a, b, c };
			int i, j;
			for (i = 0; i <= 2; i++) {
				for (j = 0; j <= 2; j++) {
					if (ju[i] == an[j]) {
						ball++;
					}
				}
			}
			for (i = 0; i <= 2; i++) {
				if (ju[i] == an[i]) {
					strike++;
				}
			}
			ball -= strike;
			if (strike == 3) {
				printf("Yes! The secret number is \"%d\"! You have won!\n", ans);
				break;
			}
			printf("%d strike, %d ball.\n", strike, ball);
			printf("\n============================\n");
		}
		printf("Do you want to play again? (yes or no)\n");
		scanf_s("%s", power, 4);
		if (strcmp(power, "yes") != 0) {
			break;
		}

	}
}