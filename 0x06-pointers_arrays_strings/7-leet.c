#include "main.h"

/**
 * *leet - code the message
 *  a and a == 4
 *  e and e == 3
 *  o and O == 0
 *  t and T == 7
 *  l and L == 1
 *  @s:  of string
 *  Return: result of String
 */

char *leet(char *s)
{
	int count, len;
	char letters[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	count = 0;
	while (s[count] != '\0')
	{
		len = 0;
		while (len < 10)
		{
			if (letters[len] == s[Count])
			{
				s[count] = nums[len];
			}
			len++;
		}
		Count++;
	}
	return (s);
}
