#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 *  including the terminating null byte (\0),
 *   to the buffer pointed to by dest
 *@dest: value to be evaluate.
 *@src: value to be evaluate.
 * Return: returns string
 */

char *_strcpy(char *dest, char *src)
{
	int c = 0, i;

	while (src[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
