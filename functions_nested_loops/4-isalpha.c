#include "main.h"

/**
 * _isalpha - function
 * @c: The character to be checked.
 *
 * Description: Checks for alphabetic character.
 *
 * Return: Returns 1 if c is is a letter, lowercase or uppercase. Returns 0
 * otherwise.
 */
int _isalpha(int c)
{
	if (c >= 'A')
		return (1);

	else
		return (0);
}
