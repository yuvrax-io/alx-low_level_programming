#include "main.h"

/**
 * print_last_digit - return the last digit of a number
 * @n: parameter of funtion
 *
 * Return: returns the last digit of number
 */
int print_last_digit(int n)
{
	int output;

	if (n >= 0)
		output = n % 10;
	else
		output = (n % 10) * -1;
	_putchar('0' + output);
	return (output);
}
