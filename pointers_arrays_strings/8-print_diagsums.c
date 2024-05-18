#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integers.
 *
 * @a: int pointer.
 * @size: amount of summands. One per array.
 *
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, k = 0;

	for (i = 0; i < (size * size); i++)
		if (i % (size + 1) == 0)
			j += a[i];
	printf("%d, ", j);

	for (i = size - 1; i < ((size * size) - 1) ; i++)
		if (i % (size - 1) == 0)
			k += a[i];
	printf("%d\n", k);
}
