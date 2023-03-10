#include <stdio.h>

main() {
	char name[20] = "";
	int birth;
	char gen[20] = "";
	char desti[20]="";
	int day;
	printf("Input your name: ");
	scanf_s("%s", name, 20);
	printf("Gender: ");
	scanf_s("%s", gen, 20);
	printf("Day of birth<ex. 19910212>: ");
	scanf_s("%d", &birth);
	printf("Destination: ");
	scanf_s("%s", desti, 20);
	printf("Period of trip<ex. 5>: ");
	scanf_s("%d", &day);
	printf("\n\n");
	printf("================================\n");
	printf("NAME:\t\t%s\n", name);
	printf("GENDER:\t\t%s\n", gen);
	printf("DAY OF BIRTH:\t%d\n", birth);
	printf("DESTINATION:\t%s\n", desti);
	printf("PERIOD OF TRIP: %d\n", day);
	printf("================================\n");
}