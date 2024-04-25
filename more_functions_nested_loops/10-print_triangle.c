#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: number parameter to define how big the triangle
 */
void print_triangle(int size)
{
	int i, j, n = size;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < size; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		size--;
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
