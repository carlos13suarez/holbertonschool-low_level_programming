#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives.
 *
 * @argc: count of the argument vector.
 * @argv: argument vector.
 *
 * Return: 1 if the program does not receive two arguments, else 0.
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		product *= atoi(argv[i]);
	}

	printf("%d\n", product);

	return (0);
}
