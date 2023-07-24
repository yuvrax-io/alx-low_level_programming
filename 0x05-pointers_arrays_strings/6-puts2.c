#include "main.h"

/**
 * puts2 -  prints every other character of a string,
 *  starting with the first character,
 *   followed by a new line
 *   @strg: string to be printed
 *
 * Return:void no return
 */


void puts2(char *strg)
{
	int c = 0, i;

	while (strg[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(strg[i]);
	}
	_putchar('\n');

}
