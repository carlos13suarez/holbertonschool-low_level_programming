#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another.
 *
 * @n: number from where to start
 * @m: the number that n will become into.
 *
 * Return: returns the number of bits you would need to flip to get from one
 * number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k = 0, l = 0, count = 0;

	while (!(n == 0 && m == 0))
	{
		k = n & 1;
		l = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (k ^ l)
			count++;
	}

	return (count);
}
