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
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}



/**
 * _strdup - duplicates memory
 *
 * @str: string to duplicate.
 *
 * Return: NULL if there's no memory. Else pointer.
 */
char *_strdup(char *str)
{
	char *arr = NULL;
	int i = 0;

	if (!str)
	{
		return (NULL);
	}


	arr = (char *) malloc((_strlen(str) + 1) * sizeof(char));

	if (!arr)
		return (NULL);

	for (i = 0; i < _strlen(str); i++)
		arr[i] = str[i];

	return (arr);
}
