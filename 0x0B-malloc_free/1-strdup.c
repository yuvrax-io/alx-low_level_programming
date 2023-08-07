#include <stdlib.h>
#include "main.h"

/**
 * _strdup - newly allocated space in memory
 * @str: parameter string to copy
 * Return:return a pointer
 */

char *_strdup(char *str)
{
	int len;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len += 1)
		;
	ptr = malloc(len + 1);
	if (ptr != NULL)
	{
		for (; len >= 0; len -= 1)
			ptr[len] = str[len];
	}
	return (ptr);
}
