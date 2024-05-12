#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: integer to print.
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	unsigned int i, length = 0, decimal_accesser = 1, dn, n1 = 0, n2 = 0;

	if (n < 0)
	{
		dn = n * -1;
		_putchar('-');
	}
	else
		dn = n;

	n2 = dn;

	if (n2 > 0)
	{
		while (dn != 0)
		{
			dn = dn / 10;
			length++;
		}
	}
	else
		length = 1;

	for (i = 0; i < (length - 1); i++)
		decimal_accesser *= 10;

	for (i = 0; i <= (length - 1); i++)
	{
		n1 = n2 / decimal_accesser;
		_putchar((n1 % 10) + 48);
		decimal_accesser /= 10;
	}
}
