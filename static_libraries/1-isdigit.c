#include "main.h"

/**
 * _isdigit - Checks for a digit (9 through 9)
 * @c: number to be checked
 *
 * Return: 1 if c is a digit. 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
