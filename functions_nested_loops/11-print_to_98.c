#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function
 *
 * @n: first integer to be printed up to 98.
 *
 * Return: Nothing.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
