#include "main.h"

/**
 * _memcpy()- function copy the memory area
 * @dest: pointer block memory
 * @src: pointer block memory
 * @n:paramter of number of bytes to be compared
 * Return:Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
