#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it with a
 * specific char.
 *
 * @size: size of the char.
 * @c: specifict char to initialiaze.
 *
 * Return: null if there's no memory. arr for the pointer.
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arr = (char *) malloc(size * sizeof(char));

	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
