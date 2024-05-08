#include <stdio.h>

/**
 * _strncpy - concatenates two strings, but with limit n.
 *
 * @dest: .
 * @src: .
 * @n: .
 *
 * Return: the pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
