#include <stdio.h>
#include <stdlib.h>
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
 * str_concat - concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *arr = NULL;
	int i = 0, lens1 = _strlen(s1), lens2 = _strlen(s2);

	arr = (char *) malloc((lens1 + lens2) * sizeof(char));

	if (!arr)
		return (NULL);

	for (i = 0; i < lens1; i++)
		arr[i] = s1[i];

	for (i = 0; i < lens2; i++)
		arr[lens1 + i] = s2[i];

	return (arr);
}
