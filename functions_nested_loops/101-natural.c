#include <stdio.h>
#include "main.h"

/**
 * sum_multiples_3_or_5 - function.
 * @n: 1024
 *
 * Description: Computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 *
 * Return: Always 0. Successful.
 */
int sum_multiples_3_or_5(int n)
{
	int i, sum, mult_3 = 0, mult_5 = 0;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0)
		{
			mult_3 += i;
		}
		else if (i % 5 == 0)
		{
			mult_5 += i;
		}
	}
	sum = mult_3 + mult_5;
	printf("%d\n", sum);
	return (0);
}
