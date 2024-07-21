#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: number to represent in binary.
 *
 * Description: the code starts with a flag set to 0.
 * The flag will go up once it finds the first 1 and
 * will stay 1 from there. The flag is used for when n == 0,
 * for when it never raises, it will just print a 0.
 * On the other hand, the for loop starts from the magic
 * number 31 (arbitrarily defined from the number of bits
 * an unsigned long int has), so that the code starts
 * looking for the first rightmost 1 bit, and starts
 * printing from right to left.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int c, k, flag = 0;

	for (c = 31; c >= 0; c--)
	{
		k = n >> c;

		if (k & 1)
		{
			printf("1");
			flag = 1;
		}
		else if (flag == 1)
			printf("0");
	}

	if (flag == 0)
		printf("0");
}
