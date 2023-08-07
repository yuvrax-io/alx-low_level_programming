#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create array of chars
 * @size: the parameter of size of array
 * @c: first character of value
 * Return: return pointer ofarray
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = NULL;

	if (size > 0)
	{
		ptr = malloc(size);
	}
	if (ptr != NULL)
	{
		for (i = 0; i < size; i += 1)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
