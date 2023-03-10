#include<stdio.h>
#include<ctype.h>
int alpha[] = { 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122 };
void quickSort(int arr[], int left, int right) {
	int i = left, j = right;
	int pivot = arr[(left + right) / 2];
	int temp, t;
	do
	{
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			t = alpha[i];
			alpha[i] = alpha[j];
			alpha[j] = t;

			i++;
			j--;
		}
	} while (i <= j);

	/* recursion */
	if (left < j)
		quickSort(arr, left, j);

	if (i < right)
		quickSort(arr, i, right);
}

int main(void)
{
	FILE* ptr_file;
	char ch;

	ptr_file = fopen("article.txt", "r");
	if (!ptr_file) return 1;
	int alphabet[27];
	for (int i = 0; i < 26; i++) {
		alphabet[i] = 0;
	}
	alphabet[26] = '\0';
	int letter = 0;
	int character = 0;
	int word = 0;

	int ascimax=0;
	int ascimin=0;
	int inword = 1;
	


	while ((ch = fgetc(ptr_file)) != EOF) {// fgetc returns EOF at the end of file
		ch = tolower(ch);
		
		if (isalpha(ch)) {
			character += 1;
			alphabet[ch - 'a'] += 1;
		}
		if (ch == 95 || ch == 59 || ch == 44 || ch == 46 || ch == 63) {
			letter += 1;
		}
		
		if ((!isspace(ch)) && (!inword)) {
			inword = 1;
			word += 1;
		}
		if (isspace(ch) && inword) {
			inword = 0;
		}
	}
	letter += character;
	int max = alphabet[0];
	int min = alphabet[0];
	for (int i = 0; i <= 25; i++) {
		if (max < alphabet[i]) {
			max = alphabet[i];
			ascimax = i;
			printf("hello");
		}
		if (min > alphabet[i]) {
			min = alphabet[i];
			ascimin = i;
			printf("Hello");
		}
	}
	fclose(ptr_file);
	quickSort(alphabet, 0, 25);
	printf("characters: %d\n", character);
	printf("letters: %d\n", letter);
	printf("words: %d\n", word);
	printf("most frequent alphabet  : %c\n", ('a'+ ascimax));
	printf("most infrequent alphabet: %c\n", ('a'+ ascimin));
	for (int x = 0; x < 26; x++) {
		printf("%c   :  %d\n", alpha[25-x], alphabet[25-x]);
	}

	return 0;
}
