#include <stdlib.h>
#include "main.h"

/**
 * wdcount - count the number of words
 * @str: parameter ofstring to count words
 * Return: number of words
 */

int wdcount(char *str)
{
	int i, words = 0, f = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			f = 0;
		}
		else if (!f)
		{
			f = 1;
			words++;
		}
	}
	return (words);
}

/**
 * strtow - split string into array
 * @str: parameter of string to split
 * Return: return pointer to array
 */

char **strtow(char *str)
{
	int i, row = 0, words;
	char **ptr;

	if (str == NULL)
		return (NULL);
	words = wdcount(str);
	if (!words)
		return (NULL);
	ptr = malloc((words + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	while (*str)
	{
		if (*str == ' ')
		{
			str += 1;
			continue;
		}
		for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
			;
		ptr[row] = malloc(i + 1);
		if (ptr[row] == NULL)
		{
			for (i = 0; i < row; i++)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
			ptr[row][i] = str[i];
		ptr[row][i] = '\0';
		row += 1;
		str += i;
	}
	ptr[row] = NULL;
	return (ptr);
}
