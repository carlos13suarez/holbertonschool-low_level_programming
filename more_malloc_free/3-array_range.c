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
	int *array_integers = NULL, i = 0, j = 0;

	if (min > max)
		return (NULL);

	array_integers = (int *) malloc(max - min);
	if (!array_integers)
		return (NULL);

	for (i = 0, j = min; j <= max; i++, j++)
		array_integers[i] = j;

	return (array_integers);
}
