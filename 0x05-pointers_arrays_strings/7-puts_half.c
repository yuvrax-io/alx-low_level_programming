#include "main.h"

/**
* puts_half - prints half of a string,
*     followed by a new line
* @strg: string to be printed
*
* Return: void print half
*/

void puts_half(char *strg)
{
	int index = 0, i = 0, n;

	while (strg[index++])
	{
		i++;
	}

	if ((i % 2) == 0)
	{
		n = i / 2;
	}

	else
	{
		n = (i + 1) / 2;
	}

	for (index = n; index < i; index++)
	{
		_putchar(strg[index]);
	}
	_putchar('\n');
}
