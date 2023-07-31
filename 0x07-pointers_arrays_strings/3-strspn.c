#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: paramter of pointer string
 * @accept: parameter accept string
 * Return: unsigngned int.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int len;

	while (*s)
	{
		for (len = 0; accept[len]; len++)
		{
			if (*s == accept[len])
			{
				bytes++;
				break;
			}

			else if (accept[len + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
