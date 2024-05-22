#include "main.h"

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

	for (i = 0; n > i && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
