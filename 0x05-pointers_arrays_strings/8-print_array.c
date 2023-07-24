#include "main.h"

#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 *   followed by a new line
 * @a: array of integers.
 * @nu: The number of elements to be printed.
 */

void print_array(int *a, int nu)
{
	int i;

	for (i = 0; i < nu; i++)
	{
		printf("%i", a[i]);
		if (i < nu - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
