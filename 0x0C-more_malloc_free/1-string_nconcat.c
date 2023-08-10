#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings.
 * @s1: parameter first string to copy
 * @s2: parameter second string to copy
 * @n: number of bytes of s2 to copy
 *
 * Return: return char pointer to newly allocated place in memory
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, count, k;
	char *s;

	if (s1 == NULL)
	{
		len = 0;
	}
	else
	{
		for (len = 0; s1[len]; len += 1)
			;
	}
	if (s2 == NULL)
	{
		count = 0;
	}
	else
	{
		for (count = 0; s2[count]; count += 1)
			;
	}
	if (count > n)
	{
		count = n;
	}
	s = malloc(sizeof(char) * (len + count + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < len; k++)
	{
		s[k] = s1[k];
	}
	for (k = 0; k < count; k++)
	{
		s[k + len] = s2[k];
	}
	s[len + count] = '\0';
	return (s);
}
