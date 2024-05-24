#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints all arguments it receives.
 *
 * @argc: count of the argument vector.
 * @argv: argument vector.
 *
 * Return: 1 if one of the number contains symbols that are not digits, else 0.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < (int) strlen(argv[i]); j++)
		{
			if ((argv[i][j] < '0' || argv[i][j] > '9') ||
				(argv[i][0] != '0' && !atoi(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
