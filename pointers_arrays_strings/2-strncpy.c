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
	int length_src = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		length_src++;
	}

	if (length_src > n)
	{
		length_src = n;
	}

	for (i = 0; i < length_src; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
