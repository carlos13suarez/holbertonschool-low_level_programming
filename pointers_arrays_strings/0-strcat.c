#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 *
 * @dest: .
 * @src: .
 *
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int length = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}

	return (dest);
}
