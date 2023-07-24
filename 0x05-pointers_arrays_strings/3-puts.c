#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 *
 * @strg: parameter of the function
 *
 * Return:nothing void
 */

void _puts(char *strg)
{
	while (*strg != '\0')
	{
		_putchar(*strg);
		strg++;
	}
	_putchar('\n');
}
