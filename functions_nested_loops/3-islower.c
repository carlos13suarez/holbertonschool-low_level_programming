#include "main.h"

/**
 * _islower - function
 *
 * Description: Checks for lowercase character.
 *
 * Return: Always 0 (Success).
 */
int _islower(int c)
{
	if (c > 'Z')
		return 1;
	
	else
		return 0;
}
