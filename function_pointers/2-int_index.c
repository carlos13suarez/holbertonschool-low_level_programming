#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: pointer to the first element of an array of integers
 * @size: size of the array
 * @cmp: pointer to the function we need to use
 *
 * Return: returns the index of the first element for which
 * the cmp function does not return 0. If no element matches,
 * return -1. If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL)
		return (-1);

	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
