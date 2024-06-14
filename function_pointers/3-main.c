#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: argument counter
 * @argv: array of argument vectors
 *
 * Return: 0 if succesful, else if failure.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	operator = get_op_func(argv[2]);

	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}

	result = operator(num1, num2);

	printf("%d\n", result);

	return (0);
}
