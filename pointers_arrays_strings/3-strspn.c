#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string to be passed.
 * @accept: bytes that will be looked upon in the initial segment of s.
 *
 * Return: unsigned integer number equivalent to the number of bytes in the
 * initial segment of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, result = 0;

	for (i = 0; s[i] != ' '; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				result++;

	return (result);
}
