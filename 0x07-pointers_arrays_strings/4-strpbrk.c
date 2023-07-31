#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: parametrewhat you search
 * @accept: the zize of bytes
 * Return: set if matched pointer byte
 * if not set is matched
 */

char *_strpbrk(char *s, char *accept)
{
	int len;

	while (*s)
	{
		for (len = 0; accept[len]; len++)
		{
			if (*s == accept[len])
				return (s);
		}

		s++;
	}

	return ('\0');
}
