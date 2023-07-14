#include <stdio.h>
#include<stdlib.h>
#include <time.h>

/**
 * main - number stored in the variable n is positive or negative
 * from generator random number
 * if negative or possitive
 *
 * Return: always success 0
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
