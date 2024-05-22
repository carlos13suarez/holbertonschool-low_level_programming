#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: pointer of type char.
 * @b: The constant byte. Value to be filled.
 * @n: upper-limit of the number of bytes that will be replaced in the memory
 * area pointed by s.
 *
 * Return: A pointer of type char that points to the memory area pointed by s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
