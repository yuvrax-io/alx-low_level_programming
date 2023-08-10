#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: parameter of size to be allocated
 * Return: return pointer to allocated memory or exit with 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
