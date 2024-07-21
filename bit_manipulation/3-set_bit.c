#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: decimal number.
 * @index: index at the binary representation of n.
 *
 * Return: the value 1 or 0 at the given index. -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8) - 1)
		return (-1);

	*n |= (1 << index);
	return (1);
}
