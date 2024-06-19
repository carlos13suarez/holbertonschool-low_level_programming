#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: the separator to be used between the printed numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf("%s", separator);
		printf("%d", va_arg(numbers, int));
	}

	va_end(numbers);
	printf("\n");
}
