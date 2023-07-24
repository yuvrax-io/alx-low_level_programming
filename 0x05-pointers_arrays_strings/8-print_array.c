#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *   followed by a new line
 * @ar: array of integers.
 * @nu: The number of elements to be printed.
 */

void print_array(int *arr, int nu)
{
	int i;

	for (i = 0; i < nu; i++)
	{
		printf("%i", ar[i]);
		if (i < nu - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
