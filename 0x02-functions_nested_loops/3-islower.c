#include "main.h"

/**
 * _islower - check if a character is lowercase
 * @c:  c is argument
 * Return:  return 0 for no and 1 for lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
