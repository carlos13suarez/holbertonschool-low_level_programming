#include "main.h"

/**
 * _islower - function
 * @c: The character to be checked.
 *
 * Description: Checks for lowercase character.
 *
 * Return: Returns 1 if c is lowercase. Returns 0 otherwise.
 */
int _islower(int c)
{
	if (c > 'Z')
		return (1);

	else
		return (0);
}
