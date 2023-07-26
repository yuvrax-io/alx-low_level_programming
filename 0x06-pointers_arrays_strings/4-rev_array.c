#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */


void reverse_array(int *a, int n)
{
	int tmp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		tmp = a[counter];
		a[counter] = a[n];
		a[n] = tmp;
		n--;
		counter++;
}
