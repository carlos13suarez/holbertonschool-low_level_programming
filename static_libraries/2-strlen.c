#include "main.h"

/**
 * _strlen - Function that returns the length of a string.
 *
 * @s: Pointer of type char that points to a string.
 *
 * Description: Function that returns the number of bytes of a string pointed
 * by pointer *s.
 *
 * Return: Number of bytes of a string.
 */
int _strlen(char *s)
{
	int count = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
