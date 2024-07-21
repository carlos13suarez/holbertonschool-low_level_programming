#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: decimal number.
 * @index: index at the binary representation of n.
 *
 * Return: the value 1 or 0 at the given index. -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int k;

	if (index > (sizeof(n) * 8) - 1)
		return (-1);

	k = n >> index;

	if (k & 1)
		return (1);
	else
		return (0);
}
