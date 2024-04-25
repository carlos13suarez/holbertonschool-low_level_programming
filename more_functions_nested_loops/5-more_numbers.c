#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i, j;
	char ch;

	for (i = 0; i < 10; i++)
	{
		for (j = 0, ch = '0'; j <= 14; j++, ch++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			if (j == 10)
			{
				ch = '0';
			}
			_putchar(ch);
		}
		_putchar('\n');
	}
}
