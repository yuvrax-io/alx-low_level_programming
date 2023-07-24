#include "main.h"

/**
* _strlen - returns the length of a string
* @strg: string passed
*
* Return: returns length of string passed
*/

int _strlen(char *strg)
{
	int count = 0;

	while (*strg != '\0')
	{
		strg++;
		count++;
	}
	return (count);
}
