#include <stdlib.h>
#include "main.h"

/**
 * argstostr - allocate memory for concat of an array of strings
 * @ac: parameter number of strings
 * @av: parameter array of strings
 * Return: return char pointer to string concat
 */
char *argstostr(int ac, char **av)
{
	int row, col, i = 0, len = 0;
	char *ptr;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (row = 0; row < ac; row++)
	{
		for (col = 0; av[row][col]; col++)
			;
		len += col + 1;
	}
	ptr = malloc(len + 1);
	if (ptr != NULL)
	{
		for (row = 0; row < ac; row++)
		{
			for (col = 0; av[row][col]; col++, i++)
				ptr[i] = av[row][col];
			ptr[i++] = '\n';
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
