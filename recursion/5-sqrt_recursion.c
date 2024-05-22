#include "main.h"

/**
 * check_pow_num - power a number by 2 to check if it is the square root of n.
 *
 * @base: number to be powered by 2.
 * @n: number to find its square root.
 *
 * Return: the square root of n.
 * If n does not have a natural square root, it returns -1.
 */
int check_pow_num(int base, int n)
{
	if (n < base * base)
		return (-1);

	if (n == base * base)
		return (base);

	return (check_pow_num(base + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number to calculate with.
 *
 * Return: return square root of n.
 */
int _sqrt_recursion(int n)
{
	return (check_pow_num(0, n));
}
