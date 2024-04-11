#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sizeint = sizeof(int);
	int sizechar = sizeof(char);
	int sizelongint = sizeof(long int);
	int sizelonglongint = sizeof(long long int);
	int sizefloat = sizeof(float)
	printf("Size of a char: %d byte(s)\n", sizeint);
	printf("Size of an int: %d byte(s)\n", sizechar);
	printf("Size of a long int: %d byte(s)\n", sizelongint);
	printf("Size of a long long int: %d byte(s)\n", sizelonglongint);
	printf("Size of a float: %d byte(s)", sizefloat);
	return (0);
}
