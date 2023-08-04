#include "main.h"

/**
 * _isdigit -checks for a digit (0 through 9)
 * @c: argument taken
 *
 * Return: 0 or 1 successfully 1 for uppercase
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
