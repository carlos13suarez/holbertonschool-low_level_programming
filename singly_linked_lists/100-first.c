#include "lists.h"

/**
 * startupFunction - function executed before the main function
 *
 * __attribute__ ((constructor)): constructor attribute that allows the
 * function to be executed before main function gets executed.
 *
 * Return: nothing.
 */
void __attribute__ ((constructor)) startupFunction(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
