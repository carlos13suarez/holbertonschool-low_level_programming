#include "main.h"

/**
 * times_table - function
 *
 * Description: Prints the 9 times table, starting with 0.
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int mult = i * j;

			if (mult >= 10)
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			else
			{
				_putchar((mult) + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((i * (j + 1)) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
