#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: first string to compare.
 * @s2: second string to compare.
 *
 * Return: 0 when both strings are identical, and the substraction of *s1 - *s2
 * if not identical.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}
