#include <stdio.h>

/**
 * main - function
 *
 * Description: Finds and prints the sum of the even-valued terms,
 * followed by a new line, of the Fibonacci sequence whose values
 * do not exceed 4,000,000.
 * Return: Always 0. Successful.
 */
int main(void)
{
	unsigned long int sum_even = 0, sum = 0, fib_num = 1, fib_num1 = 0;

	for (; sum < 4000000; sum++)
	{
		sum = fib_num + fib_num1;
		if (sum % 2 == 0)
			sum_even = sum_even + sum;
		fib_num1 = fib_num;
		fib_num = sum;
	}
	printf("%ld", sum_even);
	printf("\n");
	return (0);
}
