#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @strg: string to be mirror reverse
 * Return: reverse string void
 */

void print_rev(char *s)
{
	int count = 0;
	int i;

	while (strg[count] != '\0')
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(strg[i]);
	}
	_putchar('\n');
}
