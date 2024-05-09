#include <stdio.h>

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
	int i, len_s1 = 0, len_s2 = 0, res = 0;

	for (i = 0; s1[i] != '\0'; i++)
		len_s1++;

	for (i = 0; s2[i] != '\0'; i++)
		len_s2++;

	if (len_s1 != len_s2)
		return (*s1 - *s2);

	for (i = 0; i < len_s1; i++)
	{
		if (s1[i] != s2[i])
			break;
		else
			res++;
	}

	if (res == len_s1)
		return 0;
	else
		return (*s1 - *s2);
}
