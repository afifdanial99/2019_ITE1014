#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {
	printf("Hello! What is your name?\n");
	char name[10] = "";
	scanf_s("%s", name, 10);
	printf("Well, %s, I am thinking of a number between 1 and 20.\n", name);
	srand(time(NULL));
	int n = rand() % 19; /* 0부터 19 사이의 정수*/
	n += 1; /*1부터 20 사이의 정수*/
	int r = -1;
	int u = 0;
	while (r != n) {
		printf("Take a guess.\n");
		scanf_s("%d", &r);
		if (r > n) {
			printf("Your guess is too high.\n");
		}
		else {
			printf("Your guess is too low.\n");
		}
		u += 1;
	}
	printf("Good job!, %s! You guessed my number in %d guesses!", name, u);
}