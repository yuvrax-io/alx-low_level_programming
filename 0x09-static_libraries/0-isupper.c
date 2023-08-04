#include "main.h"

/**
 * _isupper - verify if argument is uppercase
 * @c: argument taken
 *
 * Return: 0 or 1 success depend
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
