#include "main.h"

/**
 * print_numbers - display number 0  to 9
 * using _putchar twice
 * Return: void
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
