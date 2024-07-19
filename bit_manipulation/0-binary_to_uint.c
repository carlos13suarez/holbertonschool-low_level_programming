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

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len, sum = 0;
	char *s = (char *) b;

	if (b == NULL)
		return (0);

	len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		sum = (sum << 1) | (b[i] - '0');
	}
	return (sum);
}
