#include "main.h"

/**
 * print_line - function that drwas a straight line
 * @n: number parameter to define how many underscores to be printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
