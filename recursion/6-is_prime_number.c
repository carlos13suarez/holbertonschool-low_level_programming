#include "main.h"

/**
 * check_prime - check if a number is prime
 *
 * @base: number to iterate over to check if n is not prime
 * @n: number to check if it is prime
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int base, int n)
{
	if (n <= 1 || (base != n && n % base == 0))
		return (0);

	if (base == n)
		return (1);

	return (check_prime(base + 1, n));
}

/**
 * is_prime_number - checks if a number is a prime
 *
 * @n: number to be checked.
 *
 * Return: 1 if the integer is a prime, and 0 otherwise.
 */
int is_prime_number(int n)
{
	return (check_prime(2, n));
}
