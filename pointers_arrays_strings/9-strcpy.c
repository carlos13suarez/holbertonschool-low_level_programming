#include <stdio.h>

/**
 * _strcpy - copies string from one char array to another.
 *
 * @dest: array of char where the string will be pasted.
 * @src: string to be copied.
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int length = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
