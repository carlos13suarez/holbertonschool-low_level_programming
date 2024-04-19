#include <stdio.h>

/**
 * main - function
 *
 * Description: Prints the first 50 Fibonacci numbers separated by comma,
 * followed by a space, starting with 1 and 2, followed by a new line.
 * Return: Always 0. Successful.
 */
int main(void)
{
	int i;
	unsigned long int sum, fib_num = 1, fib_num1 = 0;

	printf("0, 1, ");
	for (i = 0; i < 48; i++)
	{
		sum = fib_num + fib_num1;
		printf("%ld", sum);
		fib_num1 = fib_num;
		fib_num = sum;
		if (i != 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
