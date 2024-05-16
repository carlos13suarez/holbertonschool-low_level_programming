#include <stdio.h>

/**
 * print_chessboard - prints the chessboard.
 *
 * @a: char pointer that points to an array of 8 characters.
 *
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
			if (j == 7)
				putchar('\n');
		}
}
