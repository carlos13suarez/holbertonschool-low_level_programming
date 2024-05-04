#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: array of char to print half.
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int i, length = 0, half;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	if (length % 2 != 0)
	{
		half = (length + 1) / 2;
	}
	else
	{
		half = length / 2;
	}

	for (i = 0; str[half] != '\0'; i++, half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
