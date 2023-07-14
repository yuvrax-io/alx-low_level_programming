#include <stdio.h>

/**
 * main - display the alphabet in lowercase
 * and  in uppercase in same line
 *
 * Return: sucess always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
