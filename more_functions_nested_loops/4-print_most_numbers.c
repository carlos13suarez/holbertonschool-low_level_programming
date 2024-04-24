#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9, except for 2 and 4
 *
 * Description: function that prints the numbers, from 0 to 9,
 * without printing 2 and 4, followed by a new line.
 */
void print_most_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch != '2' || ch != '4')
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}
