#include <stdio.h>

/**
 * main - display  the lowercase alphabet in reverse.
 *
 * Return: always 0 return  success
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
