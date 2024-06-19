#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: the separator to be used between the printed strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str = "";

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}

	va_end(strings);
	printf("\n");
}
