#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
void displayIntro() {
	printf("You are in a land full of dragons. In front of you, \n");
	printf("you see two caves. In one cave, the dragon is friendly\n");
	printf("and will share his treasure with you. The other dragon\n");
	printf("is greedy and hungry, and will eat on you on sight.\n");
}
int chooseCave() {
	int cave = 0;
	while ((cave != 1) && (cave != 2)) {
		printf("Which cave will you go into? (1 or 2)\n");
		scanf_s("%d", &cave);
	}
	return cave;
}
void checkCave(int chosenCave) {
	printf("You approach the cave...\n");
	Sleep(2000);
	int friendlyCave = (rand() % 2) + 1;
	if (chosenCave == friendlyCave) {
		printf("Gives you his treasure!\n");
	}
	else {
		printf("Gobbles you down in one bite!");
	}
}
void main() {
	char playAgain[100] = "yes";
	while (strcmp(playAgain, "yes") == 0) {
		displayIntro();
		int caveNumber = chooseCave();
		checkCave(caveNumber);
		printf("Do you want to play again? (yes or no)");
		scanf_s("%s", playAgain, 4);
	}
}