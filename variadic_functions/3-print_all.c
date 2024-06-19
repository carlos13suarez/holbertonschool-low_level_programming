#include "variadic_functions.h"

void print_char(va_list argument);
void print_int(va_list argument);
void print_float(va_list argument);
void print_string(va_list argument);
/**
 * print_all - prints anything.
 *
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list arguments_to_print;
	int i = 0, j = 0;
	char *separator = "";
	argument_structure valid_format[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(arguments_to_print, format);

	while (format && format[i] != '\0')
	{
		j = 0;
		while (valid_format[j].name != '\0')
		{
			if (format[i] == valid_format[j].name)
			{
				printf("%s", separator);
				valid_format[j].printer(arguments_to_print);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}


	va_end(arguments_to_print);
	printf("\n");
}


/**
 * print_char - prints a char
 *
 * @argument: the character to print
 */
void print_char(va_list argument)
{
	printf("%c", va_arg(argument, int));
}



/**
 * print_int - prints a int
 *
 * @argument: the integer to print
 */
void print_int(va_list argument)
{
	printf("%d", va_arg(argument, int));
}




/**
 * print_float - prints a float
 *
 * @argument: the float to print
 */
void print_float(va_list argument)
{
	printf("%f", va_arg(argument, double));
}




/**
 * print_string - prints a string
 *
 * @argument: the string to print
 */
void print_string(va_list argument)
{
	char *str = va_arg(argument, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
