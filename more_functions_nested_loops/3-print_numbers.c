#include "main.h"

/**
 * print_numbers - prints from 0 to 9
 *
 * Description: function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: Always 0.
 */
void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
