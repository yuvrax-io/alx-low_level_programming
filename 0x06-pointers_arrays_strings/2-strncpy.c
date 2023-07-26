#include "main.h"

/**
 * *_strncpy - copy string with n number bytes
 * @dest: destination
 * @src: source
 * @n: number
 * Return: return
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, len = 0;

	while (src[index++])
		len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
