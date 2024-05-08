#include <stdio.h>

/**
 * _strcat - concatenates two strings, but with limit n.
 *
 * @dest: .
 * @src: .
 * @n: .
 *
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int length_dest = 0, length_src = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		length_dest++;
	}

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
		dest[length_dest + i] = src[i];
		if (src[i] == '\0')
			break;
	}

	return (dest);
}
