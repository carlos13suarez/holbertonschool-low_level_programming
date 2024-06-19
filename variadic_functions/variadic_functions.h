#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/* Macros */


/* Structures */
/**
 * struct argument_structure - elements of a argument_structure object
 *
 * @name: the format to be choose
 * @printer: function pointer that prints the givenarguments
 */
typedef struct argument_structure
{
	char name;
	void (*printer)(va_list args);
} argument_structure;


/* Prototypes */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
