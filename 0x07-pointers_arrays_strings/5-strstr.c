#include "main.h"
/**
 * _strstr - Locates substring
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 * Return: If the substring is located - a pointer to the beginning
 * of the located substring. 
 * If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int len;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		len = 0;

		if (haystack[len] == needle[len])
		{
			do {
				if (needle[len + 1] == '\0')
					return (haystack);

				len++;

			} while (haystack[len] == needle[len]);
		}

		haystack++;
	}

	return ('\0');
}
