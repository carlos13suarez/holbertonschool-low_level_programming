#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 57)
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
