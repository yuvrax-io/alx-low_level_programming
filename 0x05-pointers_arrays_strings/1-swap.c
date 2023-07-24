#include "main.h"

/**
* swap_int - Swaps the values of two integers
* @a: swapped with b
* @b: swapped with a
*
* Return: no return
*/
void swap_int(int *a, int *b)
{
	int tmp_a, tmp_b;

	tmp_a = *a;
	tmp_b = *b;

	*a = tmp_b;
	*b = tmp_a;
}
