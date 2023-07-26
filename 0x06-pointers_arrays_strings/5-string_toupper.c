#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of
 *   a string to uppercase.
 * @str: string
 * Return: result
 */

char *string_toupper(char *str)
{
	int len = 0;

	while (str[len])
	{
		if (str[len] >= 'a' && str[len] <= 'z')
			str[len] -= 32;

		len++;
	}

	return (str);
}
