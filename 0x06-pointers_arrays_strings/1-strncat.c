#include "main.h"

/**
 *  *_strncat - concatenate two strings with n bytes
 *  @src: source
 *  @dest: destination
 *  @n: number byte
 *  Return: return result
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, len = 0;

	while (dest[index++])
		len++;

	for (index = 0; src[index] != '\0' && index < n; index++)
		dest[len++] = src[index];

	return (dest);
}
