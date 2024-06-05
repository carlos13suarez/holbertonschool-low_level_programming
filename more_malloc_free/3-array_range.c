#include "main.h"

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum value of the array. Included.
 * @max: maximum value of the array. Included.
 *
 * Return: Returns NULL if min > max, or malloc fails.
 * Else, returns the array of integers.
 */
int *array_range(int min, int max)
{
	int *array_integers = NULL, i = 0;

	if (min > max)
		return (NULL);

	array_integers = (int *) malloc(((max - min) + 1) * sizeof(int));
	if (!array_integers)
		return (NULL);

	for (i = 0; (min + i) <= max; i++)
		array_integers[i] = min + i;

	return (array_integers);
}
