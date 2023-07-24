#include "main.h"

/**
 * rev_string -function that reverses a string
 * @strg: string to be reversed
 *
 * Return:void no return
 */

void rev_string(char *strg)
{
	int len = 0, index = 0;
	char temp;

	while (strg[index++])
	{
		len++;
	}

	for (index = len - 1; index >= len / 2; index--)
	{
		temp = strg[index];
		strg[index] = strg[len - index];
		strg[len - index - 1] = temp;
	}
}
