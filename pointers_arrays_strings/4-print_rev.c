#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @str: array of char to print.
 *
 * Return: Nothing.
 */
void print_rev(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
