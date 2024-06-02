#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: witdth of the grid.
 * @height: height of the grid.
 *
 * Return: pointer to the grid.
 */
int **alloc_grid(int width, int height)
{
	int **array_ptr = NULL, i = 0, j = 0;

	if (width == 0 || height == 0)
		return (NULL);

	array_ptr = (int **) malloc(height * sizeof(int *));

	if (!array_ptr)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array_ptr[i] = (int *) malloc(width * sizeof(int));
		if (!array_ptr[i])
		{
			for (j = 0; j < i; j++)
				free(array_ptr[j]);
			free(array_ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array_ptr[i][j] = 0;
	}

	return (array_ptr);
}
