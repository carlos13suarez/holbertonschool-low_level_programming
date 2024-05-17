#include <stdio.h>

/**
 * _strstr - locates a substring.
 *
 * @haystack: string.
 * @needle: substring whose first occurrence will be searched in haystack.
 *
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, len_needle = 0, coincidence = 0;

	for (i = 0; needle[i] != '\0'; i++)
		len_needle++;

	if (len_needle == 0)
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
		if (haystack[i] == needle[0])
		{
			for (k = i, j = 0; haystack[k] == needle[j]; k++, j++)
			{
				coincidence++;
				if (len_needle == coincidence)
					return (&haystack[i]);
			}
		}

	return (NULL);
}
