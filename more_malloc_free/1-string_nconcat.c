#include "main.h"


/**
 * _strlen - function that returns the length of a string
 *
 * @s: Pointer
 *
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int longitd = 0;

	while (*s != '\0')
	{
		longitd++;
		s++;
	}

	return (longitd);
}

/**
 * string_nconcat - concatenates two strings, but the second string up until n
 *
 * @s1: first string
 * @s2: second string
 * @n: bytes of the second string.
 *
 * Return: Returns NULL if malloc fails. Else the concatenaed string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length = 0, s2_length = 0, new_string_length = n, i = 0;
	char *new_string = NULL;

	s1_length = _strlen(s1);
	s2_length = _strlen(s2);
	new_string_length = s1_length + (s2_length < n ? s2_length : n + 1);

	new_string = (char *) malloc(new_string_length);

	if (!new_string)
		return (NULL);
	
	for (i = 0; s1[i]; i++)
		new_string[i] = s1[i];
	
	for (i = 0; i < (new_string_length - s1_length); i++)
		new_string[s1_length + i] = s2[i];

	new_string[new_string_length] =  '\0';

	return (new_string);
}
