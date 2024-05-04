#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @str: array of char to print.
 *
 * Return: Nothing.
 */
void rev_string(char *str)
{
	int i, j, len = 0;
	char c;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0, j = len - 1; i <= j; i++, j--)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
	}
}
