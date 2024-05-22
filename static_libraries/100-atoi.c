#include "main.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s: string to convert.
 *
 * Return: the number.
 */
int _atoi(char *s)
{
	unsigned int i, num = 0, sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - 48);
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}

		if (s[i] == '-')
			sign *= -1;

		if (s[i] == '+')
			sign *= 1;
	}

	num *= sign;

	return (num);
}
