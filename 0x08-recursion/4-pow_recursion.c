#include "main.h"

/**
 * _pow_recursion - calculate x raised by y of the power
 * @x: parameter of base
 * @y: parameter of exponent
 * Return: result pow(x,y)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
