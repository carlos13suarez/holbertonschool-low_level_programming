#include "main.h"

/**
 * _abs - function
 * @n: The number to be checked.
 *
 * Description: Computes the absolute value of an integer.
 *
 * Return: Absolute value of parameter.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}
