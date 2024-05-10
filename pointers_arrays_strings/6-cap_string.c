#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: pointer of type char to be passed.
 *
 * Return: modified string.
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] == ',' || str[i] ==';' || str[i] == '.') 
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;

		if (str[i] == '!' || str[i] == '?' || str[i] == '"')
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;

		if (str[i] == '(' || str[i] == ')' || str[i] == '{')
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;

		if (str[i] == 10 || str[i] == 9)
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;

		if (str[i] == '}' || str[i] == 32)
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
	}

	return (str);
}
