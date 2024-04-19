#include "main.h"

/**
 * print_times_table - function
 *
 * Description: Prints the n, up to 15, times table, starting with 0.
 *
 * Return: Nothing.
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i;
		int j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int mult = i * j;

				if (mult >= 10 && mult < 100)
				{
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else if (mult >= 100)
				{
					_putchar((mult / 100) + '0');
					_putchar(((mult / 10) % 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else
				{
					_putchar((mult) + '0');
				}

				if (j != n)
				{
					int space = (i * (j + 1));

					_putchar(',');
					_putchar(' ');
					if (space < 10)
					{
					_putchar(' ');
					_putchar(' ');
					}
					else if (space >= 10 && space < 100)
					{
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
