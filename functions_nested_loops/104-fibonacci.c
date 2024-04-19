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

	for (i = 0; i < 98; i++)
	{
		sum = fib_num + fib_num1;
		printf("%lu", sum);
		fib_num1 = fib_num;
		fib_num = sum;
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
