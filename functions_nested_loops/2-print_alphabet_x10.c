#include "main.h"

/**
 * print_alphabet_x10 - function
 *
 * Description: Prints 10 times the alphabet in lowercase, followed by a new
 * line.
 *
 * Return: Always 0 (Success).
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}
