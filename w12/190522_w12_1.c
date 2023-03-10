#include <stdio.h>
#include <stdlib.h>

float add_func(float, float);
float minus_func(float, float);
float mult_func(float, float);
float div_func(float, float);
int mod_func(int, int);
float exp_func(float, int);

int main(void)
{
	float op1, op2, result;
	char op;
	FILE* ptr_file; // pointer(*) will be covered in the next class
	ptr_file = fopen("calculator.txt", "w"); // If the file does not exist it will be created in the write (w) mode. 
	if (!ptr_file) return 1;
	printf("============================\n");
	fprintf(ptr_file, "============================\n");
	printf("operator: +, -, *, /, %, ^\n");
	fprintf(ptr_file, "operator: +, -, *, /, %, ^\n");
	printf("============================\n");
	fprintf(ptr_file, "============================\n");
	///

	printf("operand >> ");
	scanf_s("%f", &op1);

	for (int i = 0; i < 5; i++)
	{

		printf("operator >> ");
		scanf_s("%s", &op, 2);
		printf("operand >> ");
		scanf_s("%f", &op2);

		switch (op) {
		case '+':
			result = add_func(op1, op2);
			break;
		case '-':
			result = minus_func(op1, op2);
			break;
		case '*':
			result = mult_func(op1, op2);
			break;
		case '/':
			result = div_func(op1, op2);
			break;
		case '%':
			result = mod_func(op1, op2);
			break;
		case '^':
			result = exp_func(op1, op2);
			break;

		}
		printf("result >> %0.2f\n", result);

		fprintf(ptr_file, "operand >> %0.2f\n", op1);
		fprintf(ptr_file, "operator >> %c\n", op);
		fprintf(ptr_file, "operand >> %0.2f\n", op2);
		fprintf(ptr_file, "result >> %0.2f\n", result);

		op1 = result;
		
	}

	fclose(ptr_file);

	system("PAUSE");
	return 0;
}


float add_func(float a, float b)
{
	return a + b;
}

float minus_func(float a, float b)
{
	return a - b;
}

float mult_func(float a, float b)
{
	return a * b;
}

float div_func(float a, float b)
{
	return a / b;
}

int mod_func(int a, int b)
{
	b = (int)b;
	a = (int)a;
	return a % b;
}

float exp_func(float a, int b)
{
	for (int i = 1; i <= b; i++) {
		a = a * b;
	}
	return a;
}

