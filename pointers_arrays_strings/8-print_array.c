#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed
 * by a new line.
 *
 * @a: array of int.
 * @n: number of elements of the array to be printed.
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	putchar('\n');
}
