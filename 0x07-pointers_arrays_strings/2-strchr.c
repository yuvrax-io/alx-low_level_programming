#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s:string to be search
 * @c:the character to search
 * Return: pointer to the first occurrence 
 */

char *_strchr(char *s, char c)
{
	int len;

	for (len = 0; s[len] >= '\0'; len++)
	{
		if (s[len] == c)
		{
			return (s + len);
		}
	}

	return ('\0');
}
