#include <stdio.h>
int my_strlen(const char* str) {
	int ret = 0;
	for (; *str != '\0'; ++str)
		++ret;
	return ret;
}

int my_strcmp(const char* lhs, const char* rhs) {
	int ret = 0;
	while (!(ret = *(unsigned char*)lhs - *(unsigned char*)rhs) && *rhs)
		++lhs, ++rhs;
	if (ret < 0)
		ret = -1;
	else if (ret > 0)
		ret = 1;
	return ret;
}

void* my_strcpy(char* dest, const char* src) {
	char* cp = dest;
	while (*cp++ = *src++)
		;
}

char* my_strcat(char* dest, const char* src) {
	char* cp = dest;
	while (*cp) cp++;
	while (*cp++ = *src++)
		;
	return dest;
}

int main(void) {
	printf("%d\n", my_strlen("Hello"));
	printf("%d\n", my_strcmp("Hello", "World"));
	char a[17] = "Hanyang";
	char b[17] = "CSE";
	my_strcpy(a, b);
	printf("%s\n", b);
	char c[14] = "Hello";
	char d[14] = "Gaon.";
	my_strcat(c, d);
	printf("%s", c);

	return 0;
}
