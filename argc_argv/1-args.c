#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: count of the argument vector.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));

	return (0);
}
