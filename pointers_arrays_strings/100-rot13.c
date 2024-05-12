#include <stdio.h>

/**
 * rot13 - encodes a string using rot13.
 *
 * @str: pointer of type char to be passed.
 *
 * Return: modified string.
 */
char *rot13(char *str)
{
	int i, j;
	char s1[53] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char s2[53] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; s1[j] != '\0'; j++)
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
	return (str);
}
