#include "main.h"

/**
 * print_last_digit - function
 * @n: The number from which to take the last digit.
 *
 * Description: Prints the last digit of a number.
 *
 * Return: Always 0 - Successful.
 */
int print_last_digit(int n)
{
	int ld;

	if (n >= 0)
	{
		ld = n % 10;
	}
	else
	{
		ld = (n * -1) % 10;
	}
	_putchar(ld + '0');

	return (ld);
}
